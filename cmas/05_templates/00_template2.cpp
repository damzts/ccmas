// function template
#include <iostream>

/*
   te
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

    std::cout << k << std::endl;
    std::cout << n << std::endl;
    return 0;
}

/*


 */