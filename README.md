# Calculation of the trajectory of an alpha particle near the nucleus of a gold atom

# Эта библиотека расчитывает траекторию альфа-частицы вблизи ядра атома золота. Результат записывается в файл.

Пример использование в файле test. Для расчёта задаются четыре параметра: Энергия, расстояние до ядра, высота, временной шаг.
Параметры задаются в Мэв, пм, временной шаг не имеет размерности. При расчёте все параметры обезмерены.
Для численного расчёта точек трека используется метод Стёрмера-Верле с остаточным членом с порядком О(dt^4).

# Построение траектории по точкам
Для этого можно применить различные программы, я лично использовал Gnuplot. Траектория строится из полученного файла с точками 
(координаты записаны колонками, 1 столбец - х. 2 столбец - у).
