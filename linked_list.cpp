#include <bits/stdc++.h>
using namespace std;

// Declarlimg singly linked list
struct node {
    int value;
    struct node *next;
};
 struct node *head , *newnode , *temp;
// Insertion at the beginning 
void  InserT( int count, node * head){
    int pos; 
    cin >> pos;
    int i=1;

    if(count < pos ){
        cout << "invalid position" ;
    }
    else{
        temp = head;
        while(i < pos){
            temp = temp -> next;
            i++;
        }
        newnode = new node();
        cin >> newnode -> value;
        newnode -> next = temp -> next;
        temp -> next = newnode;

    }
}

// Deletion of node
void Delete ( node *head ){
    struct node *nxtnod;
    int pos;
    cin>> pos;
    temp = head;
    int i=1;
    while(i < pos-1){
        temp = temp -> next;
        i++; 
    }
    nxtnod= temp -> next;
    temp -> next = nxtnod -> next;
    free(nxtnod);

}

// Main function
int main(){
    
    head = NULL;
    int choice=1, cnt =0;
    while(choice){
        newnode = ( struct node *) malloc(sizeof (struct node));
        cin>> newnode -> value; // Input the value of node;
        newnode -> next = NULL;
        if(head == NULL){
            head = temp = newnode;
        } 
        else {
            temp -> next = newnode;
            temp = newnode;
        }
        cin >> choice;
    }
    temp = head;
    while(temp != NULL){
        temp = temp -> next;
        cnt ++;
    }
    Delete (head);
    
    //InserT(cnt , head);
    temp = head;
    while(temp != NULL){
        cout << temp -> value << " ";
        temp = temp -> next;
       
    }

    //cout << cnt << endl;



}