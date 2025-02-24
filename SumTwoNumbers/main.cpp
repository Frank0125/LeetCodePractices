#include "class.cpp"
#include <iostream>
using namespace std;

#pragma region Problem Description
/*You are given two non-empty linked lists representing two 
non-negative integers. The digits are stored in reverse order, 
and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.
*/
#pragma endregion

#pragma region Constraints
/*The number of nodes in each linked list is in the range [1, 100].
0 <= Node.val <= 9
It is guaranteed that the list represents a number that does not 
have leading zeros.*/
#pragma endregion

//This problem proposes the solution in a form of a class

class Solution {
    public:
        ListNode* addTwoNumbers (ListNode* l1, ListNode* l2) {
            //E3. Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
            //Output: [8,9,9,9,0,0,0,1]
            // We can sum every digit and if it is greater than 9, we can carry the 1 to the next digit
            ListNode* dummyHead = new ListNode(); //dummyHead is a pointer to the first node of the linked list
            // pointers to iterate
            ListNode* p = l1; 
            ListNode* q = l2;
            ListNode* curr = dummyHead; //pointer to the current node
            int carry = 0;
            while (p != nullptr || q != nullptr) {
                int x = (p != nullptr) ? p->val : 0;
                int y = (q != nullptr) ? q->val : 0;
                int sum = carry + x + y;
                carry = sum / 10;
                curr->next = new ListNode(sum % 10);
                curr = curr->next;
                if (p != nullptr) p = p->next;
                if (q != nullptr) q = q->next;
            }
            if (carry > 0) { //if there is a carry left, we must add it as a new node
                curr->next = new ListNode(carry);
            }
            return dummyHead->next;
        }
        //extra function to print the linked list, not required in leetcode
        void printList(ListNode* l) {
            while (l != nullptr) {
                cout << l->val << " ";
                l = l->next;
            }
        }
};

int main() {
    Solution s1;
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    ListNode* result = s1.addTwoNumbers(l1, l2);
    s1.printList(result);


    return 0;
}