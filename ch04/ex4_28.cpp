#include <iostream> // high level input/output operations.

/*
ex4_25:
'q' =  0000 0000 0000 0000 0000 0000 01110001
~'q' = 1111 1111 1111 1111 1111 1111 10001110
       1111 1111 1111 1111 1110 0011 10000000

ex4_26:
一般情况下int只有16位，无法保存第27位同学的测试成绩。

ex4_27
(a)
0000 0000 0000 0000 0000 0000 0000 0011
0000 0000 0000 0000 0000 0000 0000 0111
0000 0000 0000 0000 0000 0000 0000 0011
 
(b)
0000 0000 0000 0000 0000 0000 0000 0111

(c)
1

(d)
1


*/
void ex4_28(){
    // by using method below only include what is needed.
    using std::cout;
    using std::endl;
    
    // void type
    cout << "void: nullptr_t\t" << sizeof(std::nullptr_t) << " bytes" << endl << endl;
    
    // boolean type
    cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl << endl;
    
    // character type
    cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
    cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
    cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl;
    cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl << endl;
    
    // integers type
    cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
    cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
    cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes" << endl << endl;
    
    // floating point type
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    cout << "long double:\t" << sizeof(long double) << " bytes" << endl << endl;
	
    // Fixed width integers
    cout << "int8_t:\t\t" << sizeof(int8_t) << " bytes" << endl;
    cout << "uint8_t:\t" << sizeof(uint8_t) << " bytes" << endl;
    cout << "int16_t:\t" << sizeof(int16_t) << " bytes" << endl;
    cout << "uint16_t:\t" << sizeof(uint16_t) << " bytes" << endl;
    cout << "int32_t:\t" << sizeof(int32_t) << " bytes" << endl;
    cout << "uint32_t:\t" << sizeof(uint32_t) << " bytes" << endl;
    cout << "int64_t:\t" << sizeof(int64_t) << " bytes" << endl;
    cout << "uint64_t:\t" << sizeof(uint64_t) << " bytes" << endl;
}

/*
int x[10];   int *p = x;
cout << sizeof(x)/sizeof(*x) << endl;
cout << sizeof(p)/sizeof(*p) << endl;

The first is 10. It returns the number of elements in x.
The result is 2 in my machine, but the second result is undefined. 
*/
int main()
{
    // using std::cout;
    // using std::endl;
    // int x[10];
    // int *p = x;
    // cout << sizeof(x)/sizeof(*x) << endl;
    // cout << sizeof(p)/sizeof(*p) << endl;
    ex4_28(); 	
    return 0;
}
