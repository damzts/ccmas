// template especialization
#include <iostream>

// simple class container that stores element of T datatype
template <class T>
class tContainer
{
    T element;

public:
    tContainer(T arg) { element = arg; } // when class template wi
    T Increase() { return ++element; }
};

// template specialization
template <>            //  an empty template<> parameter list. is to explicitly declare it as a template specialization.
class tContainer<char> // more important, is the <char> after the class name. This specialization parameter itself identifies the type we declare a template class specialization
{
    char element;

public:
    tContainer(char arg)
    {
        element = arg;
    }
    char UpperCase()
    {
        if ((element >= 'a') && (element <= 'z'))
        {
            element += 'A' - 'a';
            return element;
        } // if not, return something else, possible bug
    }
};
// template <> class mycontainer <char> { ... };

main(int argc, const char **argv)
{
    tContainer<int> objectInt(7); // initially 7
    tContainer<char> objectChar('d');

    std::cout << objectInt.Increase() << std::endl;
    std::cout << objectChar.UpperCase() << std::endl;

    return 0;
}

/*
    ex:

    to define different implementation for specific datatypes, template specialization is used

    template <class T> class mycontainer { ... };
    template <> class mycontainer <char> { ... };
    The first line is the generic template, and the second one is the specialization.


    there is no "inheritance" of members from the generic template to the specialization.
    we must also define all its members, even those exactly equal to the generic template class,
*/