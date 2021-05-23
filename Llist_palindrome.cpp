#include<iostream>
using namespace std;

struct node{
    char data;
    node *next;
};

node *head1 = NULL;
node *head2 = NULL;

node* insert_tail(node *head, char new_data ){

    node *new_node = new node;
    new_node->data = new_data;
    if( head == NULL ){
        head = new_node;
        head->next = NULL;
        return head;
    }
    node *itr = head;
    while( itr->next ){
        itr = itr->next;
    }
    itr->next = new_node;
    new_node->next = NULL;
    return head;

}

void reverse(node *head){

    if( head == NULL ){
        cout << "Linked list empty ";
        return;
    }

    node *itr = head;
    node *prev = NULL;
    while( itr->next ){
        node *temp = itr->next;
        itr->next = prev;
        prev = itr;
        itr = temp; 
    }
    head = itr;
    head->next = prev;
    head1 = head;
    
}


void display(node *head){
    
    if( head == NULL ){
        cout << "Linked list empty ";
        return;
    }

    node *itr = head;
    while( itr ){
        cout << itr->data << " -> ";
        itr = itr->next;
    }

    cout << "NULL " << endl;

}

void make_llist2(){

    reverse(head1);
    node *itr = head1;
    while( itr ){
        head2 = insert_tail(head2, itr->data);
        itr = itr->next;
    }

}

bool is_palindrome(){

    make_llist2();
    reverse(head1);
    //reverse(head2);
    node *itr1 = head1;
    node *itr2 = head2;
    while( itr1->next ){
        if( (int)itr1->data != (int)itr2->data ){
            return false;
        }
        itr1 = itr1->next;
        itr2 = itr2->next;
    }

    return true;

}

int main(){

    head1 = insert_tail(head1, 'a');
    head1 = insert_tail(head1, 'b');
    head1 = insert_tail(head1, 'c');
    head1 = insert_tail(head1, 'b');
    head1 = insert_tail(head1, 'a');
    // display(head1);
    // // reverse(head1);
    // // display(head1);
    // make_llist2();
    // display(head1);
    // display(head2);
    if( is_palindrome() ){
        cout << "Given Linked list is palindrome" << endl;
    }
    else{
        cout << "Given Linked list is not palindrome" << endl;
    }
    // display(head1);
    // display(head2);
    return 0;

}

