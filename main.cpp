//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<ctime>
#include"Worker_School.h"
#define LUJING "���򱨸�.txt"
#define MYNAME "������" 
using namespace std;
void worke()
{
	School_Worke SW;
	//SW.pring_UI();
	int User_cin = 0;
	while (true)
	{
		SW.pring_UI();
		cin >> User_cin;
		if (User_cin == 1)//�������
		{
			SW.Worke_Worker_School();
		}
		else if (User_cin == 2)//�����˳�
		{
			SW.exit_Worker_School();
		}
		else
		{
			cout << "�û�δ��ȷѡ��ѡ��!" << endl;
		    system("pause");
		}
	}
}
int main()
{
	fstream fst;
	fst.open(LUJING,ios::out | ios::app);
	time_t now = time(0);
	tm* ltm = localtime(&now);
	fst << "------------------------------" << endl;
	fst << "���򱨸�" << endl;
	fst << "������: " << MYNAME << endl;
	fst<<"����ʱ��:"<< ltm->tm_year<<"��"<< ltm->tm_mon<<"��"<< ltm->tm_mday<<"��"<<"ʱ��"<< ltm->tm_hour << ":";
	fst << ltm->tm_min << ":";
	fst << ltm->tm_sec << endl;
	fst << "------------------------------" << endl;
	fst << "��������:" << endl;
	fst << "��������������" << endl;
	fst.close();
	worke();
	return 0;
}