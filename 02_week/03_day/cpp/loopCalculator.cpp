#include <iostream>
using namespace std;

int main() {

	while (true) {
		char oper;
		int num1, num2;
		double result = 0.0;

		cout << "어떤 연산을 하실 건가요(+, -, *, /, %) / 종료를 원하시면 'q' 혹은 'Q' 를 눌러주세요: ";
		cin >> oper;

		if (oper == 'q' || oper == 'Q') {
			cout << "종료";
			break;
		}

		cout << "두 개의 숫자를 입력해주세요: ";
		cin >> num1 >> num2;

		if (oper == '+')
			result = num1 + num2;
		else if (oper == '-')
			result = num1 - num2;
		else if (oper == '*')
			result = num1 * num2;
		else if (oper == '/') {
			if (num2 == 0) {
				cout << "0으로 나눌 수 없습니다. \n";
				continue;
			}
			result = (double)num1 / num2;
		}
		else if (oper == '%') {
			if (num2 == 0) {
				cout << "0으로 나머지 연산을 할 수 없습니다. \n";
				continue;
			}
			cout << "result = " << num1 % num2 << '\n';  // 나머지 연산은 int 인데, result 는 double 이라 잘못된 값이 들어갈 수도 있음
			continue;
		}
		else {
			cout << "+, -, *, /, %, q, Q 중 하나를 입력해주세요. \n";
			continue;
		}

		cout << "result = " << result << '\n';
	}

	return 0;
}