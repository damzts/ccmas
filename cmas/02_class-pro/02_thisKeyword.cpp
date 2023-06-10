// this keyword inside classes
#include <iostream>

class tDummy
{
public:
    int isitme(tDummy &param);
};

int tDummy::isitme(tDummy &param) // pass by reference
{

    /*
    The keyword this represents a pointer to the object whose member function is being executed. It is a pointer to the object itself.
    */

    if (&param == this)
        return true;
    else
        return false;
}

int main(int argc, const char **argv)
{
    tDummy a;       // object
    tDummy *b = &a; // pointer to adress object

    //
    if (b->isitme(a))
        std::cout << "yes, &a is b" << std::endl;

    return 0;
}