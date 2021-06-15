/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}*/

class Intersect
{   
    int get_count(Node head){
    int count=0;
    Node itr = head;
    while( itr!=null ){
        ++count;
        itr = itr.next;
    }
    return count;
}
    //Function to find intersection point in Y shaped Linked Lists.
	int intersectPoint(Node head1, Node head2)
	{
    int c1 = get_count(head1);
    int c2 = get_count(head2);
    int diff;
    if(c1>c2){
        diff = c1-c2;
    }
    else{
        diff = c2-c1;
    }
    //System.out.println("difference"+diff);
    if(c1>c2){
        //Node itrr = head1;
        while( diff>0 ){
            //System.out.println(itrr.data);
            head1 = head1.next;
            diff--;
        }
        Node itr = head1, jtr = head2;
        while( itr!=null ){
            //System.out.println("in c1 > c2");
            if( itr == jtr ){
                return itr.data;
            }
            itr = itr.next;
            jtr = jtr.next;
        }
    }
    else{
        //Node start=head2;
        while( diff>0 ){
            head2 = head2.next;
            diff--;
        }
        Node itr = head2, jtr = head1;
        while( itr!=null ){
            if( itr == jtr ){
                return itr.data;
            }
            itr = itr.next;
            jtr = jtr.next;
        }
    }
    return -1;
	}
}

