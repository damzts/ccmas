// class template
#include <iostream>

// a template for a class is used, so that the same class can be used for different datatypes
template <class T>
class tMyPair
{
    T a, b;

public:
    tMyPair(T first, T second)
    {
        a = first;
        b = second;
    }
    T GetMax();
}; // template overrides typename T, so class can be used with different data types

// in case we want to implement class member outside scope, we we must always precede definition with the template <...> prefix
template <class T>
T tMyPair<T>::GetMax()
{
    return (a > b ? a : b);
}
/*
There are three T's in this declaration:
The first one is the template parameter.
The second T refers to the type returned by the function.
And the third T (the one between angle brackets) is also a requirement: It specifies that this function's template parameter is also the class template parameter.
*/
main(int argc, const char **argv)
{
    tMyPair<int> myobject(100, 75);
    std::cout << myobject.GetMax() << std::endl;
    return 0;
}
