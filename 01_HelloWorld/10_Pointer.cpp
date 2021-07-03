#include <iostream>
#include <cstring>
#include <algorithm>
#pragma warning(disable:4996)

using namespace std;

//指针的应用
void pointer1() {
	char c1 = 'A';
	char* pc = &c1;
	*pc = 'B';
	cout << c1 << "\t" << *pc << endl;

	char c2 = *pc;
	pc = &c2;
	*pc = 'C';
	cout << c2 << '\t' << c1;
}

//库函数
void pointer2() {
	char c1[20] = "char_c1";
	char c2[20] = "chaR_c2";
	char c3[20];
	cout << "strcmp: " << strcmp(c1, c2) << endl;
	cout << "strncmp: " << strncmp(c1, c2, 3) << endl;
	cout << "stricmp: " << stricmp(c1, c2) << endl;
	cout << "strcat: " << strcat(c1, c2) << endl;
	cout << "strncat: " << strncat(c1, c2, 3) << endl;
	cout << "strstr: " << strstr(c1, "har") << endl;
	cout << "strcpy: " << strcpy(c3, c2) << endl;
	cout << "strncpy: " << strncpy(c3, "abcd", 2) << endl; //从开头覆盖且尾部添加'\0'
	cout << "strchr: " << strchr(c2, 99) - c2 << endl;
	cout << "strrchr: " << strrchr(c2, 99) - c2 << endl;
	cout << "strupr: " << strupr(c1) << endl;
	cout << "strlwr: " << strlwr(c1) << endl;
	cout << "strlen: " << strlen(c3) << endl;

	char c4[10] = "1234";
	char c5[10] = "12.34";
	char c6[10];
	cout << "atoi: " << atoi(c4) << endl;
	cout << "atof: " << atof(c5) << endl;
	cout << "itoa: " << itoa(123, c6, 10) << endl;
	cout << endl;

	char c7[] = "This is a sentence. This is another sentence";
	char* buf = strtok(c7, ". /");
	while (buf != NULL) {
		cout << buf << endl;
		buf = strtok(NULL, ". /");
	}

}

int myCompare(const void*, const void*);

//函数指针的应用
void pointer3() {
	unsigned int nums[3] = { 61,52,43 };
	qsort(&nums, 3, sizeof(nums[0]), myCompare);
	for (auto ele : nums) {
		cout << ele << endl;
	}
}
//比较函数int compareFunc(const void*, const void*)
int myCompare(const void* a, const void* b) {
	unsigned int* pi_1 = (unsigned int*)a;
	unsigned int* pi_2 = (unsigned int*)b;
	return (*pi_2 % 10) - (*pi_1 % 10);
}

void pointer4() {
	char s[] = "Hello World";
	char* p = s + 3;
	string str = p;
	cout << s << endl;
	cout << str << endl;

	int a[10][20];
	int* p1 = a[2];
	int* p2 = a[4] + 2;
	cout << p2 - p1 << endl;

}

int main() {
	pointer4();
}