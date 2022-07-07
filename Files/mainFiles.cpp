#include<iostream>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<locale>
#include<windows.h>
#include<fstream>
#include<conio.h>
#include<iomanip>
#include<ctime>
#include<stdlib.h>
#include<cstdlib>
#include <sstream>
#include <utility>

//using namespace System;

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;
using std::_Iosb;
using std::setw;
using std::pair;
using std::make_pair;


int main() {
	setlocale(LC_ALL, "");











}








// треугольник паскаля
int stroka = 0;
int kollvo_cifr_stroka = 0;
double chislo_mesta_v_stroke_treugolnika = 0;
int peremennaya = 0;
// создаём объект для записи в файл
//ofstream length_treangle;/*имя объекта*/; // объект класса ofstream
//length_treangle.open("length_treangle.txt"); // связываем объект с файлом//этот файл нужен был для расчёта длинн строк и составления массива значений длинн строк
						////////////length_treangle << "Работа с файлами в С++"; // запись строки в файл
						////////////length_treangle.close(); // закрываем файл
cout << "Введите номер строки треугольника "; cin >> stroka;
int file_count_simvolov_stroki = 0;//счётчик колличества значений в строке файла
int l = length_strok_paskal_plus_razdelitel[stroka];//записываем в переменную l количество символов n-строки из массива длинн строк и разделителей
													//относительно неё мы будем вычислять центр остальных строк с помощью переменной s
volatile long s = 0;//почему-то оптимизатор эту переменную удалял. пришлось заволатилить что-бы оптимизатор не посягался на неё
					//эта переменная хранит размер строки символов
(l % 2) ? l /= 2 : l = (l - 1) / 2;//здесь вычисляем середину n строки и будем выставлять по ней нулевую строку треугольника

for (int i = 0; i <= stroka; i++) { //тут перечисляем строки до введённой строки включительно// в i храним номер строки расчитываемой строки
	s = length_strok_paskal_plus_razdelitel[i];//получаем размер строки относительно позиции переменной i. крч с самого начала и до n строки включительно
	(s % 2) ? (s /= 2) : s = (s - 1) / 2;//s тоже делим пополам иначе всё собьётся
	for (int j = l - s; j != 0; j--) { cout << " "; }//тут считаем отступы для достижения вида треугольника))
	if (l - s == 0) { cout << " "; }//еасли длинны совпадают делаем пробел отступа для последней строки
	for (int m = 0; m <= i; m++) {//тут выводим строки треугольника
		chislo_mesta_v_stroke_treugolnika = factorial_2(i) / (factorial_2(m) * factorial_2(i - m));//можно и без переменной chislo_mesta_v_stroke_treugolnika. 
																								   //но она нужна была для подсчёта колличества символов в строке и вывода на экран
																								   //так ка процедура подсчёта не быстрая
					//peremennaya = chislo_cifr(chislo_mesta_v_stroke_treugolnika);// вот тут может быть косяк в расчетах так как из double преобразую в int
					//if (peremennaya > 6) { peremennaya = 11; }
					//kollvo_cifr_stroka += peremennaya;
		cout << chislo_mesta_v_stroke_treugolnika;
		cout << ((m == i) ? endl : "|");//если число в строке не последнее фигачим разделитель) а есди последнее то переход на новую строку.
	}
	////Работа с txt файлом////
			//kollvo_cifr_stroka = kollvo_cifr_stroka + i;// с этой строкой идёт посчет колличества символов в строке вместе с разделителями "|". Если закоментить будет считать без разделителей "|"
			//
			//if (file_count_simvolov_stroki == 16) { //Тут идет запись в файл колличества символов в строке треугольника. по 16 значений в строке файла txt
			//	if		( kollvo_cifr_stroka < 10) {      length_treangle << endl << "   " << kollvo_cifr_stroka << ","; }//форматируем строку. еденицы к еденицам
			//	else if ( kollvo_cifr_stroka < 100) {     length_treangle << endl << "  "  << kollvo_cifr_stroka << ","; }//форматируем строку. десятки к десяткам
			//	else if ( kollvo_cifr_stroka < 1000) {    length_treangle << endl << " "   << kollvo_cifr_stroka << ","; }//форматируем строку. сотни к сотням
			//	else	{								  length_treangle << endl <<		  kollvo_cifr_stroka << ","; }//форматируем строку. ну тут остаётся всё что больше 1000
			//	file_count_simvolov_stroki = 1;// начинаем отсчёт в новой строке
			//}
			//else {
			//	if		( kollvo_cifr_stroka < 10) {   length_treangle << "   " << kollvo_cifr_stroka << ","; file_count_simvolov_stroki++; }//форматируем строку. еденицы к еденицам
			//	else if ( kollvo_cifr_stroka < 100) {  length_treangle << "  "  << kollvo_cifr_stroka << ","; file_count_simvolov_stroki++; }//форматируем строку. десятки к десяткам
			//	else if ( kollvo_cifr_stroka < 1000) { length_treangle << " "   << kollvo_cifr_stroka << ","; file_count_simvolov_stroki++; }//форматируем строку. сотни к сотням
			//	else    {							   length_treangle <<		   kollvo_cifr_stroka << ","; file_count_simvolov_stroki++; }//форматируем строку. ну тут остаётся всё что больше 1000
			//}
			//kollvo_cifr_stroka = 0; cout << endl;//после окончания строки в файле обнуляем значение kollvo_cifr_stroka. Что бы начать считать с новой строки. и переходим на новую строку

}					//length_treangle.close(); // закрываем файл
cout << endl;
cout << razdelitel << endl;














/*
Работа с файлами
для работы с файлами так как и для вывода на экран и вв вода с клавиатуры используются потокию
для вывода на экран используется поток cout для ввода с клавиатуры поток cin
cout ячвляется обьектом класса ostream
a cin обьектом класса istream
для вывода инф не в консоль а в файл используется поток fout
для чтения инф не с клавиатуры а с файла исп поток fin
fout фвл обьектом класса offstream
fin явл обьектом класса ifstream
единственным отл между файловуми потоками и консольными явл то что консольные потоки уже существуют
как обьекты и эти обьекты привязаны к консоли а вот файловых потоков не существует
и для того что бы привязать их к какому то файлу их нужно для начала создать
потоки  cin(ввода)  cout(вывода)  находятся в библиотеке iostream
классы файловых потоков fin fout  находятся в библиотеке fstream
При создании файлового потока его обязательно привяз к файлу и тогда поток открывается.
Через открытый поток можно читать либо писать файл но после того как все операции над файлом закончены его обязательно нужно закрыть





*/