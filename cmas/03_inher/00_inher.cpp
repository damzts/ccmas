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
    };
};

// derived class 1
class tRectangle : public tPolygon
{
public:
    int Area()
    {
        return (m_Height * m_Width);
    }
};
// derived class 2
class tTriangle : public tPolygon
{
public:
    int Area()
    {
        return (m_Height * m_Width / 2);
    }
};

int main(int argc, const char **argv)
{
    tRectangle rect;
    tTriangle trgl;

    rect.SetValues(4, 5);
    trgl.SetValues(4, 5);
    std::cout << rect.Area() << std::endl;
    std::cout << trgl.Area() << std::endl;
    return 0;
}

/*

    Objects rectangle and triangle are classes that inherits members inherited from polygon base class

    Protected access specifier -> prevents access from outside scope, but also allows access to derived classes -> private gives access only inside its own scope

*/

// Ex

/*
    There is also inherit control specifiers
    class CRectangle: public CPolygon { ... } -> the public keyword after colon denotes the maximum access level

    simple explanation
    public: derived class will inherit all the members with the same levels they had in the base class
    protected: all public members of the base class are inherited as protected in the derived class
    private: all base class members are inherited as private

    //! not specifying access level assumes private for class , and public for struct

    //! whats inherited?  derived class inherits every member of a base class except:
    its constructor and its destructor
    its operator=() members
    its friends

    although constrctr/dstrctr isnt inherited, they are always called when new object is created.

*/