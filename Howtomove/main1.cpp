#include "stdafx.h"

void Showmenu()
{
	cout << "===================================" << endl;
	cout << "1. ���� " << endl;
	cout << "2. ���� ���� " << endl;
	cout << "3. ���� �������� " << endl;
	cout << "4. ���� ���� ��� " << endl;
	cout << "5. ����" << endl;
	cout << "===================================" << endl;
}

void Showmenuplus(int input) {

	switch (input)
	{
	case 1:
		cout << "����" << endl;						Sleep(1000);
		break;
	case 2:
		cout << "���� ����" << endl;				Sleep(1000);
		break;
	case 3:
		cout << "���� ��������" << endl;			Sleep(1000);
		break;
	case 4:
		cout << "���� ���� ���" << endl;		Sleep(1000);
		break;
	case 5:
		cout << "����" << endl;						Sleep(1000);
		break;
	default:
		cout << "�߸��� �Է°�" << endl;			Sleep(1000);
		break;
	}

}

void coutArrary(int a[])
{
	for(int i = 0; i < 20; i ++)
		cout << "���� �� " << i << " : " << a[i] << endl;
}

int main()
{
	//int input, Randnum;
	//srand(time(NULL)); C4244 ����ȯ ���� �߻�
	//cout << sizeof(time(NULL)) << endl; time(NULL)�� 8����Ʈ ũ�� ��ȯ �� srand(time(NULL))�� �Ѿ�鼭 8����Ʈ ũ�⸦ 4����Ʈ�� ���Ϸ��� �Ҷ� ������ ���µ���
	// �ذ� ����� �� ��ȯ ���


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


	
	//���ÿ� �迭
	int a[20];

	int dest, sour, temp;

	//���ÿ� �迭�� ���� ����ֱ�
	for (int i = 0; i < 20; i++)
		a[i] = i;

	//���ÿ� �迭 ���
	coutArrary(a);

	//���õ�����
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