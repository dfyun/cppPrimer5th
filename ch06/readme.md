6.1 实参是用来给函数的形参提供初始化的。
6.2
(a) 返回值类型与定义的返回值类型不同    //return type should be string , not int
(b) 缺少返回值类型          //function needs return type
(c) 缺少一半的大括号        //parameter cannot use same name twice
(d) 函数体必须在大括号内    //function body needs braces

6.6
// example
size_t count_add(int n)       // n is a parameter.
{
    static size_t ctr = 0;    // ctr is a static variable.
    ctr += n;
    return ctr;
}

int main()
{
    for (size_t i = 0; i != 10; ++i)  // i is a local variable.
      cout << count_add(i) << endl;

    return 0;
}