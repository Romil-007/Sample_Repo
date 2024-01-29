#include <iostream>

using namespace std;

void insert(int arr[] , int a , int e ){
    int n = 0;

    while(arr[n] != 0){
        n += 1;
    }
    //Making sure the inserting index remains under range (if more than size it will insert at last index)
    if(a>n)
    {
        a = n;
    }
    //Shifting array
    for (int i = n  ; i >= a+1 ; i--)
    {
        arr[i] = arr[i-1];
    }
    //Changing the element to the required element
    arr[a] = e;
}

int main(){
    
    int n , a , e;

    //Asking for size
    cout<<"Enter the number of element you want to enter";
    cin>>n;

    //Initializing array for more than one size (as we have to insert one element)
    int arr[100] = {};

    //Getting data for array (Upto n elements)
    for (int i = 0 ; i < n ; i++){
        cout<<"Enter "<<i+1<<" element : ";
        cin>>arr[i];
    }

    //Displaying entered array
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    //Asking for insertion details
    cout<<"\n\n";
    cout<<"Enter the index you want to insert at? ";
    cin>>a;
    cout<<"Enter the element : ";
    cin>>e;

    //Calling function with (arr(pointer) , index , element )
    insert(arr,a,e);

    //Displaying the updated array
    for (int i = 0 ; i <= n ; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}