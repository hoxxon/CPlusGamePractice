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

	cout << "3�� �ִٰ� ����˴ϴ�.";

	Sleep(3000);
}
