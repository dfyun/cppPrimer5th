#include <string>
#include <iostream>

using namespace std;
void func(string &s, const string &front, const string &last)
{
    s.insert(s.begin(), 1, ' ');
    s.insert(s.begin(), front.begin(), front.end());
    s.append(" " + last);
}

int main()
{
    string s = "james";
    func(s, "Mr.", "III");
    cout << s << endl;
}