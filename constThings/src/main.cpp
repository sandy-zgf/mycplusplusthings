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
    Apple a1,a2;
    a1.i = 2;
    a2.i = 3;

    cout << a1.i << a2.i << endl;  
    // for (int i = 0; i < 10; i++)
    // {
    //     demo();
    // }

    return 0;
    
}
