#include "file1.h"
using namespace std;


Apple::Apple(int i):apple_number(i)
{
}

Apple::~Apple()
{
}

int Apple::add()
{
    take(1);
    return 0;
}

int Apple::add(int num) const{
    take(num);
    return num;
}

void Apple::take(int num) const
{
    cout<<"take func"<<num<<endl;
}
// 在C++中，static静态成员变量不能在类的内部初始化。在类的内部只是声明，定义必须在类定义体的外部，通常在类的实现文件中初始化。

int Apple::getCount() const
{
    take(1);
    // add();
    return apple_number;

}