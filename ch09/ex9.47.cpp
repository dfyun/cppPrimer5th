#include <string>
#include <iostream>
#include <iterator>

using namespace std;
void func_find(string &s, const string &front, const string &last)
{
    s.insert(0, 1, ' ');
    s.insert(0, front);
    s.insert(s.size(), " ");
    s.insert(s.size(), last);
}

int main()
{
    string s = "ab2c3d7R4E6";
    string numbers("0123456789");
    string::size_type pos = 0;
    while ((pos = s.find_first_of(numbers, pos)) != string::npos)
    {
        cout << "found number at index: " << pos 
            << " element is " << s[pos] << endl;
        ++pos;
    }
    cout << s << endl;
}