#include <iostream>
#include <cmath>
using namespace std;

const string NAME = "name_1";

inline void printName() {
	cout << "����Ϊ: " << NAME << endl;
}

int main() {
	printName();
	cout << sqrt(10) << "\t" << (char)toupper('a');
}