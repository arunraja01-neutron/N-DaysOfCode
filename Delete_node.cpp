#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *head = NULL;

void insert_tail( int new_data ){

    node *new_node = new node;
    new_node->data = new_data;
    if( head == NULL ){
        head = new_node;
        head->next = NULL;
        return ;
    }
    node *itr = head;
    while( itr->next ){
        itr = itr->next;
    }
    itr->next = new_node;
    new_node->next = NULL;
    return ;

}

void display(){
    
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

void remove( node* rem ){
    node *prev = NULL;
    node *itr = rem;
    while( itr->next ){
        if( itr->next->next == NULL ){
            prev = itr;
        }
        itr->data = itr->next->data;
        itr = itr->next;
    }

    prev->next = NULL;

}

int main(){

    insert_tail(10);
    insert_tail(20);
    insert_tail(30);
    insert_tail(40);
    insert_tail(50);
    node *itr = head;
    node *to_remove = NULL;
    while( itr ){
        if( itr->data == 20){
            to_remove = itr;
            break;
        }
        itr = itr->next;
    }
    display();
    remove(to_remove);
    display();
    
}
