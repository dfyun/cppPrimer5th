#include <string>
#include <iostream>
#include <iterator>

using namespace std;
void func(string &s, const string &front, const string &last)
{
    s.insert(0, 1, ' ');
    s.insert(0, front);
    s.insert(s.size(), " ");
    s.insert(s.size(), last);
}

int main()
{
    string s = "james";
    func(s, "Mr.", "Jr");
    cout << s << endl;
}