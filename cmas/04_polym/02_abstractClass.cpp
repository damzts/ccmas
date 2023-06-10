// abstract base classes
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
    virtual int Area() = 0;
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

    std::cout << pPoly1->Area() << std::endl;
    std::cout << pPoly2->Area() << std::endl;

    return 0;
}

/*
    classes that contain at least one pure virtual function are abstract base classes.

    The main difference between an abstract base class and a regular polymorphic class is:
    as in abstract base classes at least one of its members lacks of implementation we cannot create instances (objects) of it.

    abstract class is used to create pointers to it and take advantage of all its polymorphic abilities.
    -> pointers to this abstract base class can be used to point to objects of derived classes.

    This can be tremendously useful. eg, we can create a function member of the abstract base class tPolygon that is able to print on screen the result of the Area()
    even though CPolygon itself has no implementation for this function:

*/