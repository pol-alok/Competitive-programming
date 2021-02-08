#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)     {
        string w1, w2;
        for (string s : word1)
            w1 += s;
        for (string s : word2)
            w2 += s;
        return w1 == w2;
    }
};

int main() {
    Solution solution;
    vector<string> word1{ "abc", "d", "defg" }, word2{ "abcddefg" };
    cout << solution.arrayStringsAreEqual(word1, word2);
    return 0;
}