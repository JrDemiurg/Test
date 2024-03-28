## Диаграмма состояний
Составлена диаграмма состояний программной системы:
![State_Diagram](https://github.com/JrDemiurg/Test/assets/116432612/987468df-4910-4588-bebe-2fd810af75f5)

## Диаграмма классов
На основе выделенных сущностей и состояний созданы следующие классы:
![image_2024-03-27_12-16-06](https://github.com/JrDemiurg/Test/assets/116432612/5950a533-8453-4a10-8665-5177e16819e1)

# Метро-симулятор

Эта программа представляет собой симулятор работы поезда, который позволяет управлять движением поездов, созданием станций и пассажиров, перевозкой пассажиров и созданием расписания.

## Описание файлов

1. `Railway.py`: Класс `Railway`, представляет собой железнодорожный руть.
2. `Schedule.py`: Класс `Schedule`, представляет собой расписание. Класс `SchedeleItem`, представляет собой пункт расписания.
3. `Station.py`: Класс `Station`, описывающий станцию железнодорожного пути.
4. `Ticket.py`: Класс `Ticket`, представляет билет на проезд.
5. `Person.py`: Класс `Person`, описывающий пассажира поезда.
6. `Train.py`: Класс `Train`, представляющий поезд метро. Класс вагон, представляющий сабой вагон. 

## Как использовать

1. При запуске программы сначала создается начальное состояние метро, которое можно сохранить в файл.
2. Далее открывается главное меню, в котором доступны следующие опции:
   - Добавить станцию на железнодорожный путь.
   - Добавить человека на станцию.
   - Показать информацию о станциях.
   - Проехать поездом на 1 станцию вперёд.
   - Поссадить пассажиров в выбранный вагон.
   - Выгрузить пассажиров из поезда.
   - Добавить пункт в расписание
   - Показать расписание.
   - Выйти из программы.
  
![image_2024-03-27_22-09-04](https://github.com/JrDemiurg/Test/assets/116432612/d3e404fe-288b-431b-86f5-163a4eddd10f)

## Пример использования

1. Создание начального состояния программы.
2. Показ количества людей на станциях.
3. Добавление нового пассажира на станцию.
4. Перемещение пассажиров с помощью поезда.
5. Сохранение состояния программы в файл.

## Требования к окружению

Для запуска программы требуется Python 3.12

## Зависимости

Отсутствуют.
