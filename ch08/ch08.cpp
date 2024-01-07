#include <iostream>
#include <fstream>
#include "../ch07/ex7_12.h"
/* ifstream 类型的输入流，与istream类型的输入流一样，
以空格作为分隔符将内容一个个地输入给承接istream的变量（buf），
注意每当一个空格出现，表示空格前面的流内容已不可见了。
但是空格不等于输入结束，输入结束以回车为标准。
特别的，ifstream可以打开带路径的文件。
如果想按行将输入的内容输入给变量/buf，可以使用标准库函数getline()，
常用于文件按行读取。
*/

int main(int argc, char **argv)
{
    const std::string filename("./data/Sales_data.txt");
    std::ifstream input(argv[1]);
    std::ofstream output(argv[2]);
    std::cout << "请输入读取销售数据文件名(如../Sales_data.txt) \
和将要写入的文件名（如../汇总.txt)， 以空格结尾\n";
    Sales_data total;
    if (read(input, total)) {
        Sales_data trans;
        while (read(input, trans)){
            std::cout << trans.bookNo << std::endl;
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(output, total) << std::endl;
                total = trans;
            }
        }
        print(output, total) << std::endl;
    } else
        std::cerr << "No data?!" << std::endl;
return 0;
}