#pragma once
#include<iostream>
#include<fstream>
#define LUJING "程序报告.txt"
using namespace std;
//类声明
class School_Worke;
//设计一个学校管理类
class School_Worke
{
public:
	//构造函数
	School_Worke();
	//析构函数
	~School_Worke();
	//UI打印函数 显示UI界面
	void pring_UI()const;
	//用户输入成员变量
	int User_Cin_Num;
public:
	//处理退出逻辑函数
	void exit_Worker_School()const;
	//处理进入逻辑函数
	void Worke_Worker_School();
	//统计人数函数
	void add_school_Person();
	//释放数据类型int*堆区内存
	void Delete_int(int *p)const;
};