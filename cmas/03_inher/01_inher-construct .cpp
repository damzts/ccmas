// inheritance basic
#include <iostream>

// base class
class tMother
{
public:
    tMother() // default
    {
        std::cout << "mother: no parameters\n";
    };
    tMother(int a)
    {
        std::cout << "mother: int parameters\n";
    }
};

// derived class 1
class tDaughter : public tMother
{
public:
    tDaughter(int a) // nothing specified: call default
    {
        std::cout << "daughter: int parameters\n";
    }
};
// derived class 2 (variant)
class tSon : public tMother
{
public:
    tSon(int a) : tMother(a) // constructor specified: call this
    {

        std::cout << "son: int parameters\n";
    }
};

int main(int argc, const char **argv)
{
    tDaughter cynthia(0);
    std::cout << std::endl;
    tSon daniel(0);

    return 0;
}

/*

if the base class has no default constructor or you want that an overloaded constructor is called when a new
derived object is created, you can specify it in each constructor definition of the derived class

*/