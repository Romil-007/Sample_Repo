#include <iostream>

using namespace std;

class CircularQueue
{
public:
    int front;
    int rear;
    int arr[15];

    CircularQueue()
    {
        front = -1;
        rear = -1;
    }
    void enqueue(int val)
    {
        if ((front == 0 && rear == 14) || (rear == front - 1))
        {
            cout << "OVERFLOW";
            return;
        }
        if (rear == -1 && front == -1)
        {
            front = rear = 0;
        }
        else if (rear == 14 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = val;
    }

    int peek()
    {
        return arr[front];
    }

    int dequeue()
    {

        int a = arr[front];
        arr[front] = -1;
        if (front == 14 && rear != 0)
        {
            front = 0;
        }
        else if (front == rear)
        {
            front = rear = -1;
            return -1;
        }
        else
        {
            front++;
        }

        return a;
    }
};
int main()
{
    CircularQueue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);

    cout << q.dequeue() << "\n";
    cout << q.dequeue() << "\n";
    cout << q.dequeue() << "\n";
    cout << q.dequeue() << "\n";
    cout << q.dequeue() << "\n";

    q.enqueue(5);
    q.enqueue(5);
    q.enqueue(5);
    q.enqueue(5);

    return 0;
}