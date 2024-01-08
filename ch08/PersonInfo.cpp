#include "PersonInfo.h"
#include <iostream>
#include <sstream>

int main(){
    std::string line, word;
    std::vector<PersonInfo> people;
    while (std::getline(std::cin, line))
    {
        PersonInfo info;
        std::istringstream record(line);
        record >> info.name;
        while (record >> word)
            info.phone.push_back(word);
        people.push_back(info);
    }
    return 0;
}