#include <iostream>
#include <random>
using namespace std;

int main() {

	random_device rd;
	mt19937 mt(rd());

	while (true) {

		cout << "1~10 ������ ���ڸ� ���纸���� (0 �Է½� ����)" << '\n';
		cout << '\n';

		uniform_int_distribution<> uni(1, 10);

		int serect_number = uni(mt);
		int count = 1;

		while (true) {
			int guess;
			cout << "1~10 ������ ���ڸ� �Է����ּ���: ";
			cin >> guess;

			cout << '\n';

			if (!guess) {												// ���ڰ� �ƴ� ���� �Էµ� ���
				cout << "�ùٸ� ���ڸ� �Է����ּ���." << '\n';
				cout << '\n';
				cin.clear();											// �Է� �÷��� �ʱ�ȭ
				cin.ignore(numeric_limits<streamsize>::max(), '\n');	// �߸��� �Է� ���� ����
				continue;
			}

			if (guess == 0) {
				cout << "������ �����մϴ�." << '\n';
				return 0;
			}
			else if (guess < 1 || guess > 10) {
				cout << "1~10 ������ ���ڸ� �Է����ּ���" << '\n';
				cout << '\n';
				continue;
			}

			if (serect_number == guess) {
				cout << "������ϴ�" << '\n';
				cout << "�õ� Ƚ��: " << count << '\n';
				break;
			}
			else {
				cout << "Ʋ�Ƚ��ϴ�" << '\n';
				cout << '\n';
				count++;
			}
		}

		cout << '\n';

		char retry;
		cout << "������ ����Ͻðڽ��ϱ�? (Y/N)" << '\n';
		cin >> retry;

		if (retry == 'Y' || retry == 'y') {
			cout << "������ �ٽ� �����ϰڽ��ϴ�" << '\n';
			continue;
		}
		else if (retry == 'N' || retry == 'n') {
			cout << "������ �����մϴ�" << '\n';
			break;
		}
		else {
			cout << "�߸��� �Է��Դϴ�. ������ �����մϴ�." << '\n';
			break;
		}
	}

	return 0;
}