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
	cout << "---------- ѧУ��Ϣ����ϵͳ ----------" << endl;
	cout << "-------------------------------------" << endl;
	cout << "--------------- 1.���� --------------" << endl;
	cout << "--------------- 2.�˳� --------------" << endl;
	cout << "-------------------------------------" << endl;
}
void School_Worke::Worke_Worker_School()
{
	system("cls");
	cout << "---------------------------------------------" << endl;
	cout << "------------- ѧУ��Ϣ����ϵͳ --------------" << endl;
	cout << "--------- ��ӭʹ��ѧУ��Ϣ����ϵͳ! ---------" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "----------- 1.ͳ�� ����������Ϣ -------------" << endl;
	cout << "----------- 2.�鿴 ����������Ϣ -------------" << endl;
	cout << "----------- 3.���� ����������Ϣ -------------" << endl;
	cout << "----------- 4.ɾ�� ����������Ϣ -------------" << endl;
	cout << "----------- 5.���� ����������Ϣ -------------" << endl;
	cout << "----------- 6.���� ����������Ϣ -------------" << endl;
	cout << "----------- 7.��� ����������Ϣ -------------" << endl;
	cout << "----------- 8.�˳� ѧУ��Ϣ����ϵͳ ---------" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "����>";
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
		cout << "�û�δ��ȷѡ��ѡ��!" << endl;
		break;
	}
}
void School_Worke::exit_Worker_School()const
{
	cout << "ȷ���˳���\?" << endl;
	cout << "1.�˳� 2.����" << endl;
	int* User_cin_Num = new int;
	*User_cin_Num = 0;
	cin >> *User_cin_Num;
	if (*User_cin_Num == 1)
	{
		system("pause");
		this->Delete_int(User_cin_Num);
		fstream fst;
		fst.open(LUJING, ios::out | ios::app);
		fst << "���򷵻�ֵΪ0�����˳��ɹ�" << endl;
		fst.close();
		exit(0);
	}
	else if (*User_cin_Num == 2)
	{
		system("pause");
	}
	else
	{
		cout << "�û�δ��ȷѡ��ѡ��!" << endl;
		system("pause");
	}
	this->Delete_int(User_cin_Num);
	system("cls");
}
void School_Worke::add_school_Person()
{

}