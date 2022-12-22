#include <iostream>
#include <string>
#include"nlohmann/json.hpp"
#include<vector>
#include<fstream>
using namespace std;

void save(vector<array<int, 2>> edges, nlohmann::json& res, int size, int& z, int a[2]);
void fun(vector<array<int, 2>> edges, int n, nlohmann::json& res, int size, int& z);
void getvector(vector<array<int, 2>>& edges, string path);
void outputer(vector<array<int, 2>>& edges, string path, string result, nlohmann::json res);
void test(string path, string result);

int main() {
	test("data1.json", "result1.json");
	test("data2.json", "result2.json");
	test("data3.json", "result3.json");
	test("data4.json", "result4.json");
	test("data5.json", "result5.json");

	return 0;
}

void test(string path, string result)
{
	vector<array<int, 2>> edges;
	getvector(edges, path);
	nlohmann::json res;
	int z = 0;
	fun(edges, 0, res, edges.size(), z);
	outputer(edges, path, result, res);

}

void getvector(vector<array<int, 2>>& edges, string path)
{

	nlohmann::json data;
	fstream k;
	k.open(path, fstream::in);
	if (k.is_open())
	{
		k >> data;

		k.close();
	}
	else
	{
		cout << "errorofopening";
		abort();
	}
	edges = data["graph"];
}

void fun(vector<array<int, 2>> edges, int n, nlohmann::json& res, int size, int& z)
{
	if (n < size) {

		fun(edges, n + 1, res, size, z);

		int a[2] = { edges[n][0],edges[n][1] };
		edges[n] = { 0,0 };
		bool chek_1 = false, chek_2 = false;
		for (int c = size - 1; c != -1; c--)
		{
			if (edges[c][0] == a[0] || edges[c][1] == a[0]) chek_1 = true;
			if (edges[c][0] == a[1] || edges[c][1] == a[1]) chek_2 = true;
		}
		if (chek_1 == false) edges.push_back({ a[0],a[0] });
		if (chek_2 == false) edges.push_back({ a[1],a[1] });

		z += 1;
		save(edges, res, size, z, a);
		
		fun(edges, n + 1, res, size, z);

	}
}

void save(vector<array<int, 2>> edges, nlohmann::json& res, int size, int& z, int a[2])
{
	for (int c = size - 1; c != -1; c--)
	{
		if (edges[c][0] == 0 && edges[c][0] == 0) {
			auto iter = edges.cbegin();
			edges.erase(iter + c);
		}
	}
	res["graph_" + to_string(z)] = edges;
}

void outputer(vector<array<int, 2>>& edges, string path, string result, nlohmann::json res)
{
	
	fstream l;
	l.open(result, fstream::out);
	if (l.is_open())
	{
		l << res;

		l.close();
	}
	else
	{
		cout << "errorofopening";
		abort();
	}

}