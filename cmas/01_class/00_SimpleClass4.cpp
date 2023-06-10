// example on constructor overloading
#include <iostream>

//! constructor can also be overloaded with more than one function that have the same name but different types or number of parameters
class tRectangle
{
    int m_Width, m_Height;

public:
    tRectangle();
    tRectangle(int, int);
    void SetValues(int, int);
    int Area() { return (m_Width * m_Height); }
}; //! class are ended with ;

tRectangle::tRectangle()
{
    m_Width = 5;
    m_Height = 5;
}

tRectangle::tRectangle(int a, int b)
{
    m_Height = a;
    m_Width = b;
}

int main(int argc, char const *argv[])
{
    //! be aware of parenthesis
    //! tRectangle rectb; // right
    //! tRectangle rectb(); // wrong!
    tRectangle rectA(3, 4), rectB; // creating 2 new objects, with constructor args
    std::cout << "rect a area:" << rectA.Area() << std::endl;
    std::cout << "rect B area:" << rectB.Area();
    return 0;
}

/*
    Default constructor:

    if you dont declare any constructor, class itself will provide a default one.

    therefore, after declaring a custom constructor, class wont provide any default for (noparams)
    ! So you are forced to declare all objects according the constructor you defined

*/

/*
    Special member functions that are implicity declared:
    These are the copy constructor, the copy assignment operator, and the default destructor.
    -> r copy all the data contained in another object to the data members of another object


    tRectangle ex (2,3);
    tRectangle ex2 (ex); // copy constructor (data copied from ex)
*/