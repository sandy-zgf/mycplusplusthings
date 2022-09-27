#include <iostream>
// #include "file1.cpp"
using namespace std;

int main(int, char **)
{
    int num = 0;
    int *const ptr = &num;

    int *t1  = &num;

    *t1 = 1;

    cout << *ptr << " " << num << endl;
    




    // cout << "Testing ext = " << ext << endl;
}
