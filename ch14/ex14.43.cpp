#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
int main()
{
    std::vector<int> ivec = {1, 2, 3, 4, 5};
    std::cout << "请输入想要判断的整数——该整数可以被vecto内的所有元素整除" << std::endl;
    int input = 2;
    // std::cin >> input;
    std::modulus<int> mod;
    std::cout << "8%2 = " << mod(8, 2) << " . 7%2 =" << mod(7, 2) << std::endl;
    auto predicator = [&](int i){return 0 == mod(input, i);};
    std::cout << "8%2 = " << predicator(8) << " . 7%2 =" << predicator(7) << std::endl;
    // auto predicator2 = std::bind2nd(mod, input);
    for (auto const &it : ivec)
    {
        std::cout << "vec is: " << it << " . " << predicator(it) << std::endl;
    }
    bool ret = std::any_of(ivec.begin(), ivec.end(), predicator);
    std::cout << ret << std::endl;
    return 0;
}