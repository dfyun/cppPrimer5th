#include <iostream>
using namespace std;

int fact(int i)
{
    if(i<0)
    {
        runtime_error err("Input cannot be a negative number");
        cout << err.what() << endl;
    }
    return i > 1 ? i * fact( i - 1 ) : 1;
}

int main()
{
    std::cout << std::boolalpha << (120 == fact(5)) << std::endl;
    return 0;
}