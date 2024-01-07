#include <iostream>
#include <vector>
#include <fstream>

void readStr(const std::string& inputFilename, std::vector<std::string> &vec)
{
    std::ifstream input(inputFilename);
    if (input){
        std::string buf;
        while (std::getline(input, buf))
            vec.push_back(buf);
    }
}
int main(int argc, char** argv)
{
    std::vector<std::string> vec;
    readStr("./data/ex8.4_str.txt", vec);

    for (auto i : vec)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}