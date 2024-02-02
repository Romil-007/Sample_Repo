#include <iostream>

using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(){
            val = 0;
            next = NULL;
        }



        
};

int main(){
    
    Node * n1 = new Node();
    n1->val = 1;
    Node *head = n1;

    Node *n2 = new Node();
    n2->val = 10;
    n1->next = n2;


    Node *n3 = new Node();
    n3->val = 20;
    n2->next = n3;


    Node* curr;
    curr = head;

    while(curr != NULL){
        cout<<curr->val<<" ";
        curr = curr->next;
    }



    


    return 0;
}