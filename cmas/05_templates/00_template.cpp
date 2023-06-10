// function template
#include <iostream>

/*
    to declare a template function:
    template <class identifier> function_declaration;
    template <typename identifier> function_declaration;
    //! usign class or typename identifier is indistinct, both examples have the exact same meaning and behave

    template <class myType>
    myType GetMax (myType a, myType b)
    {
        return (a>b?a:b);
    }
    //! every time myType identifier is called, will be replaced with the typename passed as argument
*/

// template que recibe un typename T, no especificado
template <class T>
T GetMax(T a, T b) // funcion que recibe dos variable de tipo T, devuelve variable del mismo tipo
{
    return (a > b ? a : b);
}

int main(int argc, const char **argv)
{
    int i = 5, j = 6, k;
    long l = 10, m = 5, n;

    k = GetMax<int>(i, j); // call to a template function
    n = GetMax<long>(l, m);
    // n = GetMax<>(l, m);

    std::cout << k << std::endl;
    std::cout << n << std::endl;
    return 0;
}

/*
    ex:
    if you dont specify any type into template when calling, but if both variables are same type, it will run ok.



 */