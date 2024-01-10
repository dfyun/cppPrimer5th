#include <vector>
#include <iostream>

bool find(const std::vector<int>& iv, const int& val)
{
    for (auto i = iv.begin();i != iv.end(); ++i)
    {
        // if (val == *i)
        //     return i;
        // else
        //     return iv.end();
        val == *i ? true : false;
    }
}
bool contains(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last, int value)
{
    for(; first != last; ++first)
        if(*first == value) return true;
    return false;
}

int main()
{
    std::vector<int> iv(10, 2);
    int val =3;
    std::cout << find(iv, val) << std::endl;    
    
}