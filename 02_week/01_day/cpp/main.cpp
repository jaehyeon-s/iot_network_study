#include <iostream>
#include <string>
using namespace std;

int main() {

	int num;
	cout << "1~10 사이의 숫자를 입력하세요: ";
	cin >> num;

	if (num > 10 || num < 1) {
		cout << "1~10 사이의 숫자가 아닙니다.";
		return 1;
	}

	cin.ignore();  // 없으면 '\n'이 남아 다음 getline 입력이 이상해짐

	string name1;
	cout << "이름을 입력하세요: ";
	getline(cin, name1);

	string name2;
	cout << "이름을 입력하세요: ";
	getline(cin, name2);

	if (num > 5)
		cout << "당신의 이름은 " << name1 << "입니다.";
	else
		cout << "당신의 이름은 " << name2 << "입니다.";

	return 0;
}
