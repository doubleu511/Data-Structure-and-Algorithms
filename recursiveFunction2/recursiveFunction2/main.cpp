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
		cout << "원반 1을 " << from << "에서 " << to << "로 이동" << endl;
	else
	{
		HanoiTower(num - 1, from, to, by);

		cout << "원반 " << num << "을(를)" << from << "에서" << to << "로 이동" << endl;

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

void FibonacciDisplay() // [필수 문제1] 피보나치수열 구현하기
{
	int n;
	cout << "피보나치 수열의 크기를 입력하세요 : ";
	cin >> n;

	for (int i = 1; i < n + 1; i++)
	{
		cout << Fibonacci(i) << endl;
	}
}

void HanoiDisplay() // [필수 문제2] 하노이 탑 구현하기
{
	int n;
	cout << "하노이 탑 : A의 원반 갯수를 입력하세요 : ";
	cin >> n;
	cout << endl;
	HanoiTower(n, 'A', 'B', 'C');
}

void SumAllDisplay() // [보너스 문제 1] n값을 입력 받아 1부터 n까지의 덧셈 구현하기(재귀함수 필수 사용)
{
	int n;
	cout << "1부터 n까지의 덧셈을 구합니다. n을 입력하세요 : ";
	cin >> n;

	cout << SumN(n) << endl;
}

void ReverseDisplay() // [보너스 문제 2] 입력받은 십진수를 거꾸로 출력하는 프로그램을 작성하시오. (재귀함수 필수 사용)
{
	int n;
	cout << "입력받은 십진수를 거꾸로 출력합니다 : ";
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