#include <iostream>
using namespace std;

int main() {

	while (true) {
		char oper;
		int num1, num2;
		double result = 0.0;

		cout << "� ������ �Ͻ� �ǰ���(+, -, *, /, %) / ���Ḧ ���Ͻø� 'q' Ȥ�� 'Q' �� �����ּ���: ";
		cin >> oper;

		if (oper == 'q' || oper == 'Q') {
			cout << "����";
			break;
		}

		cout << "�� ���� ���ڸ� �Է����ּ���: ";
		cin >> num1 >> num2;

		if (oper == '+')
			result = num1 + num2;
		else if (oper == '-')
			result = num1 - num2;
		else if (oper == '*')
			result = num1 * num2;
		else if (oper == '/') {
			if (num2 == 0) {
				cout << "0���� ���� �� �����ϴ�. \n";
				continue;
			}
			result = (double)num1 / num2;
		}
		else if (oper == '%') {
			if (num2 == 0) {
				cout << "0���� ������ ������ �� �� �����ϴ�. \n";
				continue;
			}
			cout << "result = " << num1 % num2 << '\n';  // ������ ������ int �ε�, result �� double �̶� �߸��� ���� �� ���� ����
			continue;
		}
		else {
			cout << "+, -, *, /, %, q, Q �� �ϳ��� �Է����ּ���. \n";
			continue;
		}

		cout << "result = " << result << '\n';
	}

	return 0;
}