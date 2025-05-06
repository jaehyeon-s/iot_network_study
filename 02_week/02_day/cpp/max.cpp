#include <iostream>
using namespace std;

// 최대값 판별기
int main() {

	int max = -999999;
	int num1, num2, num3;

	cout << "세 개의 숫자를 입력해주세요: ";
	cin >> num1 >> num2 >> num3;

	if (num1 >= num2) {
		if (num1 >= num3)
			max = num1;
		else
			max = num3;
	}
	else {
		if (num2 >= num3)
			max = num2;
		else
			max = num3;
	}

	cout << "가장 큰 값은: " << max << "입니다.";

	return 0;
}