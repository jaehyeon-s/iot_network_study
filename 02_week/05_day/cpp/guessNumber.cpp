#include <iostream>
#include <random>
using namespace std;

int main() {

	random_device rd;
	mt19937 mt(rd());

	while (true) {

		cout << "1~10 사이의 숫자를 맞춰보세요 (0 입력시 종료)" << '\n';
		cout << '\n';

		uniform_int_distribution<> uni(1, 10);

		int serect_number = uni(mt);
		int count = 1;

		while (true) {
			int guess;
			cout << "1~10 사이의 숫자를 입력해주세요: ";
			cin >> guess;

			cout << '\n';
			
			// 배운 내용은 아님 잘못된 입력이 들어올 때 예외처리
			if (!guess) {							// 숫자가 아닌 값이 입력된 경우
				cout << "올바른 숫자를 입력해주세요." << '\n';
				cout << '\n';
				cin.clear();						// 입력 플래그 초기화
				cin.ignore(numeric_limits<streamsize>::max(), '\n');	// 잘못된 입력 버퍼 제거
				continue;
			}

			if (guess == 0) {
				cout << "게임을 종료합니다." << '\n';
				return 0;
			}
			else if (guess < 1 || guess > 10) {
				cout << "1~10 사이의 숫자를 입력해주세요" << '\n';
				cout << '\n';
				continue;
			}

			if (serect_number == guess) {
				cout << "맞췄습니다" << '\n';
				cout << "시도 횟수: " << count << '\n';
				break;
			}
			else {
				cout << "틀렸습니다" << '\n';
				cout << '\n';
				count++;
			}
		}

		cout << '\n';

		char retry;
		cout << "게임을 계속하시겠습니까? (Y/N)" << '\n';
		cin >> retry;

		if (retry == 'Y' || retry == 'y') {
			cout << "게임을 다시 시작하겠습니다" << '\n';
			continue;
		}
		else if (retry == 'N' || retry == 'n') {
			cout << "게임을 종료합니다" << '\n';
			break;
		}
		else {
			cout << "잘못된 입력입니다. 게임을 종료합니다." << '\n';
			break;
		}
	}

	return 0;
}
