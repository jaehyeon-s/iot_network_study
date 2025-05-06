#include <iostream>
using namespace std;

// 만 나이로 분류
int main() {

	int age;

	cout << "만 나이를 입력하세요: ";
	cin >> age;

	if (age >= 0 && age <= 12)
		cout << "어린이";
	else if (age >= 13 && age <= 18)
		cout << "청소년";
	else if (age >= 19 && age <= 64)
		cout << "성인";
	else if (age >= 65)
		cout << "노인";
	else
		cout << "나이에 음수는 입력될 수 없습니다.";

	return 0;
}
