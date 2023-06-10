// template especialization
#include <iostream>

//! Templates can also have regular typed parameters, similar to function arguements.
template <class T, int N>
class tSequence
{
    T memblock[N];

public:
    void SetMember(int x, T value);
    T GetMember(int x);
};

template <class T, int N>
void tSequence<T, N>::SetMember(int x, T value)
{
    memblock[x] = value;
}

template <class T, int N>
T tSequence<T, N>::GetMember(int x)
{
    return memblock[x];
}

main(int argc, const char **argv)
{
    tSequence<int, 5> objectInt;
    tSequence<double, 5> objectFloat;

    objectInt.SetMember(0, 100);
    objectFloat.SetMember(3, 3.1416);

    std::cout << objectInt.GetMember(0) << std::endl;
    std::cout << objectFloat.GetMember(3) << std::endl;

    return 0;
}

/*
    ex:

    It is also possible to set default values or types for class template parameters.
    template <class T=char, int N=10> class mysequence {..};

    We could create objects using the default template parameters by declaring: 
    mysequence<> myseq;

    Which would be equivalent to: mysequence<char,10> myseq;
*/