#include <iostream>

using namespace std;

int fact(int n)
{
    int sum = 1;
    if (n >= 1)
        while (n != 1)
            sum *= n--;
    else
        cout << "input number shoulde greater than 1.\n";
    return sum;
}

int main()
{
    cout << fact(5) << endl;
    return 0;    
}