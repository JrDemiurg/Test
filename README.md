# Описание первой лабораторной работы
55 Создать файл sh и bat, который выполняет следующее: 
На вход пакетному файлу приходит относительный или абсолютный путь к папке (как параметры пакетного файла). Пакетный файл синхронизирует содержимое первой папки с содержимым второй папкой. В первой папке должен оказаться тот же набор файлов, что и во второй (если файла нет – он копируется из второй, если найдется файл, которого нет во второй - удаляется из первой). Если файл с некоторым именем есть и в первой папке и во второй папке – удалять и перезаписывать его не допускается
## bat
```
@echo off;
set dir1=%1;
set dir2=%2;
for /f "delims==" %%i in ('dir /b /a %dir1%') do (;
if not exist "%dir2%\%%i" del "%dir1%\%%i");
for /f "delims==" %%i in ('dir /b /a %dir2%') do (;
if not exist "%dir1%\%%i" xcopy /E "%dir2%\%%i" %dir1% );
pause;
```
## sh
```
#!/bin/bash;
;
if [ -z $1 -o -z $2 ];
then;
  echo "значения не введены";
else;
   cd $1;
   for i in *;
   do;
   find $2 "$2/$i" || rm "$1/$i";
   done;
;
   cd $2;
   for i in *;
   do;
   find $1 "$1/$i" || cp -r "$2/$i" $1;
   done;
fi;
```
![graph_1](https://user-images.githubusercontent.com/116432612/209237041-d0311fce-077b-4d8b-a3a7-630f92c873b4.png)
