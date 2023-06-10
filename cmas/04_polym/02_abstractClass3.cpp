// dynamic allocation and polymorphism
#include <iostream>

// base class 1
class tPolygon
{
protected:
    int m_Width, m_Height;

public:
    void SetValues(int a, int b)
    {
        m_Width = a;
        m_Height = b;
    }
    // pure virtual function -> no implementation at all
    virtual int Area(void) = 0;
    void PrintArea(void)
    {
        std::cout << this->Area() << std::endl;
    }
};

class tRectangle : public tPolygon
{
public:
    int Area()
    {
        return (m_Width * m_Height);
    }
};
class tTriangle : public tPolygon
{
public:
    int Area()
    {
        return (m_Width * m_Height / 2);
    }
};

int main(int argc, const char **argv)
{

    /*
    pPoly1, pPoly2 are declared being of type pointer to tPolygon but the objects dynamically allocated have been declared having the derived class type directly.
    */

    tPolygon *pPoly1 = new tRectangle;
    tPolygon *pPoly2 = new tRectangle;

    pPoly1->SetValues(4, 5);
    pPoly2->SetValues(4, 5);

    pPoly1->PrintArea();
    pPoly2->PrintArea();

    delete pPoly1;
    delete pPoly2;

    return 0;
}

/*
    Virtual members and abstract classes grant C++ the polymorphic characteristics that make object-oriented programming such a useful instrument in big projects.
    these features can be applied to arrays of objects or dynamically allocated objects.

*/