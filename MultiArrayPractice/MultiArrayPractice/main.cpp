//20415 ������
#include <iostream>
using namespace std;

void ReversePrint(char arr[])
{
	int i, length = 0;
	while (arr[length] != 0)
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		cout << arr[i];
	}

	cout << " ";
}

int main()
{
	// �Ľ�Į�� �ﰢ��
	int a[10][10] = { 0, };
	int i, j;

	for (i = 0; i < 10; i++)
		a[i][0] = 1;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > 0 && i > 0)
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			if (a[i][j] > 0)
				cout << a[i][j] << " ";
		}
		cout << endl;
	}


	// ������ �迭 ���� �Ųٷ�
	char str[3][10] = { 0, };

	for (int i = 0; i < 3; i++)
	{
		cout << endl << "������ ���ڿ��� 3�� �Է��ϼ��� : ";
		cin >> str[i];
	}
	ReversePrint(str[0]);
	ReversePrint(str[1]);
	ReversePrint(str[2]);

	return 0;
}