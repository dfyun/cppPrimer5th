#ifndef EX_13_30_H
#define EX_13_30_H
#include <string>
#include <iostream>
using std::string;

class HasPtr{
friend void swap(HasPtr&, HasPtr&);
public:
    HasPtr(const string& s = string()) : ps(new string(s)), i(0) {}
    HasPtr(const HasPtr& p) : ps(new string(*p.ps)), i(p.i) {}
    HasPtr& operator=(const HasPtr& hp) {
        auto temp = new string(*hp.ps);
        delete ps;
        ps = temp;
        i = hp.i;
        std::cout << "call operator=(const HasPtr& hp)" << std::endl;
        return *this;
    }

    ~HasPtr() {
        delete ps;
    }
    void show() { std::cout << *ps << std::endl; }
private:
    string* ps;
    int i;
};

inline void swap(HasPtr& lhs, HasPtr& rhs){
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    std::cout << "call swap(HasPtr& lhs, HasPtr& rhs)" << std::endl;
}
#endif