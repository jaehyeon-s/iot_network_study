#include <iostream>
using namespace std;

int main() {

	int arr[5] = { 0 };
	int sum = 0;

	int max = -99999999;
	int min = 99999999;

	for (int i = 0; i < 5; i++) {
		
		int num;
		cout << "숫자를 입력하세요: ";
		cin >> num;

		arr[i] = num;
		sum += arr[i];

		if (max <= arr[i])
			max = arr[i];
		if (min >= arr[i])
			min = arr[i];
	}

	int arr_size = sizeof(arr) / sizeof(int);

	double avg = (double)sum / arr_size;

	cout << "sum: " << sum << ", avg: " << avg << ", max: " << max << ", min: " << min;

	return 0;
}