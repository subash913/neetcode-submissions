/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return head;
        }
       ListNode* temp = nullptr;
       ListNode* head1 = head;
       while (head1->next != nullptr) {
        ListNode* curr = head1;
        head1 = head1->next;
        curr->next = temp;
        temp = curr;
       }
       head1->next = temp;
       return head1;
    }
};
