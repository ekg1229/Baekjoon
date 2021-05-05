#include <iostream>
#include <string.h>
using namespace std;
char* ShiftLeftString(char* x, int y);
int main() {
    char str[] = "BINGO JJANG!!!";
    int len = strlen(str);
    char* orig = new char[len + 1];
    strcpy_s(orig, len + 1, str);
    cout << str << endl;
    char* copy;
    for (int i = 0; i < sizeof(str) - 1; i++) {
        copy = ShiftLeftString(orig, len);
        cout << i << "번째 실행." << endl;
        cout << copy << endl;
        strcpy_s(orig, len + 1, copy);
        delete[] copy;
        copy = NULL;
    }
    delete[] orig;
    orig = NULL;
    return 0;
}
char* ShiftLeftString(char* src, int len) {
    char* Shift = new char[len + 1];

    for (int j = 0; j < len; ++j) {
        if(j < len - 2) Shift[j] = src[j + 1];
        else Shift[j] = src[len - j - 1];
    }
    return Shift;
}