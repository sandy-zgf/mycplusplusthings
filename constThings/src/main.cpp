#include <iostream>
#include "apple.h"
// #include "file1.cpp"
using namespace std;

void demo()
{
    static int count = 0;

    cout << count << endl;

    count++;
}

int main(int, char **)

{
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(C) << endl;

    cout << sizeof(c1) << endl;
    cout << sizeof(F) << endl;

    return 0;
}
