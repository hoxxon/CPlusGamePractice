#include "stdafx.h"
#include "MenuFunction.h"


void MenuOneFuc(UserData &a)
{
	system("cls");
	cout << "���� ��������ֱ�" << endl << endl;

	cout << "���� ID : ";	cin >> a.ID;
	cout << "���� PW : ";	cin >> a.PW;
	cout << "���� ���� : "; cin >> a.gender;

	cout << endl << endl;

	cout << "�Է��� �Ϸ�Ǿ����ϴ�." << endl;
}

void MenuTwoFuc(UserData &a)
{
	system("cls");
	cout << "���� ���������ֱ�" << endl << endl;

	cout << "����ID : " << a.ID << endl;
	cout << "����PW : " << a.PW << endl;
	cout << "���� ���� : " << a.gender << endl << endl;

	cout << "3�� �Ŀ� ����˴ϴ�.";

	Sleep(3000);
}

void MenuTrdFuc(UserData & a)
{
	system("cls");

	a.ID = "";
	a.PW = "";
	a.gender = "";

	cout << "���� ������ �����Ǿ����ϴ�" << endl << endl;

	cout << "3�� �Ŀ� ����˴ϴ�.";
	Sleep(3000);
}
