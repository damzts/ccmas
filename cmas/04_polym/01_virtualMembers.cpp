// virtual members
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
    virtual int Area() { return (0); }
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
    tPolygon poly;

    tPolygon *pPoly1 = &rect;
    tPolygon *pPoly2 = &trgl;
    tPolygon *pPoly3 = &poly;

    pPoly1->SetValues(4, 5);
    pPoly2->SetValues(4, 5);
    pPoly3->SetValues(4, 5);

    std::cout << pPoly1->Area() << std::endl;
    std::cout << pPoly2->Area() << std::endl;
    std::cout << pPoly3->Area() << std::endl;

    return 0;
}

/*
    ...This is when virtual members become handy:
    In order to use Area() with the pointers to class CPolygon, this member should also have been declared in theclass tPolygon and not only in its derived classes,
    Rectangle and CTriangle implements different versions of area, Area() has been declared as virtual in the base class because it is later redefined in each derived class

    f you remove this virtual keyword from the declaration of area() within CPolygon, and then you run the program the result will be 0 for the three polygons
*/