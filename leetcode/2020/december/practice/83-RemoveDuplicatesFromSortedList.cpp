#include<iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

void display(ListNode* list) {
    struct ListNode* ptr = list;
    while (ptr != nullptr) {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* left_ptr = head;
        ListNode* right_ptr = head;
        while (left_ptr != nullptr) {

            while (right_ptr == nullptr || right_ptr->val != left_ptr->val) {
                right_ptr = right_ptr->next;
            }
            left_ptr->next = right_ptr;
            left_ptr = left_ptr->next;
            right_ptr = left_ptr;
        }
        return head;
    }
};

int main() {
    Solution solution;
    ListNode n3 = { 4 };
    ListNode n2 = { 2,&n3 };
    ListNode n1 = { 1,&n2 };
    display(solution.deleteDuplicates(&n1));
    return 0;
}