class Solution
{
    //Function to reverse a linked list.
    Node reverseList(Node head)
    {
        if(head==null) return head;
        Node itr = head;
        Node prev=null;
        Node temp;
        while( itr.next!=null ){
            temp = itr.next;
            itr.next = prev;
            prev = itr;
            itr=temp;
        }
        itr.next=prev;
        return itr;
    }
}
