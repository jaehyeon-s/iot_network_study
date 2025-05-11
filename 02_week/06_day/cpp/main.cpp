#include <iostream>
#include <random>
using namespace std;

void generate_random_pwd(char *pwd, int len) {

	random_device rd;
	mt19937 mt(rd());
	for (int i = 0; i < len; i++) {
		int rand_select = mt() % 4 + 1;

		if (rand_select == 1)
			pwd[i] = mt() % 26 + 'a';
		else if(rand_select == 2)
			pwd[i] = mt() % 26 + 'A';
		else if(rand_select == 3)
			pwd[i] = mt() % 10 + '0';
		else
			pwd[i] = mt() % 15 + 33;
	}
}

void print_pwd(const char *pwd, int len) {
	for (int i = 0; i < len; i++)
		cout << pwd[i];
	cout << '\n';
}

int main() {
	const int len = 10;
	char pwd[len];

	cout << "랜덤 10자리 비밀번호 생성기" << '\n';

	generate_random_pwd(pwd, len);
	print_pwd(pwd, len);

	return 0;
}