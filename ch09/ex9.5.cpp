#include <vector>
#include <iostream>

auto contains(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last, int value)
{
    for(; first != last; ++first)
        if(*first == value) return first;
    return last;
}

int main()
{
    std::vector<int> iv(10, 2);
    int val =3;
    std::array a = {1};
    std::array<int, 12> b;
}