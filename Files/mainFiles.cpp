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








// ����������� �������
int stroka = 0;
int kollvo_cifr_stroka = 0;
double chislo_mesta_v_stroke_treugolnika = 0;
int peremennaya = 0;
// ������ ������ ��� ������ � ����
//ofstream length_treangle;/*��� �������*/; // ������ ������ ofstream
//length_treangle.open("length_treangle.txt"); // ��������� ������ � ������//���� ���� ����� ��� ��� ������� ����� ����� � ����������� ������� �������� ����� �����
						////////////length_treangle << "������ � ������� � �++"; // ������ ������ � ����
						////////////length_treangle.close(); // ��������� ����
cout << "������� ����� ������ ������������ "; cin >> stroka;
int file_count_simvolov_stroki = 0;//������� ����������� �������� � ������ �����
int l = length_strok_paskal_plus_razdelitel[stroka];//���������� � ���������� l ���������� �������� n-������ �� ������� ����� ����� � ������������
													//������������ �� �� ����� ��������� ����� ��������� ����� � ������� ���������� s
volatile long s = 0;//������-�� ����������� ��� ���������� ������. �������� ������������ ���-�� ����������� �� ��������� �� ��
					//��� ���������� ������ ������ ������ ��������
(l % 2) ? l /= 2 : l = (l - 1) / 2;//����� ��������� �������� n ������ � ����� ���������� �� ��� ������� ������ ������������

for (int i = 0; i <= stroka; i++) { //��� ����������� ������ �� �������� ������ ������������// � i ������ ����� ������ ������������� ������
	s = length_strok_paskal_plus_razdelitel[i];//�������� ������ ������ ������������ ������� ���������� i. ��� � ������ ������ � �� n ������ ������������
	(s % 2) ? (s /= 2) : s = (s - 1) / 2;//s ���� ����� ������� ����� �� ��������
	for (int j = l - s; j != 0; j--) { cout << " "; }//��� ������� ������� ��� ���������� ���� ������������))
	if (l - s == 0) { cout << " "; }//����� ������ ��������� ������ ������ ������� ��� ��������� ������
	for (int m = 0; m <= i; m++) {//��� ������� ������ ������������
		chislo_mesta_v_stroke_treugolnika = factorial_2(i) / (factorial_2(m) * factorial_2(i - m));//����� � ��� ���������� chislo_mesta_v_stroke_treugolnika. 
																								   //�� ��� ����� ���� ��� �������� ����������� �������� � ������ � ������ �� �����
																								   //��� �� ��������� �������� �� �������
					//peremennaya = chislo_cifr(chislo_mesta_v_stroke_treugolnika);// ��� ��� ����� ���� ����� � �������� ��� ��� �� double ���������� � int
					//if (peremennaya > 6) { peremennaya = 11; }
					//kollvo_cifr_stroka += peremennaya;
		cout << chislo_mesta_v_stroke_treugolnika;
		cout << ((m == i) ? endl : "|");//���� ����� � ������ �� ��������� ������� �����������) � ���� ��������� �� ������� �� ����� ������.
	}
	////������ � txt ������////
			//kollvo_cifr_stroka = kollvo_cifr_stroka + i;// � ���� ������� ��� ������ ����������� �������� � ������ ������ � ������������� "|". ���� ����������� ����� ������� ��� ������������ "|"
			//
			//if (file_count_simvolov_stroki == 16) { //��� ���� ������ � ���� ����������� �������� � ������ ������������. �� 16 �������� � ������ ����� txt
			//	if		( kollvo_cifr_stroka < 10) {      length_treangle << endl << "   " << kollvo_cifr_stroka << ","; }//����������� ������. ������� � ��������
			//	else if ( kollvo_cifr_stroka < 100) {     length_treangle << endl << "  "  << kollvo_cifr_stroka << ","; }//����������� ������. ������� � ��������
			//	else if ( kollvo_cifr_stroka < 1000) {    length_treangle << endl << " "   << kollvo_cifr_stroka << ","; }//����������� ������. ����� � ������
			//	else	{								  length_treangle << endl <<		  kollvo_cifr_stroka << ","; }//����������� ������. �� ��� ������� �� ��� ������ 1000
			//	file_count_simvolov_stroki = 1;// �������� ������ � ����� ������
			//}
			//else {
			//	if		( kollvo_cifr_stroka < 10) {   length_treangle << "   " << kollvo_cifr_stroka << ","; file_count_simvolov_stroki++; }//����������� ������. ������� � ��������
			//	else if ( kollvo_cifr_stroka < 100) {  length_treangle << "  "  << kollvo_cifr_stroka << ","; file_count_simvolov_stroki++; }//����������� ������. ������� � ��������
			//	else if ( kollvo_cifr_stroka < 1000) { length_treangle << " "   << kollvo_cifr_stroka << ","; file_count_simvolov_stroki++; }//����������� ������. ����� � ������
			//	else    {							   length_treangle <<		   kollvo_cifr_stroka << ","; file_count_simvolov_stroki++; }//����������� ������. �� ��� ������� �� ��� ������ 1000
			//}
			//kollvo_cifr_stroka = 0; cout << endl;//����� ��������� ������ � ����� �������� �������� kollvo_cifr_stroka. ��� �� ������ ������� � ����� ������. � ��������� �� ����� ������

}					//length_treangle.close(); // ��������� ����
cout << endl;
cout << razdelitel << endl;














/*
������ � �������
��� ������ � ������� ��� ��� � ��� ������ �� ����� � �� ���� � ���������� ������������ �������
��� ������ �� ����� ������������ ����� cout ��� ����� � ���������� ����� cin
cout ��������� �������� ������ ostream
a cin �������� ������ istream
��� ������ ��� �� � ������� � � ���� ������������ ����� fout
��� ������ ��� �� � ���������� � � ����� ��� ����� fin
fout ��� �������� ������ offstream
fin ��� �������� ������ ifstream
������������ ��� ����� ��������� �������� � ����������� ��� �� ��� ���������� ������ ��� ����������
��� ������� � ��� ������� ��������� � ������� � ��� �������� ������� �� ����������
� ��� ���� ��� �� ��������� �� � ������ �� ����� �� ����� ��� ������ �������
������  cin(�����)  cout(������)  ��������� � ���������� iostream
������ �������� ������� fin fout  ��������� � ���������� fstream
��� �������� ��������� ������ ��� ����������� ������ � ����� � ����� ����� �����������.
����� �������� ����� ����� ������ ���� ������ ���� �� ����� ���� ��� ��� �������� ��� ������ ��������� ��� ����������� ����� �������





*/