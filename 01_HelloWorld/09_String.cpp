#include <iostream>
#pragma warning(disable:4996)
using namespace std;

int main() {
	cout << sizeof(string) << endl;
	char buf1[] = "cdefg";
	char buf2[] = "cde";
	strcpy(buf1, buf2); //将buf2覆盖到buf1并添加'\0'结尾
	cout << buf1 << endl;;
	char n = buf1[3];
	cout << (char)0 << '\t' << n;
}