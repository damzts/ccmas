/*
    static_cast can perform conversions between pointers to related classes, not only from the derived class to its base, but also from a base class to its derived.


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
    C++ style casts: use always those
    static_cast <new_type> (expression)


*/