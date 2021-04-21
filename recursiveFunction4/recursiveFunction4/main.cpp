#include <iostream>
using namespace std;

void NumberReverse(int number)
{
	cout << number << endl;
	if (number == 1)
		return;
	NumberReverse(number - 1);
}

void OddNumber(int number, int number2)
{
	if (number % 2 == 1 && number <= number2)
		cout << number << ", ";
	else if (number % 2 == 0 && number + 1 <= number2)
		cout << number + 1 << ", ";
	else return;

	OddNumber(number + 2, number2);
}

void EvenNumber(int number, int number2)
{
	if (number % 2 == 0 && number <= number2)
		cout << number << ", ";
	else if (number % 2 == 1 && number + 1 <= number2)
		cout << number + 1 << ", ";
	else return;

	EvenNumber(number + 2, number2);
}

void NumberReverseDisplay()
{
	int n;
	cout << "n���� 1���� ����մϴ� n�� �Է��ϼ��� : ";
	cin >> n;

	NumberReverse(n);
}

void OddNumberDisplay()
{
	int x,y;
	cout <<  "���� �ΰ��� �Է��ϼ���, �� ������ Ȧ���� ����մϴ� : ";
	cin >> x;
	cin >> y;

	OddNumber(x,y);
}

void EvenNumberDisplay()
{
	int x, y;
	cout << endl << "���� �ΰ��� �Է��ϼ���, �� ������ ¦���� ����մϴ� : ";
	cin >> x;
	cin >> y;

	EvenNumber(x,y);
}

int main()
{
	NumberReverseDisplay();
	OddNumberDisplay();
	EvenNumberDisplay();

	return 0;
}