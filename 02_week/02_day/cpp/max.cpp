#include <iostream>
using namespace std;

// �ִ밪 �Ǻ���
int main() {

	int max = -999999;
	int num1, num2, num3;

	cout << "�� ���� ���ڸ� �Է����ּ���: ";
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

	cout << "���� ū ����: " << max << "�Դϴ�.";

	return 0;
}