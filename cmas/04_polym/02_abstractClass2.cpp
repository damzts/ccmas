// pure virtual members can be called
// from the abstract base class
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

    tRectangle rect;
    tTriangle trgl;

    tPolygon *pPoly1 = &rect;
    tPolygon *pPoly2 = &trgl;

    pPoly1->SetValues(4, 5);
    pPoly2->SetValues(4, 5);

    pPoly1->PrintArea();
    pPoly2->PrintArea();
    return 0;
}

/*
    Virtual members and abstract classes grant C++ the polymorphic characteristics that make object-oriented programming such a useful instrument in big projects.
    these features can be applied to arrays of objects or dynamically allocated objects.

*/