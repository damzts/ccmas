// exceptions
#include <iostream>
#include <exception>

class MyException : public std::exception
{
};

//
int main(int argc, const char **argv)
{

    // try block

    try
    {
        throw 20; // exception is throw
    }
    catch (int e) // exception handler -> argument passed by the throw expression is checked against catch parameter
    {
        std::cout << "An exception occurred...";
        std::cout << "Exception Nr." << e << std::endl;
    }
    // we can chain multiple handlers (catch expressions), each one with a different parameter type.
    // Only the handler that matches its type with the argument specified in the throw statement is executed

    return 0;
}

/*


*/