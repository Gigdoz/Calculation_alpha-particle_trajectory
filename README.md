# Calculation of the trajectory of an alpha particle near the nucleus of a gold atom

# Эта библиотека расчитывает траекторию альфа-частицы вблизи ядра атома золота.

Пример использование в файле test. Для расчёта задаются четыре параметра: Энергия, расстояние до ядра, высота, временной шаг.
Параметры задаются в Мэв, пм, временной шаг не имеет размерности. При расчёте все параметры обезмерены.
Для численного расчёта точек трека используется метод Верне с остаточным членом с порядком О(dt^3).

# Результат записывается в файл
Позже добавлю запись из файла в массив.

# Построения траектории по точкам
Для этого можно применить различные программы, я лично использовал Gnuplot. Траектория строится из полученного файла с точками 
(координаты записаны колонками, 1 столбец - х. 2 столбец - у).
