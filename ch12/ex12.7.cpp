#include <vector>
#include <iostream>
#include <new>
#include <memory>

using std::cout; using std::cin; using std::endl;
using vecI = std::vector<int>;
using std::make_shared;
using std::shared_ptr;

auto returnPtr() -> shared_ptr<vecI>
{
    return make_shared<vecI>();
}

auto readVecI(shared_ptr<vecI> veci) -> shared_ptr<vecI>
{
    int i = 0;
    while (cin >>i)
        veci->push_back(i);
    return veci;
}

void print(shared_ptr<vecI> vecI)
{
    for (const auto & i : *vecI)
        cout << i << " ";
    cout << endl;
}


int main()
{
    print(readVecI(returnPtr()));
    return 0;
}