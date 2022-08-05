#include "stdafx.h"

void Showmenu()
{
	cout << "===================================" << endl;
	cout << "1. 뭔데 " << endl;
	cout << "2. 뭔가 뭔가 " << endl;
	cout << "3. 뭔가 넣을것임 " << endl;
	cout << "4. 뭔가 넣을 기능 " << endl;
	cout << "5. 종료" << endl;
	cout << "===================================" << endl;
}

void Showmenuplus(int input) {

	switch (input)
	{
	case 1:
		cout << "뭔데" << endl;						Sleep(1000);
		break;
	case 2:
		cout << "뭔가 뭔가" << endl;				Sleep(1000);
		break;
	case 3:
		cout << "뭔가 넣을것임" << endl;			Sleep(1000);
		break;
	case 4:
		cout << "뭔가 넣을 기능" << endl;		Sleep(1000);
		break;
	case 5:
		cout << "종료" << endl;						Sleep(1000);
		break;
	default:
		cout << "잘못된 입력값" << endl;			Sleep(1000);
		break;
	}

}

void coutArrary(int a[])
{
	for(int i = 0; i < 20; i ++)
		cout << "셔플 후 " << i << " : " << a[i] << endl;
}

int main()
{
	//int input, Randnum;
	//srand(time(NULL)); C4244 형변환 오류 발생
	//cout << sizeof(time(NULL)) << endl; time(NULL)이 8바이트 크기 반환 함 srand(time(NULL))로 넘어가면서 8바이트 크기를 4바이트로 줄일려고 할때 오류가 나는듯함
	// 해결 명시적 형 변환 사용


	//Randnum = rand();

	//cout << Randnum << endl;

	//cout << INT_MAX << endl;
	//cout << sizeof(INT_MAX) << endl;
	//cout << sizeof(long long) << endl;

	/*

	while(true){
		system("cls");
		Showmenu();
		cin >> input;
		Showmenuplus(input);

		if (input == 5)
			break;
	}
	*/


	
	//셔플용 배열
	int a[20];

	int dest, sour, temp;

	//셔플용 배열에 숫자 집어넣기
	for (int i = 0; i < 20; i++)
		a[i] = i;

	//셔플용 배열 출력
	coutArrary(a);

	//셔플돌리기
	for (int i = 0; i < 20; i++)
	{
		dest = randomInt(20);
		sour = randomInt(20);

		temp = a[dest];
		a[dest] = a[sour];
		a[sour] = temp;
	}

	coutArrary(a);
	

	return 0;
}