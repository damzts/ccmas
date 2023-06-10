// example on constructor & deconstructors
#include <iostream>

//! constructors are used to initalize instances
//! are only executed when a new object of the class is created.
class tRectangle
{
    int *m_pWidth, *m_pHeight; // pointer declaration should be made into datatype specifier

public:
    tRectangle(int, int);
    ~tRectangle();
    void SetValues(int, int);
    int Area() { return (*m_pWidth * *m_pHeight); }
}; //! class are ended with ;
//! when an object assigns dynamic memory we want to release the memory that the object was allocated.
//! use destructor then

tRectangle::tRectangle(int a, int b)
{
    m_pWidth = new int; // dynamic allocation
    m_pHeight = new int;
    *m_pHeight = a;
    *m_pWidth = b;
}

tRectangle::~tRectangle()
{
    delete m_pWidth; // manual deallocation
    delete m_pHeight;
}
// how to destroy an object?
// its scope of existence has finished
// its an object dynamically assigned and its released using the operator delete.

int main(int argc, char const *argv[])
{
    /* code */
    tRectangle rectA(3, 4), rectB(5, 6); // creating 2 new objects, with constructor args
    std::cout << "rect a area:" << rectA.Area();
    std::cout << "rect B  area:" << rectB.Area();
    return 0;
}
