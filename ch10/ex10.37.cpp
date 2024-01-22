#include <list>
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    vector<int> ivec{1, 2, 31, 4, 5, 0, 5, 4, 3, 2, 1, 0, 11, 12};
    list<int> lst(5, 0);
    // copy(ivec.crbegin() + 6, ivec.crbegin() + 11, lst.begin());
    copy(ivec.cbegin() + 3, ivec.cbegin() + 8, lst.rbegin());
    for (const auto &s : lst)
        cout << s << " ";
    cout << endl;
    return 0;
}