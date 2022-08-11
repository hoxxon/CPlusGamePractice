#include "Title.h"
#include "stdafx.h"

void ShowTitle()
{
	cout << "==================" << endl;
	cout << "1. 유저 정보집어넣기" << endl;
	cout << "2. 유저 정보보여주기" << endl;
	cout << "3. 유저 정보 삭제" << endl;
	cout << "4. 프로그램 나가기" << endl;
	cout << "==================" << endl;
}

void OutofValue()
{
	cout << "넘어선 값입니다." << endl;
	Sleep(3000);
	system("cls");
}
