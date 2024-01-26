#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <stdexcept>

using std::string; using std::ifstream; using std::cout;
using std::endl; using std::istringstream;

std::map<string, string> buildMap(ifstream& map_file)
{
    std::map<string, string> trans_map; //regular for transform
    string key;         //word being transformed
    string value;       //after transformed
    //stored first word in key, the rest words stroed in value
    while (map_file >> key && getline(map_file, value))
    {
        if (value.size() > 1)   //check if there is a transform regular
            trans_map[key] = value.substr(1);   //ignore the first space
        else
            throw std::runtime_error("no rule for " + key);
    }
    return trans_map;
}

const string& transform(string& word, const std::map<string, string> trans_map)
{
    //program core
    auto map_it = trans_map.find(word);
    //if the word is in rule map
    if (map_it != trans_map.end())
        return map_it->second;  //use the transformed words
    else
        return word;
}

void word_transform(ifstream& map_file, ifstream& input)
{
    auto trans_map = buildMap(map_file);//save the regular for transforming
    string text;                        //save line from input
    while (getline(input, text)){       //assign text by input
        istringstream stream(text);     //get word in text
        string word;
        bool firstword = true;          //contrl weather printing space
        while (stream >> word){
            if (firstword)
                firstword = false;
            else
                cout << " ";            //print space between words
            //transform returns its first parameter or words transformed.
            cout << transform(word, trans_map);
        }
        cout << endl;                   //a line transformed.
    }
}
int main(int argc, char* argv[])
{
    ifstream map_rule(argv[1]), input_file(argv[2]);
    word_transform(map_rule, input_file);
    return 0;
}