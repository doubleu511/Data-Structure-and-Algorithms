//20415 ������
#include <iostream>
using namespace std;

int tryCount = 0;

void MaxValue(int num)
{
	int input;
	cout << "���ڸ� �Է��ϼ���. 5�� �̻� �Է� ��, �Է��� �ߴ��Ϸ��� 0�� �Է��ϼ��� : ";
	cin >> input;

	if (input == 0)
	{
		if (tryCount >= 5)
		{
			cout << "���� ū �� : " << num << endl;
			return;
		}
	}

	tryCount++;

	if (num < input)
	{
		MaxValue(input);
	}
	else
	{
		MaxValue(num);
	}
}

void MaxValueDisplay() // [�ʼ� ����] ���ڸ� 5�� �̻� �Է� �޾� �� �� �ִ��� ����ϴ� ���α׷� �ۼ��ϱ�(����Լ� �ʼ� ���)
{
	int input;
	cout << "���ڸ� �Է��ϼ���. 5�� �̻� �Է� ��, �Է��� �ߴ��Ϸ��� 0�� �Է��ϼ��� : ";
	cin >> input;
	tryCount++;
	MaxValue(input);
}

int main()
{
	MaxValueDisplay();

	return 0;
}