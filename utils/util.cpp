#include <iostream>
#include "Readme.h"
using namespace std;
int main() {

    Readme readme;

    // 1672
    string id = "83";

    // Problem link
    // https://leetcode.com/problems/richest-customer-wealth/
    string plink = "https://leetcode.com/problems/remove-duplicates-from-sorted-list/";

    // Problem name
    // Richest Customer Wealth
    string pname = "Remove Duplicates from Sorted List";

    // Solution file relative path
    // leetcode/2021/february/practice/cpp/1672-RichestCustomerWealth.cpp 
    // Note : separator  should be forward slash not backword
    string relativePath = "leetcode/2020/december/practice/83-RemoveDuplicatesFromSortedList.cpp";

    //  "leetcode", "codechef", "hackerearth", "hackerrank" 
    string platform = "leetcode";

    Data data(id, plink, pname, readme.generateSolutionLink(relativePath), platform);
    // Add new Row
    readme.addRow(data);

    return 0;
}

