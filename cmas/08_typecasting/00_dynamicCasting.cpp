/*
    dynamic_cast can be used only with pointers and references to objects.
    Its purpose is to ensure that the result of the type conversion is a valid complete object of the requested class.

*/
#include <iostream>
#include <exception>

class tBase
{
    virtual void Dummy() {}
};

class tDerived : public tBase
{
    int a;
};

int main(int argc, const char **argv)
{
    try
    {
        tBase *pBa = new tDerived; // perfect object
        tBase *pBb = new tBase;    // incomplete tDerived object of class -> dynamic_cast is used to cast to its base class.
        // base-to-derived conversions are not allowed with dynamic_cast unless the base class is polymorphic.

        tDerived *pD;

        pD = dynamic_cast<tDerived *>(pBa); //
        if (pD == nullptr)
            std::cout << "Null pointer on first type cast" << std::endl;

        pD = dynamic_cast<tDerived *>(pBb); //
        if (pD == nullptr)
            std::cout << "Null pointer on second type cast" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what();
    }
    return 0;
}

/*
    Explicit conversion:

    C-like casting: can be applied indiscriminately on classes and pointers to classes, which can lead to code that while being syntactically correct can cause runtime errors.
    (new_type) expression
    new_type (expression)

    C++ style casts: use always those
    dynamic_cast <new_type> (expression) -> always successful when we cast a class to one of its base classes.
    reinterpret_cast <new_type> (expression)
    static_cast <new_type> (expression)
    const_cast <new_type> (expression)


*/