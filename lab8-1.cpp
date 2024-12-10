#include <iostream>
#include <cstring>
using namespace std;

char* CopyString(const char* str) {
    int len = 0;
	while (str[len] != '\0') {
		++len;
	}
	char* strnew = new char[len+1]; 
	memcpy(strnew, str, sizeof(str));
	strnew[len] = '\0';
	return strnew;
}


char* ConcatinateStrings(const char* a, const char* b){
    int len_a = 0;
	int len_b = 0;
	while (a[len_a] != '\0') {
		++len_a;
	}
	while (b[len_b] != '\0') {
		++len_b;
	}
    char* strnew = new char[len_a + len_b + 1];
    memcpy(strnew, a, len_a);
	memcpy(strnew + len_a, b, len_b);
	strnew[len_a + len_b] = '\0';
	return strnew;
}


int main() {
	const char* s1 = "Hello";
	const char* s2 = "World";
	char* ss = CopyString(s1);
	char* stroki = ConcatinateStrings(s1, s2);
	cout << ss << endl;
	cout << stroki << endl;
	delete[] ss;
	delete[] stroki;
}