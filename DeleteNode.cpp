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
    void deleteNode(ListNode* node) {
        ListNode *itr = node;
        while( itr->next->next ){
            itr->val = itr->next->val;
            itr = itr->next;
        }
        itr->val = itr->next->val;
        itr->next = NULL;
    }
};
