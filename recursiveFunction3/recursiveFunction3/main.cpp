//20415 이준협
#include <iostream>
using namespace std;

int tryCount = 0;

void MaxValue(int num)
{
	int input;
	cout << "숫자를 입력하세요. 5개 이상 입력 후, 입력을 중단하려면 0을 입력하세요 : ";
	cin >> input;

	if (input == 0)
	{
		if (tryCount >= 5)
		{
			cout << "가장 큰 값 : " << num << endl;
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

void MaxValueDisplay() // [필수 문제] 숫자를 5개 이상 입력 받아 그 중 최댓값을 출력하는 프로그램 작성하기(재귀함수 필수 사용)
{
	int input;
	cout << "숫자를 입력하세요. 5개 이상 입력 후, 입력을 중단하려면 0을 입력하세요 : ";
	cin >> input;
	tryCount++;
	MaxValue(input);
}

int main()
{
	MaxValueDisplay();

	return 0;
}