#ifndef __FILE__H_
#define __FILE__H_

#include <iostream>

class Apple
{
private:
    int people[100];
    /* data */
public:
    Apple(/* args */);
    ~Apple();
    Apple(int i);
    const int apple_number;
    void take(int num) const;
    int add(int num) const;
    int add();
    int getCount() const;
};

#endif