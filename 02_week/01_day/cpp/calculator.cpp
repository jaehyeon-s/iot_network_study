#include <iostream>
using namespace std;

int main() {

	// ����

	int num1, num2;
	char oper;
	double result = 0;

	cout << "� ������ �Ͻ� �ǰ���? (+, -, *, /, %): ";
	cin >> oper;

	cout << "���꿡 ����� ù��° ���� �Է����ּ���: ";
	cin >> num1;
	cout << "���꿡 ����� �ι�° ���� �Է����ּ���: ";
	cin >> num2;

	if (oper == '+')
		result = num1 + num2;
	else if (oper == '-')
		result = num1 - num2;
	else if (oper == '*')
		result = num1 * num2;
	else if (oper == '/') {
		if (num2 == 0) {
			cout << "0���� ���� �� �����ϴ�.";  // num2�� 0�� ��� ����
			return 1;
		}
		result = (double)num1 / num2;  // �� �� �ϳ��� �Ǽ����� ������� �Ǽ��� ��
	}
	else if (oper == '%') {
		if (num2 == 0) {
			cout << "0���� ���� �� �����ϴ�.";  // num2�� 0�� ��� ����
			return 1;
		}
		result = num1 % num2;
	}
	else {
		cout << "���� ���� ���� ������ �Դϴ�.";  // ���� �������� ��� ����
		return 1;
	}

	cout << "���� ���: " << result;

	return 0;
}