#include <iostream>
using namespace std;

int main() {
	int n1 = 0xffffffff;
	unsigned int n2 = 0xffffffff;
	cout << n1 << "\n" << n2 << endl;

	int n3 = 5;
	double n4 = 2;
	double result = n3 / n4;
	cout << result << endl;

	int a, b = 10;
	(a = b) = 100; //(a=b)的返回值为a
	cout << a << "\t" << b << endl;

	auto flag = 0;
	if (flag) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	double d;
	d = n3 / 9;
	cout << typeid(d).name() << "\t" << d << endl;
}