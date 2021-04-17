#include <iostream>

using namespace std;

int Fibonacci(int num) 
{
	if (num == 1)
		return 0;

	if (num == 2)
		return 1;

	return Fibonacci(num - 1) + Fibonacci(num - 2);
}

void HanoiTower(int num, char from, char by, char to)
{
	if (num == 1)
		cout << "���� 1�� " << from << "���� " << to << "�� �̵�" << endl;
	else
	{
		HanoiTower(num - 1, from, to, by);

		cout << "���� " << num << "��(��)" << from << "����" << to << "�� �̵�" << endl;

		HanoiTower(num - 1, by, from, to);
	}
}

int SumN(int num)
{
	if (num == 1)
		return 1;
	else
		return num + SumN(num - 1);
}

void Reverse(int num)
{
	if (num == 0)
		return;

	int result = num;
	cout << result % 10;
	result /= 10;
	Reverse(result);
}

void FibonacciDisplay() // [�ʼ� ����1] �Ǻ���ġ���� �����ϱ�
{
	int n;
	cout << "�Ǻ���ġ ������ ũ�⸦ �Է��ϼ��� : ";
	cin >> n;

	for (int i = 1; i < n + 1; i++)
	{
		cout << Fibonacci(i) << endl;
	}
}

void HanoiDisplay() // [�ʼ� ����2] �ϳ��� ž �����ϱ�
{
	int n;
	cout << "�ϳ��� ž : A�� ���� ������ �Է��ϼ��� : ";
	cin >> n;
	cout << endl;
	HanoiTower(n, 'A', 'B', 'C');
}

void SumAllDisplay() // [���ʽ� ���� 1] n���� �Է� �޾� 1���� n������ ���� �����ϱ�(����Լ� �ʼ� ���)
{
	int n;
	cout << "1���� n������ ������ ���մϴ�. n�� �Է��ϼ��� : ";
	cin >> n;

	cout << SumN(n) << endl;
}

void ReverseDisplay() // [���ʽ� ���� 2] �Է¹��� �������� �Ųٷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (����Լ� �ʼ� ���)
{
	int n;
	cout << "�Է¹��� �������� �Ųٷ� ����մϴ� : ";
	cin >> n;

	cout << endl;
	Reverse(n);
}

int main()
{
	FibonacciDisplay();
	HanoiDisplay();
	SumAllDisplay();
	ReverseDisplay();

	return 0;
}