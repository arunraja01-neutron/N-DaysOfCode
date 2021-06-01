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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return nullptr;
        if(lists.size() == 1)
            return lists[0];
        
        int start = 0, end = lists.size()-1;
        while(end > 0){
            while(start < end){
                lists[start] = mergeTwoLists(lists[start], lists[end]);
                start++;
                end--;
            }
            start = 0;
        }
        return lists[0];
    }
    
    ListNode* mergeTwoLists(ListNode* listA, ListNode* listB){
        if(!listA)
            return listB;
        if(!listB)
            return listA;
        
        ListNode* mergedListHead =new ListNode(0);
        ListNode* mergedListCurrent = mergedListHead;
        
        while(listA != nullptr && listB != nullptr){
            int valA = listA->val;
            int valB = listB->val;
            
            if(valA < valB){
                mergedListCurrent->next = listA;
                listA= listA->next;
            }
            else{
                mergedListCurrent->next = listB;
                listB= listB->next;
            }
            mergedListCurrent = mergedListCurrent->next;
        }
        
        if(listA == nullptr)
            mergedListCurrent->next = listB;
        else
            mergedListCurrent->next = listA;
        return mergedListHead->next;
    }
};
