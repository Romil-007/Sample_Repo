#include <iostream>

using namespace std;


class Stack{
    private:
        int top;
        int arr[15];

    public:
        Stack(){
            top = -1;
        }

        int pop(){
            if(top == -1){
                return -1;
            }
            int temp = arr[top];
            arr[top] = -1;
            top--;
            return temp;
        
        }

        int peek(){
            return arr[top];
        }

        void push(int a){
            if(top == 14)
            {
                return;
            }
            top++;
            arr[top] = a;
        }

};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.peek();
    s.pop();
    cout<<s.peek();
    
    return 0;
}