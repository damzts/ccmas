// example: one class ,two objects
#include <iostream>

class tRectangle
{
    int m_x, m_y;

public:
    void SetValues(int, int);
    int Area() { return (m_x * m_y); }
};

//! argument wont be modified by the method → shall be designated as const.
//! argument name are camelCase
//! always pass by reference
void tRectangle::SetValues(const int a, const int b)
{
    m_x = a;
    m_y = b;
}

int main(int argc, char const *argv[])
{
    /* code */
    tRectangle rectA, rectB;
    rectA.SetValues(3, 4);
    rectB.SetValues(5, 6);

    std::cout << "rect a area:" << rectA.Area();
    std::cout << "rect B  area:" << rectB.Area();
    return 0;
}
