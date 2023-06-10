// class operator overloading (operator functions)
#include <iostream>

class tVector
{
public:
    int m_X, m_Y;
    tVector(){};
    tVector(int, int);
    tVector operator+(tVector);
};

tVector::tVector(int a, int b)
{
    m_X = a;
    m_Y = b;
}

tVector tVector::operator+(tVector param)
{
    tVector temp;
    temp.m_X = m_X + param.m_X;
    temp.m_Y = m_Y + param.m_Y;
    return (temp);
}

int main(int argc, char const *argv[])
{
    tVector a(3, 1);
    tVector b(1, 2);
    tVector c;

    c = a + b; // class add operation overloading
    // c = a.operator+ (b); //possible

    std::cout << c.m_X << "," << c.m_Y << std::endl;
    return 0;
}
/*
    Overloading Operators:
    suppose normal add operation
    c = a + b; // that makes sense

    suppose a structs sum????
    struct { string product, float price;} a, b, c;
    c = a + b;


    this will cause compilation error, since we have not defined the behavior our class should have with addition operations.

*/

// ex

/*
    default definition for the assignment operator (=) : copy the whole content of the data members of the object passed as argument
    //(the one at the right side of the sign) to the one at the left side:
    CVector d(2,3);
    CVector e;
    e = d; // copy assignment operator
*/