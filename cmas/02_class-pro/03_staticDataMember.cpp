// static data and static functions
#include <iostream>

class tDummy
{
public:
    static int n;
    tDummy() { n++; };
    ~tDummy() { n--; };
};

// formal definition outside the class, in the global scope
int tDummy::n = 0; // to avoid them to be declared several times, we can only include the prototype (its declaration) in the class declaration but not its definition (its initialization)

int main(int argc, const char **argv)
{
    tDummy *a = new tDummy;
    tDummy *objectArray = new tDummy[10]; // pointer to adress object
    std::cout << a->n << std::endl;
    delete a;
    std::cout << objectArray->n << std::endl;

    return 0;
}
/*
    Static data members are known as "class variables", because there is only one unique value for all the objects of that same class. (they share same value)
    its used for counting the number of objects of that class that are currently allocated.

    In fact, static members have the same properties as global variables but they enjoy class scope.
*/