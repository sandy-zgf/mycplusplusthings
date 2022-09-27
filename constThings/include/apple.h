#ifndef __APPLE__H_
#define __APPLE__H_

using namespace std;
#include <cstring>

class PerSon
{
public:
    typedef enum
    {
        BOY = 0,
        GRIL
    } SexType;

    PerSon(char *n, int a, SexType s);
    ~PerSon();
    int get_age();
    PerSon &add_age(int a);

private:
    char *name;
    int age;
    SexType sex;
    /* data */
};

#endif /* __APPLE__H_ */
