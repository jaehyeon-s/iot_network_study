#include <iostream>
#include <string>
using namespace std;

int main() {

	int num;
	cout << "1~10 ������ ���ڸ� �Է��ϼ���: ";
	cin >> num;

	if (num > 10 || num < 1) {
		cout << "1~10 ������ ���ڰ� �ƴմϴ�.";
		return 1;
	}

	cin.ignore();

	string name1;
	cout << "�̸��� �Է��ϼ���: ";
	getline(cin, name1);

	string name2;
	cout << "�̸��� �Է��ϼ���: ";
	getline(cin, name2);

	if (num > 5)
		cout << "����� �̸��� " << name1 << "�Դϴ�.";
	else
		cout << "����� �̸��� " << name2 << "�Դϴ�.";

	return 0;
}