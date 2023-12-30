#include <iostream>

using namespace std;

int fact()
{
    static int count = 0;
    ++count;
    return count;
}

int main()
{
    for (int i = 1; i <=10; i++)
        cout << fact() << endl;
    return 0;    
}