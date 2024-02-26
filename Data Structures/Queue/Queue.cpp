#include <iostream>

using namespace std;

class Queue
{
public:
    int front;
    int rear;
    int *arr;
    int n;

    Queue()
    {
        n = 15;
        front = -1;
        rear = -1;
        arr = (int *)calloc(n, sizeof(int));
    }
    Queue(int n)
    {
        this->n = n;
        arr = (int *)calloc(n, sizeof(int));
        front = -1;
        rear = -1;
    }

    int peek()
    {
        return arr[front];
    }

    int dequeue()
    {

        front++;
        return arr[front - 1];
    }
    void enqueue(int val)
    {
        if (rear == n - 1)
        {
            cout << "OVERFLOW";
        }
        rear++;
        arr[rear] = val;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    cout << q.peek();

    return 0;
}