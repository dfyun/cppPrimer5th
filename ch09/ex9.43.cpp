#include <string>
#include <iostream>

using namespace std;
void func(string &s, const string &oldVal, const string &newVal)
{
    auto oldVal_l = oldVal.size();
    if (!oldVal_l)
        return;
    auto curr = s.begin();
    while (oldVal_l <= s.end() - curr){
        auto iter1 = curr;
        auto iter2 = oldVal.begin();
        while (iter2 != oldVal.end() && *iter1 == *iter2)
            ++iter1, ++iter2;
        if (iter2 == oldVal.end())
        {
            s.erase(curr, iter1);
            if (!newVal.empty())
                {s.insert(curr, newVal.begin(), newVal.end());}
            curr += newVal.size();
        }else ++curr;
    }
}

int main()
{
    string s = "tho thru tho!";
    func(s, "thru", "through");
    cout << s << endl;
}