// inheritance basic
#include <iostream>

// base class
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
// base class 2
class tCOutput
{
public:
    void Output(int i);
};
// class member "Output" implementation
void tCOutput::Output(int i)
{
    std::cout << i << std::endl;
}
// derived class 1
class tRectangle : public tPolygon, public tCOutput
{
public:
    int Area()
    {
        return (m_Width * m_Height);
    }
};
// derived class 2
class tTriangle : public tPolygon, public tCOutput
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

    rect.SetValues(5, 4);
    trgl.SetValues(5, 4);

    rect.Output(rect.Area());
    trgl.Output(trgl.Area());
    return 0;
}

/*
    multiple inheritance:

    class rectangle and triangle are derived classes from tPolygon and tOutput
    so they inherit their class members and variables

    we use tPolygon base class members to -> SetValues()
    tOutput to -> cout a calculated variable

    and each class triangle/rectangle is used to perform its specific operation of Area()


*/