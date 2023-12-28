#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void ex5_4(){
   string s;
   string::iterator iter = s.begin();
   while ( iter != s.end() ) {}

   /*ex5_4
   the orin is illegal.
   Variable `status` is only declared inside scope of while condition.
   corrected as:
   bool status;
   string word;
   while (status == find(word))
   */
}
void ex5_5(){
    cout << "input scores: \n";
    int g;
    const vector<string> socres = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    while (cin >> g)
    {
        if (g < 60)
            lettergrade = socres[0];
        else {
            lettergrade = socres[(g-50)/10];
            if (g != 100)
                if (g % 10 > 7)
                    lettergrade += '+';
                else if (g % 10 < 3)
                    lettergrade += '-';
        }
        cout << "the socre you inputed is " << lettergrade << " ";
    }
    cout << endl;
}

void ex5_6()
{
    cout << "input scores: \n";
    int g;
    const vector<string> socres = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    while (cin >> g)
    {
        if (g < 60)
            lettergrade = socres[0];
        else {
            lettergrade = socres[(g-50)/10];
            if (g != 100)
                (g % 10 > 7) ? lettergrade += '+': ((g % 10 < 3)? lettergrade += '-': lettergrade);            
        }
        cout << "the socre you inputed is " << lettergrade << "\n";
    }
}
int main()
{
    ex5_6();
    return 0;
}