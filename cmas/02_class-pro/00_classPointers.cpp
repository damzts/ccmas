// pointer to classes
#include <iostream>

class tRectangle
{
    int m_Width, m_Height;

public:
    tRectangle();
    tRectangle(int, int);
    void SetValues(int, int);
    int Area() { return (m_Width * m_Height); }
}; //! class are ended with ;

tRectangle::tRectangle()
{
    m_Width = 5;
    m_Height = 5;
}
tRectangle::tRectangle(int a, int b)
{
    m_Height = a;
    m_Width = b;
}
void tRectangle::SetValues(int a, int b)
{
    m_Width = a;
    m_Height = b;
}

int main(int argc, char const *argv[])
{

    tRectangle rectA, *pRectB, *pRectC;
    tRectangle *pRectD = new tRectangle[2];

    pRectB = new tRectangle;
    pRectC = &rectA;

    rectA.SetValues(1, 2);
    pRectB->SetValues(3, 4);
    pRectD->SetValues(5, 6);   // an array pointer always points to first element.
    pRectD[1].SetValues(7, 8); // im accessing to index 1, im guessing why not to use (->)

    std::cout << "a area: " << rectA.Area() << std::endl;
    std::cout << "*b area: " << pRectB->Area() << std::endl;
    std::cout << "*c area: " << pRectC->Area() << std::endl;
    std::cout << "d[0] area: " << pRectD[0].Area() << std::endl;
    std::cout << "d[1] area: " << pRectD[1].Area() << std::endl;
    return 0;
}