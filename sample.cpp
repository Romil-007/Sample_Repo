#include <iostream>

using namespace std;

void insert(int arr[], int index, int val)
{

    for (int i = 4; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = val;
    return;
}

int main()
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    insert(arr, 2, 25);
    cout << " \n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}