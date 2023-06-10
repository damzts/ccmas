// exceptions
#include <iostream>

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

    Exceptions provide a way to react to exceptional circumstances (like runtime errors) in our program by transferring control to special functions called handlers.

    //If we use an ellipsis (...) as the parameter of catch, that handler will catch any exception no matter what the type of the throw exception is.

    If throw specifier is left empty with no type, this means the function is not allowed to throw exceptions.
    int myfunction (int param) throw(); // no exceptions allowed
    int myfunction (int param); // all exceptions allowed

*/