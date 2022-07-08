#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<locale>
#include<windows.h>
#include<conio.h>
#include<iomanip>
#include<ctime>
#include<stdlib.h>
#include<cstdlib>
#include <sstream>
#include <utility>

#include<fstream>
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





///#define TXT "file.txt" 
//#define TXT "mainFiles.cpp" 
//#define WRITE_TO_FILE
#define READ_TO_FILE
int main() {
	setlocale(LC_ALL, "");



#ifdef WRITE_TO_FILE
	// создаём объект для записи в файл
	ofstream ifile;/*имя объекта*/; // объект класса ofstream
	//file.open(TXT); // связываем объект с файлом//этот файл нужен был для расчёта длинн строк и составления массива значений длинн строк
	ifile.open("file.txt", std::ios_base::app); // связываем объект с файлом//этот файл нужен был для расчёта длинн строк и составления массива значений длинн строк
	ifile << "Работа с файлами в С++" << endl; // запись строки в файл

	ifile.close(); // закрываем файл
	//system("C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Notepad++ file.txt");  
	//system("start notepad file.txt");    
#endif // WRITE_TO_FILE

#ifdef READ_TO_FILE


	char sz_filename[FILENAME_MAX] = {};
	cout << "Введжите имя файла: "; cin.getline(sz_filename, FILENAME_MAX);
	if (strstr(sz_filename, ".txt") == NULL) {
		strcat(sz_filename, ".txt");
		//функция strcat(str1,str2) выполняет конкатенацию строк
		//а именно к содержимлму str1 добавляет содержимое str2 если в str1 достаточно памяти, в противном случае
		//выдаёт ошибку
		//runtime check failure #2 или Heap corruption detected
		}
	
	// создаём объект для записи в файл
	ifstream rfile;/*имя объекта*/; // объект класса ofstream
	rfile.open(sz_filename);// связываем объект с файлом//этот файл нужен был для расчёта длинн строк и составления массива значений длинн строк
	if (rfile.is_open()) {
		const int SIZE = USHRT_MAX; //Размер буффера чтения
		char buffer[SIZE] = {}; //буффер чтения
		while (!rfile.eof()) {
			rfile.getline(buffer, SIZE);
			//rfile >> buffer;
			cout << buffer<<endl;
			
		}
		//system("start notepad file.txt");

	}
	else { std::cerr << "Error: file not found" << endl; }
	rfile.close(); // закрываем файл 
	char sz_command[FILENAME_MAX] = "start notepad ";
	strcat(sz_command, sz_filename);
	system(sz_command);
	//system("start notepad File.txt");
#endif // READ_TO_FILE






}


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


функция system позволяет вызвать любую команду командной строки windows



37.18
*/