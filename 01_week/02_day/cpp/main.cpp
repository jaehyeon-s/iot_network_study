#include <iostream>
using namespace std;

int main() {

	int a = 23;  // 정수형

	float b = 11.1;  // 실수형(4바이트)
	double c = 11.1;  // 실수형(8바이트)

	char d = 'A';  // 문자형

	string e = "AB";  // 문자열형

	bool f = true;  // 불리언

	const int G = 100;  // 상수

	auto h = 12.3;  // 자동 타입

	cout << a << '\n';
	cout << b << '\n';
	cout << c << '\n';
	cout << d << '\n';
	cout << e << '\n';
	cout << f << '\n';
	cout << G << '\n';
	cout << h << '\n';

	return 0;
}