class Solution{
  public:
    bool isPalindrome(Node *head)
    {
        Node *p = head;
        int size=0;
        while( p ){
            size++;
            p = p->next;
        }
        if( size == 1 ){
            return true;
        }
        if( size == 2){
            if( head->data == head->next->data ){
                return true;
            }
            else{
                return false;
            }
        }
        int count=-1;
        Node *itr = head;
        Node *prev = NULL;
        Node * temp_nxt = NULL;
        Node * temp_itr = NULL;
        while( true ){
            if( count == (size/2)-2){
                if( size%2==0 ) temp_itr = itr->next;
                else temp_itr = itr->next->next;
                itr->next = prev;
                break;
            } // 1 2 3 4 5 5 4 3 2 1
            temp_nxt = itr->next;
            itr->next = prev;
            prev = itr;
            itr = temp_nxt;
            count++; 
        }

        while( itr && temp_itr ){
            //cout << itr->data << " " << temp_itr->data << endl;
            if( itr->data != temp_itr->data ){
                return false;
            }
            itr = itr->next;
            temp_itr = temp_itr->next;
        }

        return true;    
        
    }
};
