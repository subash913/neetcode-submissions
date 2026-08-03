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
    void reorderList(ListNode* head) {
      if (!head || !head->next) return;
      ListNode* fast = head;
      ListNode* slow = head;
      ListNode* prev = nullptr;
      while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
      }
      if (prev) prev->next = nullptr;
      ListNode* head1 = head;
      ListNode* head2 = nullptr;
      ListNode* curr = slow;
      while (curr != nullptr) {
        ListNode* nextNode = curr->next;
        curr->next = head2;
        head2 = curr;
        curr = nextNode;
      }
      while (head1 != nullptr && head2 != nullptr) {
        ListNode* temp = head1->next;
        ListNode* temp2 = head2->next;
        head1->next = head2;
        if (temp == nullptr) break;
        head2->next = temp;
        head2 = temp2;
        head1 = temp;

      }
}
};
