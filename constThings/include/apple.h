#ifndef __APPLE__H_
#define __APPLE__H_

class A
{
public:
    char a;
    int b;
};

class B : A
{
public:
    short a;
    long b;
};

class C
{
    A a;
    char c;
};

class A1
{
    virtual void func() {}
};

class c1 : public A
{
};

class D
{
    virtual void func() {}
};
class E
{
    virtual void func() {}
};
class F : virtual public D, virtual public E
{
public:
    virtual void func() {}
};

#endif /* __APPLE__H_ */
