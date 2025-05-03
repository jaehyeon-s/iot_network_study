#include <iostream>
using namespace std;

int main() {

	int a = 1 + 5;

	double b = 1.5 - 40.2;

	int c = 6 * 4;

	double d = 35.0 / 24.0;  // 실수로 잘 출력됨
	double e = 73 / 14;  // 정수로 출력됨 (우리가 원하는 값이 아님)

	int f = 14 % 4;

	cout << a << " " << b << " " << c << " " << d << " " << e << " " << f;

	return 0;
}
