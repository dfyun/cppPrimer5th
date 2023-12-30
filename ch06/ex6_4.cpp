#include <iostream>

using namespace std;

int fact()
{
    cout << "please input a number greater than 1.\n";
    int n = 1;
    int sum = 1;
    while (cin >> n)
    {
        if (n >= 1)
        {
            while (n != 1)
                sum *= n--;
            cout << "the times is " << sum << endl;
            sum = 1;
        }
        else
        cout << "input number shoulde greater than 1.\n";
    }
    return sum;
}

int main()
{
    fact();
    return 0;    
}