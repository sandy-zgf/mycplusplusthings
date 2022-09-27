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
    PerSon p("zhangguifu",20,PerSon::BOY);

    cout << p.get_age() << endl;

    cout << p.add_age(10).get_age() << endl;

    return 0;
    
}
