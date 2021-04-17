//20415 ������
#include <iostream>
using namespace std;

int Factorial(int num)
{
	if (num == 0)
		return 1;
	else
		return num * Factorial(num - 1);
}

int Gauss(int num)
{
	if (num == 1)
		return 1;
	else
		return num + Gauss(num - 1);
}

void FactorialDisplay() // [�ʼ� ����] ���丮�� �Լ� �����ϱ�
{
	int n;

	cout << "���丮���� �Է��ϼ��� : !";
	cin >> n;

	cout << "!" << n << " = " << Factorial(n) << endl;
}

void SumDisplay() // [���ʽ� ���� 1] ���콺�� ���� �����ϱ�
{
	int n;
	int sumAll;
	cout << "���콺�� ����(����Լ� X) n�� �Է��ϼ���. : ";;
	cin >> n;

	sumAll = ((1 + n) * n) / 2;
	cout << "1���� n���� ���� �� = " << sumAll <<endl;
}

void SumDisplay2() // [���ʽ� ���� 2] ���콺�� ������ ������� �ʰ� 1���� 100���� ���� �����ϱ�(����Լ� �ʼ� ���)
{
	int n;
	int sumAll;
	cout << "���콺�� ����(����Լ� O) n�� �Է��ϼ���. : ";
	cin >> n;

	sumAll = Gauss(n);
;	cout << "1���� n���� ���� �� = " << sumAll << endl;
}

void FactorialDisplay2() // [���ʽ� ���� 3] ���丮�� �Լ��� ����Լ��� ������� �ʰ� �����غ���
{
	int n;
	int multiAll = 1;
	cout << "���丮��(����Լ�X)�� �Է��ϼ��� : !";
	cin >> n;

	for (int i = n; i > 0; i--)
	{
		multiAll *= i;
	}

	cout << "!" << n << " = " << multiAll << endl;
}

int main()
{
	FactorialDisplay();
	SumDisplay();
	SumDisplay2();
	FactorialDisplay2();

	return 0;
}