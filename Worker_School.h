#pragma once
#include<iostream>
#include<fstream>
#define LUJING "���򱨸�.txt"
using namespace std;
//������
class School_Worke;
//���һ��ѧУ������
class School_Worke
{
public:
	//���캯��
	School_Worke();
	//��������
	~School_Worke();
	//UI��ӡ���� ��ʾUI����
	void pring_UI()const;
	//�û������Ա����
	int User_Cin_Num;
public:
	//�����˳��߼�����
	void exit_Worker_School()const;
	//��������߼�����
	void Worke_Worker_School();
	//ͳ����������
	void add_school_Person();
	//�ͷ���������int*�����ڴ�
	void Delete_int(int *p)const;
};