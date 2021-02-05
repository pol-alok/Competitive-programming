#include<iostream>
#include<string>
#include<unordered_map>
#ifndef CONSTANTS_H
#define CONSTANTS_H

using namespace std;

class Constants
{
public:
    string tebleTemplate = "<!-- \nIcon link template for the diff lang\n[<img src=\"https://img.icons8.com/color/c-plus-plus-logo.png\" width=\"30px\" height=\"30px\">](your_file_link)\n[<img src=\"https://img.icons8.com/color/java.png\" width=\"30px\" height=\"30px\">](your_file_link)\n[<img src=\"https://img.icons8.com/color/javascript.png\" width=\"30px\" height=\"30px\">](your_file_link)\n[<img src=\"https://img.icons8.com/color/python.png\" width=\"30px\" height=\"30px\">](your_file_link)\n-->\n| ID  | Problem | Solution |\n| :-: | :------ | :------: |";
    unordered_map<string, string> images = { {"cpp", "[<img src=\"https://img.icons8.com/color/c-plus-plus-logo.png\" width=\"30px\" height=\"30px\">]"}, {"java", "[<img src=\"https://img.icons8.com/color/java.png\" width=\"30px\" height=\"30px\">]"}, {"js", "[<img src=\"https://img.icons8.com/color/javascript.png\" width=\"30px\" height=\"30px\">]"}, {"python", "[<img src=\"https://img.icons8.com/color/python.png\" width=\"30px\" height=\"30px\">]"} };
};

#endif