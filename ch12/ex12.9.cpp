#include <vector>
#include <iostream>
#include <new>
#include <memory>

using std::cout; using std::cin; using std::endl;
using vecI = std::vector<int>;
using std::make_shared;
using std::shared_ptr;

void test()
{
    int *q = new int(42), *r = new int(100);
    r = q;
    auto q2 = make_shared<int>(43), r2 = make_shared<int>(101);
    r2 = q2;//q2的引用数加一；r2的引用数减一，指向q2指向的对象。
    cout << *r << " " << *q << " " << *r2 << " " << *q2 << endl;
}

int main()
{
    test();
    return 0;
}