#include <iostream>
using namespace std;

const int SIZE = 5;

void sortFunc() {
	int nums[SIZE];
	int num;
	cout << "�����ܼ�" << SIZE << "������" << endl;
	for (int i = 0; i < SIZE; ++i) {
		cout << "�����" << i + 1 << "������" << endl;
		cin >> num;
		nums[i] = num;
	}
	cout << endl;

	for (int i = 0; i < SIZE - 1; ++i) {
		int index = i; //��Сֵ������
		int minValue = nums[i]; //��Сֵ
		for (int j = i; j < SIZE; ++j) {
			if (nums[j] < minValue) {
				index = j;
				minValue = nums[j];
			}
		}
		//������ֵ
		nums[index] = nums[i];
		nums[i] = minValue;
	}

	for (int i = 0; i < SIZE; ++i) {
		cout << nums[i] << endl;
	}
}

int main() {
	sortFunc();
}