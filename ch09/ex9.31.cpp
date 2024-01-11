#include <list>
#include <forward_list>
#include <iostream>

using namespace std;
void list_f(){
    list<int> ilst{0,1,2,3,4,5,6,7,8,9};
    auto curr = ilst.begin();

    while (curr != ilst.end()){
        if (*curr & 1){
            curr = ilst.insert(curr, *curr);
            ++(++curr);
        }
        else
            curr = ilst.erase(curr);
    }
    for (const auto &i : ilst)
        cout << i << " ";
    cout << endl;
}

void forward_list_f(){
    forward_list<int> ilst{0,1,2,3,4,5,6,7,8,9};
    auto curr = ilst.begin();
    auto prev = ilst.before_begin();

    while (curr != ilst.end()){
        if (*curr & 1){
            curr = ilst.insert_after(curr, *curr);
            prev = curr;
        }
        else
            curr = ilst.erase_after(curr);
    }
    for (const auto &i : ilst)
        cout << i << " ";
    cout << endl;
}

int main()
{
    list_f();
    forward_list_f();
}