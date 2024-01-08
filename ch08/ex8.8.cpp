//
//  ex8.07.cpp
//  Exercise 8.7
//
//  update by dfy on 24/01/08.
//
//  @Brief  Rewrite the bookstore program from ��7.1.1 (p.256) to read its transactions from a file. 
//          Pass the name of the file as an argument to main (��6.2.5, p.218). 
//  @See    ex7.26.h (use the Sales_data)
//  @Run    give a parameter: "../data/book.txt"
//  @Output 0-201-78345-X 5 110
//          0-201-78346-X 9 839.2 

#include <fstream>
#include <iostream>

#include "../ch07/ex7.26.h"
using std::ifstream; using std::cout; using std::endl; using std::cerr;
using std::ofstream;

int main(int argc, char **argv)
{
    ifstream input(argv[1]);
    ofstream out(argv[2], ofstream::app);
    
    Sales_data total;
    if (read(input, total))
    {
        Sales_data trans;
        while (read(input, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(out, total) << endl;
                total = trans;
            }
        }
        print(out, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }
    
    return 0;
}
