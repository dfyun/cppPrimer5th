#include <string>
#include <iostream>
#include <iterator>
#include <fstream>

using namespace std;
void func_find(const string &ifile) /*void func_find(const ifile &ifile)当调用的时候必须是ifstream类型。
                                        此例中，调用过程func_find(argv[1])，argv[1]是一个c风格型的字符串，
                                        并不是ifstream类型。所以不能使用此种函数定义。*/
{
    string word;
    ifstream infile(ifile);
    string longest;
    string center("acekmnorsuvwxz");
    string ncenter("bdfghijlpqty");
    while (infile >> word)
    {
        if (word.find_first_of(ncenter, 0) == string::npos)
        {
            if (word.size() >= longest.size())
                longest = word;
        }
    }
    cout << longest << endl;
}

int main(int argc, char** argv)
{
    func_find(argv[1]);
}