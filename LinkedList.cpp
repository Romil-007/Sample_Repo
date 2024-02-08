#include <iostream>

using namespace std;

class Node
{
    public:
        int val;
        Node* next;

            Node(){
            val = 0;
            next = NULL;
        }

        
};

Node insertstr(int val , Node head){
    Node *temp = new Node();
    temp->val = val;
    temp->next = &head;
    return *(temp);
}

int main(){

    Node n1;

    n1.val = 10;

    Node* head = &n1 ;
    Node *curr = &n1;

    *(head) = (insertstr(99, *(head)));
    *(head) = (insertstr(30, *(head)));

    


    cout<<curr->val<<endl;
    curr = curr->next;
    cout<<curr->val<<endl;



    return 0;
}