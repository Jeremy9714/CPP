#include <iostream>
using namespace std;

const int SIZE = 5;

void sortFunc() {
	int nums[SIZE];
	int num;
	cout << "输入总计" << SIZE << "个数字" << endl;
	for (int i = 0; i < SIZE; ++i) {
		cout << "输入第" << i + 1 << "个数字" << endl;
		cin >> num;
		nums[i] = num;
	}
	cout << endl;

	for (int i = 0; i < SIZE - 1; ++i) {
		int index = i; //最小值的索引
		int minValue = nums[i]; //最小值
		for (int j = i; j < SIZE; ++j) {
			if (nums[j] < minValue) {
				index = j;
				minValue = nums[j];
			}
		}
		//交换数值
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