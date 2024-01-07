#include <iostream>

using std::cout;
using std::cin;
using std::endl;

std::istream& readEOF(std::istream& is)
{
    auto old_state = is.rdstate();
    
    std::string s1;
    while (is >> s1)
    {
        cout << s1 << " ";
    }
    cout << endl;
    cout << is.rdstate() << " in readEOF\n";
    // is.clear(old_state & ~is.eofbit);
    is.clear();
    return is;
}
using std::cout;
int main(){
    readEOF(cin);
    cout << cin.rdstate() << endl;
    return 0;
}