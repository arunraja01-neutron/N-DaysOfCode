class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node* slow=head;
        Node* fast=head;
        while(true){
            if(slow==NULL || fast==NULL || fast->next==NULL || slow->next==NULL) return false;
            slow = slow->next;
            fast = fast->next->next;
            if( slow==fast ) return true;
        }
    }
};
