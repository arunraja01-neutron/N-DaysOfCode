class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        Node *itr = head;
        while( itr->next ){
            itr = itr->next;
        }
        itr->next = head;
        Node *tail = NULL;
        while( k-- ){
            tail = head;
            head = head->next;
        }
        tail->next = NULL;
        return head;
    }
};
    
