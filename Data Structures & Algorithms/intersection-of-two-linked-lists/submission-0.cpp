/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* temp = headA;
        unordered_set<ListNode*> set;
        while (temp != nullptr) {
            set.insert(temp);
            temp = temp->next;
        }
        temp = headB;
        while (temp != nullptr) {
            if (set.contains(temp)) {
                return temp;
            }
            temp = temp->next;
        }

        return nullptr;
    }
};