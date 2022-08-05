#include "stdafx.h"
#include "MenuFunction.h"


void MenuOneFuc(UserData &a)
{
	system("cls");
	cout << "유저 정보집어넣기" << endl << endl;

	cout << "유저 ID : ";	cin >> a.ID;
	cout << "유저 PW : ";	cin >> a.PW;
	cout << "유저 성별 : "; cin >> a.gender;

	cout << endl << endl;

	cout << "입력이 완료되었습니다." << endl;
}

void MenuTwoFuc(UserData &a)
{
	system("cls");
	cout << "유저 정보보여주기" << endl << endl;

	cout << "유저ID : " << a.ID << endl;
	cout << "유저PW : " << a.PW << endl;
	cout << "유저 성별 : " << a.gender << endl << endl;

	cout << "3초 있다가 종료됩니다.";

	Sleep(3000);
}
