#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    list<int> ilst{1, 2, 31, 4, 5, 0, 5, 4, 3, 2, 1, 0, 11, 12};
    auto last_z = find(ilst.crbegin(), ilst.crend(), 0);
    for (; last_z != ilst.crend();++last_z)
        cout << *last_z << " ";
    cout << "\n";
    return 0;
}