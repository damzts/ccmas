// namespaces
#include <iostream>

namespace first
{
    int var = 5;
}

namespace second
{
    double var = 3.1416;
}

int main(int argc, const char **argv)
{

    std::cout << first::var << std::endl;
    std::cout << second::var << std::endl;

    return 0;
}

/*
    Namespaces allow to group entities like classes, objects and functions under a name. This way the global scope can be divided in "sub-scopes", each one with its own name.

    namespace identifier
    {
        entities
    }

    The keyword 'using' is used to introduce a me from a namespace into the current declarative region.
    but dont ever use it as said in coding standards -> using first::x;


    The keyword using is used to introduce a name from a namespace into the current declarative region. -> using namespace std;




*/