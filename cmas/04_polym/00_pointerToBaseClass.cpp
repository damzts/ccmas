// pointer to base class
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
    tPolygon *pPoly1 = &trgl;
    tPolygon *pPoly2 = &rect;

    pPoly1->SetValues(4, 5);
    pPoly2->SetValues(4, 5);

    std::cout << rect.Area() << std::endl;
    std::cout << trgl.Area() << std::endl;

    return 0;
}

/*
    key point of derived classes is that a pointer to derived class is compatible with a pointer of its base class

    we create 2 derived class objects -> rect||trgl
    and declare 2 pointers of base class type, assigning references to rect and trgl objects
    //! and because both are objects of classes derived from tPolygon, both are valid assignment operations.

    //! The only limitation in using *ppoly1 and *ppoly2 instead of rect and trgl is that both *ppoly1 and *ppoly2 are type CPolygon*
    so we can only use these pointers to refer to the members that derived class inherited from CPolygon.
    For that reason when we call the area() members directly at objects rect and trgl instead of the pointers *ppoly1 and *ppoly2.

    In order to use area() with the pointers to class CPolygon, this member should also have been declared in theclass CPolygon
    and not only in its derived classes,
    but the problem is that CRectangle and CTriangle implements different versions of area, therefore we cannot implement it in the base class. This is when virtual members become handy:

*/