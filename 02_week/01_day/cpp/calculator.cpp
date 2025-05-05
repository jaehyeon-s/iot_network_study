#include <iostream>
using namespace std;

int main() {

	// 계산기

	int num1, num2;
	char oper;
	double result = 0;

	cout << "어떤 연산을 하실 건가요? (+, -, *, /, %): ";
	cin >> oper;

	cout << "연산에 사용할 첫번째 값을 입력해주세요: ";
	cin >> num1;
	cout << "연산에 사용할 두번째 값을 입력해주세요: ";
	cin >> num2;

	if (oper == '+')
		result = num1 + num2;
	else if (oper == '-')
		result = num1 - num2;
	else if (oper == '*')
		result = num1 * num2;
	else if (oper == '/') {
		if (num2 == 0) {
			cout << "0으로 나눌 수 없습니다.";  // num2가 0인 경우 종료
			return 1;
		}
		result = (double)num1 / num2;  // 둘 중 하나라도 실수여야 결과값이 실수가 됨
	}
	else if (oper == '%') {
		if (num2 == 0) {
			cout << "0으로 나눌 수 없습니다.";  // num2가 0인 경우 종료
			return 1;
		}
		result = num1 % num2;
	}
	else {
		cout << "계산기 내에 없는 연산자 입니다.";  // 없는 연산자일 경우 종료
		return 1;
	}

	cout << "연산 결과: " << result;

	return 0;
}