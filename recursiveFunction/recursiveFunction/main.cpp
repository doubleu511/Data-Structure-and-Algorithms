//20415 이준협
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

void FactorialDisplay() // [필수 문제] 팩토리얼 함수 구현하기
{
	int n;

	cout << "팩토리얼을 입력하세요 : !";
	cin >> n;

	cout << "!" << n << " = " << Factorial(n) << endl;
}

void SumDisplay() // [보너스 문제 1] 가우스의 계산법 구현하기
{
	int n;
	int sumAll;
	cout << "가우스의 계산법(재귀함수 X) n을 입력하세요. : ";;
	cin >> n;

	sumAll = ((1 + n) * n) / 2;
	cout << "1부터 n까지 더한 값 = " << sumAll <<endl;
}

void SumDisplay2() // [보너스 문제 2] 가우스의 계산법을 사용하지 않고 1부터 100까지 덧셈 구현하기(재귀함수 필수 사용)
{
	int n;
	int sumAll;
	cout << "가우스의 계산법(재귀함수 O) n을 입력하세요. : ";
	cin >> n;

	sumAll = Gauss(n);
;	cout << "1부터 n까지 더한 값 = " << sumAll << endl;
}

void FactorialDisplay2() // [보너스 문제 3] 팩토리얼 함수를 재귀함수를 사용하지 않고 구현해보기
{
	int n;
	int multiAll = 1;
	cout << "팩토리얼(재귀함수X)을 입력하세요 : !";
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