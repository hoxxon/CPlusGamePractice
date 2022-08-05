#include "stdafx.h"
#include "Title.h"
#include "MenuFunction.h"

int main() 
{

	int choice = 0;
	bool run = true;
	ShowTitle();

	UserData UD;

	UD.ID = "User1Test ID";
	UD.PW = "User1Test PW";
	UD.gender = true;

	do
	{
		system("cls");
		ShowTitle();
		cin >> choice;

		switch (choice)
		{
		case 1:
			MenuOneFuc(UD);
			break;
		case 2:
			MenuTwoFuc(UD);
			break;
		case 3:
			run = 0;
		default:
			break;
		}
	} while (run);

	cout << "do while¹® Å»Ãâ";
}