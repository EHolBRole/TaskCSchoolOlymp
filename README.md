Hi!
Аскар в школе начал изучать математитку. Его внимание привлекло новое для него понятие числовой прямой. Аскар быстро научился вычислать расстояния между двумя отрезками на этой
прямой, задавать отрезки и интервалы на ней.
  Готовясь к контрольной работе, Аскар столкнулся со следующей задачей: "На числовой прямой задано n точек. Необходимо найти среди них две ближайшие". Расстояние между двумя
  точками числовой прямой x и y равно |x - y|.
      Требуется написать программу, которая поможет Аскару решить поставленную задачу.
##I N P U T##
Первая строка содержит количество точек n ( 2 <= n <= 105). Вторая строка содержит n различных целых чисел x(i) - координаты заданных точек числовой прямой. Числа в строке 
разделены пробелом. Значения всех координат x(i) не превосходят 109 по абсолютной величине. 
##O U T P U T##
В первой строке необходимо вывести минимальное расстояние между двумя точками, заданными во входном файле. Во второй строке выходного файла необходимо вывести номера точек, которым
соответсвует найденное расстояние. Точками нумеруются натуральными числами от 1 до n в том порядке, в котором они заданы во входном файле. Если ответов несколько, выведите тот из
них, в котором точки расположены левее других на числовой прямой. Первым выводится номер левой точки, далее через пробел - номер правой точки.