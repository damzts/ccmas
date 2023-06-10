/*****************************************************/
//  Copyright @ Example
//
/*****************************************************/
#include <iostream>

//! Implementation of class tRectangle also comment example
//! @ingroup hal_android_group // doxygen example
class tRectangle
{
    int m_x, m_y; //! private access (remember that if nothing else is said members of a class defined with keyword class have private access
public:
    //! @copydoc namespace::SetValues // doxygen example
    void SetValues(int, int);
    int Area() { return (m_x * m_y); }
};

// The most important new thing in this code is the operator of scope (::, two colons) included in the definition of
// set_values(). It is used to define a member of a class from outside the class definition itself.
void tRectangle::SetValues(int a, int b)
{
    m_x = a;
    m_y = b;
}
// Classes are first declared into header files .hpp , then implementation defined into .cpp

int main(int argc, char const *argv[])
{
    /* code */
    tRectangle rect;
    rect.SetValues(3, 4);
    std::cout << "area:" << rect.Area();
    return 0;
}
