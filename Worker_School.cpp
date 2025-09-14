#include"Worker_School.h"
void School_Worke::Delete_int(int *p)const
{
	if (p != NULL)
	{
		delete p;
		p = NULL;
	}
}
School_Worke::School_Worke()
{
	this->User_Cin_Num = 0;
}
School_Worke::~School_Worke()
{

}
void School_Worke::pring_UI()const
{
	cout << "-------------------------------------" << endl;
	cout << "---------- 学校信息管理系统 ----------" << endl;
	cout << "-------------------------------------" << endl;
	cout << "--------------- 1.进入 --------------" << endl;
	cout << "--------------- 2.退出 --------------" << endl;
	cout << "-------------------------------------" << endl;
}
void School_Worke::Worke_Worker_School()
{
	system("cls");
	cout << "---------------------------------------------" << endl;
	cout << "------------- 学校信息管理系统 --------------" << endl;
	cout << "--------- 欢迎使用学校信息管理系统! ---------" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "----------- 1.统计 各种人物信息 -------------" << endl;
	cout << "----------- 2.查看 各种人物信息 -------------" << endl;
	cout << "----------- 3.查找 各种人物信息 -------------" << endl;
	cout << "----------- 4.删除 各种人物信息 -------------" << endl;
	cout << "----------- 5.更改 各种人物信息 -------------" << endl;
	cout << "----------- 6.排序 各种人物信息 -------------" << endl;
	cout << "----------- 7.清空 各种人物信息 -------------" << endl;
	cout << "----------- 8.退出 学校信息管理系统 ---------" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "输入>";
	cin >> this->User_Cin_Num;
	switch (User_Cin_Num)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		break;
	case 8:
		this->exit_Worker_School();
		break;
	default:
		cout << "用户未正确选择选项!" << endl;
		break;
	}
}
void School_Worke::exit_Worker_School()const
{
	cout << "确定退出吗\?" << endl;
	cout << "1.退出 2.返回" << endl;
	int* User_cin_Num = new int;
	*User_cin_Num = 0;
	cin >> *User_cin_Num;
	if (*User_cin_Num == 1)
	{
		system("pause");
		this->Delete_int(User_cin_Num);
		fstream fst;
		fst.open(LUJING, ios::out | ios::app);
		fst << "程序返回值为0程序退出成功" << endl;
		fst.close();
		exit(0);
	}
	else if (*User_cin_Num == 2)
	{
		system("pause");
	}
	else
	{
		cout << "用户未正确选择选项!" << endl;
		system("pause");
	}
	this->Delete_int(User_cin_Num);
	system("cls");
}
void School_Worke::add_school_Person()
{

}