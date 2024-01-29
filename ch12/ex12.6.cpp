#include <vector>
#include <iostream>
#include <new>

using std::cout; using std::cin; using std::endl;
using vecI = std::vector<int>;

auto returnPtr() -> vecI*
{
    return new vecI();
}

auto readVecI(vecI *veci) -> vecI*
{
    int i = 0;
    while (cin >>i)
        veci->push_back(i);
    return veci;
}

void print(vecI *vecI)
{
    for (const auto & i : *vecI)
        cout << i << " ";
    cout << endl;
    delete vecI;
}

int main()
{
    print(readVecI(returnPtr()));
    return 0;
}