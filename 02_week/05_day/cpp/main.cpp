#include <iostream>
#include <cstdlib>  // std::rand(), std::srand()
#include <ctime>	// std::time()
#include <random>
using namespace std;

/* min���� max������ ���� �����ϰ� ����
int getRandomNumber(int min, int max) {
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}
*/

int main() {

	// srand(5323);								// seed ������
	/*
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 1; i <= 100; i++) {
		cout << rand() % 4 + 5 << '\t';			// 5~8������ ��
		cout << getRandomNumber(1, 8) << '\t';	// 1~8������ ��

		if (i % 5 == 0) cout << '\n';
	}
	*/

	random_device rd;
	mt19937 mesenne(rd());						// create a mesenne twister
	uniform_int_distribution<> dice(1, 6);		// 1~6������ ��

	for (int i = 1; i <= 20; i++)
		cout << dice(mesenne) << '\n';

	return 0;
}