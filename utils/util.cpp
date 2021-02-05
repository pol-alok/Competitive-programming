#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include<unordered_map>
#include <algorithm> 
#include <cctype>
#include "Row.h"
#include "Data.h"
#include "Constants.h"
using namespace std;


inline string trim(const string& s) {
    auto wsfront = find_if_not(s.begin(), s.end(), [](int c) {return isspace(c);});
    auto wsback = find_if_not(s.rbegin(), s.rend(), [](int c) {return isspace(c);}).base();
    return (wsback <= wsfront ? string() : string(wsfront, wsback));
}

Row getRowFromLine(string line) {
    size_t pos = 0;
    vector<string> tokens;
    string token;
    while ((pos = line.find("|")) != string::npos) {
        token = line.substr(0, pos);
        tokens.push_back(trim(token));
        line.erase(0, pos + 1);
    }
    return Row(tokens[1], tokens[2], tokens[3]);
}

vector<Row> readDataFromFile() {
    vector<Row> data;
    ifstream file("../leetcode/README.md");
    if (file.is_open()) {
        string line;
        int skip = 10;
        while (getline(file, line)) {
            if (--skip < 0) {
                data.push_back(getRowFromLine(line));
            }
        }
        file.close();
    }
    return data;
}

string buildSolution(string lang, string solutionLink) {
    string solution;
    if (lang == "cpp" || lang == "c++") {
        solution = "[<img src=\"https://img.icons8.com/color/c-plus-plus-logo.png\" width=\"30px\" height=\"30px\">]";
    } else if (lang == "java") {
        solution = "[<img src=\"https://img.icons8.com/color/java.png\" width=\"30px\" height=\"30px\">]";
    } else if (lang == "js" || lang == "javascript") {
        solution = "[<img src=\"https://img.icons8.com/color/javascript.png\" width=\"30px\" height=\"30px\">]";
    } else if (lang == "python") {
        solution = "[<img src=\"https://img.icons8.com/color/python.png\" width=\"30px\" height=\"30px\">]";
    }
    solution += "(" + solutionLink + ")";
    return solution;
}

Row buildNewRow(Data data) {
    Constants constants;
    string id = "[`#" + data.getId() + "`](" + data.getproblemLink() + ")";
    string program = data.getproblemName();
    string solution = buildSolution(data.getLang(), data.getSolutionLink());
    return Row(id, program, solution);
}
int writeDataTofile(vector<Row>& records) {
    Constants constants;
    ofstream readme("../leetcode/test.md");
    if (!readme) {
        cout << "File not created!";
    } else {
        cout << "File created successfully!" << endl;
        readme << constants.tebleTemplate << endl;
        for (Row row : records) {
            readme << row.toRow() << endl;
        }
        readme.close();
    }
    return 0;
}

int addRowInReadme(Data data) {
    vector<Row> records = readDataFromFile();
    records.push_back(buildNewRow(data));
    writeDataTofile(records);
    return 0;
}



int main() {
    // 1672
    string id = "1672";
    // https://leetcode.com/problems/richest-customer-wealth/
    string plink = "https://leetcode.com/problems/richest-customer-wealth/";
    // Richest Customer Wealth
    string pname = "Richest Customer Wealth";
    // https://github.com/pol-alok/competitive-programming/blob/master/leetcode/2021/january/practice/cpp/1672-RichestCustomerWealth.cpp
    string slink = "https://github.com/pol-alok/competitive-programming/blob/master/leetcode/2021/january/practice/cpp/1672-RichestCustomerWealth.cpp";
    //  "cpp", "java", "js", "python" 
    string lang = "cpp";

    Data data(id, plink, pname, lang, slink);
    addRowInReadme(data);
    return 0;
}

