#include "ex7.11.h"

using namespace std;

int main(){
    Sales_data item1;
    print(cout, item1) << endl;
    Sales_data item2("978-7-121-15535-2");
    print(cout, item2) << endl;
    Sales_data item3("978-7-121-15535-2", 2, 128);
    print(cout, item3) << endl;
    Sales_data item4(cin);
    print(cout, item4) << endl;
    return 0;
}
