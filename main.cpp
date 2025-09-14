//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<ctime>
#include"Worker_School.h"
#define LUJING "程序报告.txt"
#define MYNAME "周向阳" 
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
		if (User_cin == 1)//处理进入
		{
			SW.Worke_Worker_School();
		}
		else if (User_cin == 2)//处理退出
		{
			SW.exit_Worker_School();
		}
		else
		{
			cout << "用户未正确选择选项!" << endl;
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
	fst << "程序报告" << endl;
	fst << "报告人: " << MYNAME << endl;
	fst<<"报告时间:"<< ltm->tm_year<<"年"<< ltm->tm_mon<<"月"<< ltm->tm_mday<<"日"<<"时间"<< ltm->tm_hour << ":";
	fst << ltm->tm_min << ":";
	fst << ltm->tm_sec << endl;
	fst << "------------------------------" << endl;
	fst << "报告内容:" << endl;
	fst << "程序以正常启动" << endl;
	fst.close();
	worke();
	return 0;
}