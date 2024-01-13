#include <string>
#include <iostream>

using namespace std;
void func(string &s, const string &oldVal, const string &newVal)
{
    int p = 0;
    while ((p = s.find(oldVal, p)) != string::npos)
    {
        s.replace(p, oldVal.size(), newVal);
        p += newVal.size();
    }
}

int main()
{
    string s = "tho thru tho!";
    func(s, "thru", "through");
    cout << s << endl;
}