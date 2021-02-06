#include <iostream>
#include "Readme.h"
using namespace std;
int main() {

    Readme readme;

    // 1672
    string id = "1672";

    // Problem link
    // https://leetcode.com/problems/richest-customer-wealth/
    string plink = "https://leetcode.com/problems/richest-customer-wealth/";

    // Problem name
    // Richest Customer Wealth
    string pname = "Richest Customer Wealth";

    // Solution file relative path
    // leetcode/2021/february/practice/cpp/1672-RichestCustomerWealth.cpp 
    // Note : separator  should be forward slash not backword
    string relativePath = "leetcode/2021/february/practice/cpp/1672-RichestCustomerWealth.js ";

    //  "leetcode", "codechef", "hackerearth", "hackerrank" 
    string platform = "codechef";

    Data data(id, plink, pname, readme.generateSolutionLink(relativePath), platform);
    // Add new Row
    readme.addRow(data);

    return 0;
}

