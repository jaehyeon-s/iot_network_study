#include <iostream>
using namespace std;

// ���̷� �з�
int main() {

	int age;

	cout << "�� ���̸� �Է��ϼ���: ";
	cin >> age;

	if (age >= 0 && age <= 12)
		cout << "���";
	else if (age >= 13 && age <= 18)
		cout << "û�ҳ�";
	else if (age >= 19 && age <= 64)
		cout << "����";
	else if (age >= 65)
		cout << "����";
	else
		cout << "���̿� ������ �Էµ� �� �����ϴ�.";

	return 0;
}