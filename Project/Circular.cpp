#include <iostream>

using namespace std;


class Node{
    public:
        string task;
        int time;
        Node * next;

        Node(){
            task = "";
            time = 0;
            next = NULL;
        }

        
};


class Round{
    public:
        Node * head;
        int n ;

        Round(){
            head = NULL;
            n = 0;
        }

        void initiate(){
            Node * curr = head;
            int i = 1;
            cout<<i<<" Round : ";
            do{
                if(curr->time < 0){
                    cout<<"\n"<<curr->task<<" has time remaining : 0";
                }
                else{
                    cout<<"\n"<<curr->task<<" has time remaining : "<<curr->time;
                }
                
                if(curr->time <= 0){
                    cout<<"\n"<<curr->task<<" COMPLETED ";
                    remove(curr->task);
                }
                curr->time -= 5;
                curr = curr->next;
                if(curr == head){
                    cout<<"\n\n"<<++i<<" Round : ";
                }
            }while(head != NULL);
            
        }


        void add(string task , int time){
            Node * temp = new Node();
            temp->task = task;
            temp->time = time;
            if(n == 0){
                head = temp;
                temp->next = head;
                n++;
                return;
            }
            else{
                Node * curr = head;
                do{
                    curr = curr->next;
                }while(curr->next!= head);
                curr->next = temp;
                temp->next = head;
                n++;
                return;
                
            }
        }

        void remove(string task){
            Node* prev = head;
            for(Node * temp = head ; temp != NULL ; temp = temp->next ){
                if(temp->task == task){
                    prev->next = temp->next;
                    n--;
                    break;

                }
                else{
                    prev = temp;
                }
            }
        }
};

void print(Round l){
    Node * curr = l.head;
    do{
        cout<<"\n"<<curr->task<<" has time remaining : "<<curr->time;
        curr = curr->next;
    }while(curr != l.head);
    return;


}

int main(){

    Round r;


    r.add("Brush",15);
    r.add("Bath",10);
    r.add("Nap",8);
    r.initiate();


    return 0;

}