#include "ex13.30.h"
// #include "../master/ch13/ex13_30.h"
int main()
{
    HasPtr a("Iron Man"), b("Spider Man");
    a.show();
    b.show();
    a = b;
    // swap(a, b);
    a.show();
    b.show();
    return 0;
}