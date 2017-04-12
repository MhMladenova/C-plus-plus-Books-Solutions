#include <iostream>

class Base
{
public:
    virtual ~Base()
    {
        std::cout << "base destructor";
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        std::cout << "derived destructor" << std::endl;
    };
};

int main()
{
    Base* p = new Derived();

    delete p;

    return 0;
}
