#include <iostream>
using namespace std;

class CArray {
	int size;
	int* ptr;
public:
	CArray() {}
	CArray(int);
	CArray(const CArray&);
	int& operator[](int num) { return ptr[num]; }
	CArray& operator=(const CArray& ca);
	void push_back(int);
	int length() { return size; }
	~CArray() { delete[] ptr; }
};

CArray::CArray(int s) :size(s) {
	if (s == 0) {
		ptr = NULL;
	}
	else {
		ptr = new int[size];
	}
}

CArray::CArray(const CArray& ca) {
	if (!ca.ptr) {
		size = 0;
		ptr = NULL;
		return;
	}

	ptr = new int[ca.size];
	memcpy(ptr, ca.ptr, sizeof(int) * ca.size);
	size = ca.size;
}

CArray& CArray::operator=(const CArray& ca) {
	if (ptr == ca.ptr) {
		return *this;
	}
	if (!ca.ptr) {
		if (ptr) {
			delete[] ptr;
		}
		size = 0;
		ptr = NULL;
		return *this;
	}
	if (size < ca.size) {
		if (ptr) {
			delete[] ptr;
		}
		ptr = new int[ca.size];
	}
	memcpy(ptr, ca.ptr, sizeof(int) * ca.size);
	size = ca.size;
	return *this;
}

void CArray::push_back(int num) {
	if (ptr) {
		int* tmp = new int[++size];
		memcpy(tmp, ptr, sizeof(int) * size);
		delete[] ptr;
		ptr = tmp;
	}
	else {
		ptr = new int[1];
		size = 1;
	}
	ptr[size - 1] = num;
}

void override1() {
	CArray c1;
	for (int i = 0; i < 5; ++i) {
		c1.push_back(i);
	}
	for (int i = 0; i < c1.length(); ++i) {
		cout << c1[i] << '\40';
	}
	cout << endl;

	CArray c2;
	c2 = c1;
	for (int i = 0; i < c1.length(); ++i) {
		cout << c2[i] << '\40';
	}
	cout << endl;

	CArray c3 = c2;
	c3[4] = 100;
	for (int i = 0; i < c1.length(); ++i) {
		cout << c3[i] << '\40';
	}
	cout << endl;

	CArray c4(5);
	for (int i = 0; i < c4.length(); ++i) {
		c4[i] = i;
	}
	for (int i = 0; i < c1.length(); ++i) {
		cout << c4[i] << '\40';
	}
}

int main() {
	override1();
}
