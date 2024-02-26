#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node()
    {
        val = 0;
        next = NULL;
    }

    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

class Linkedlist
{
public:
    Node *head;
    int n;

    Linkedlist()
    {
        head = NULL;
        n = 0;
    }

    void append(int val)
    {
        Node *temp = new Node(val);
        if (n == 0)
        {
            head = temp;
            temp->next = head;
        }
        else
        {
            Node *curr = head;
            while (curr->next != head)
            {
                curr = curr->next;
            }
            temp->next = curr->next;
            curr->next = temp;
        }
        n++;
    }

    void insert(int val, int ele) // Value to be inserted after element
    {
        Node *temp = new Node(val);
        Node *curr = head;

        while (curr->next != head)
        {
            if (curr->val == ele)
            {
                break;
            }
            curr = curr->next;
        }

        temp->next = curr->next;
        curr->next = temp;
        n++;
    }
    void pop()
    {
        if (n == 0)
        {
            return;
        }
        else
        {
            if (n == 1)
            {
                head = NULL;
            }
            else
            {
                Node *curr = head;
                while (curr->next->next != head)
                {
                    curr = curr->next;
                }

                curr->next = head;
            }
        }
        n--;
        return;
    }
    bool contains(int val)
    {
        Node *curr = head;

        while (curr != NULL)
        {
            if (curr->val == val)
            {
                return true;
            }
            curr = curr->next;
        }

        return false;
    }
    void remove(int val)
    {
        Node *temp = head;
        if (temp->val == val)
        {
            head = head->next;
            n--;
            return;
        }
        Node *prev = head;
        while (temp->val != val)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        n--;
        return;
    }

    int len()
    {
        return n;
    }
};

void print(Linkedlist a)
{
    cout << "[ ";
    Node *curr = a.head;
    do
    {
        if (curr->next == a.head)
        {
            cout << curr->val << " ]\n";
            return;
        }
        cout << curr->val << " , ";

        curr = curr->next;

    } while (curr != a.head);
}

int main()
{
    Linkedlist l;

    l.append(10);
    l.append(10);
    l.append(10);
    l.append(10);
    l.append(20);
    l.remove(20);
    print(l);
    return 0;
}