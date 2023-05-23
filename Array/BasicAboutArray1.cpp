#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    cout << "\nTraversing The Array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // Inserting Element in Array At the Start
    cout << "\nEnter The Element You want to insert At the start : ";
    int st;
    cin >> st;
    for (int i = 5; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = st;

    cout << "\nTraversing The Array : ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter the element u want to insert at the mid : ";
    int mid;
    cin >> mid;
    cout << "At what position : ?? ";
    int pos;
    cin >> pos;

    for (int i = 6; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = mid;

    cout << "\nTraversing The Array : ";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter the element that u want to insert at the end : ";
    int end;
    cin >> end;

    arr[7] = end;
    cout << "\nTraversing The Array : ";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    // Deleting element from Beginning

    cout << "\nDeleting Element from the beginning : ";
    for (int i = 1; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<"\nDeleting Element from the mid : ";
    cout<<"\nAt what position : ??";
    int posDel;
    cin>>posDel;
   
    for(int i = posDel-1;i<7;i++){
        arr[i] = arr[i+1];
    }

    for(int i = 1;i<8-1;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"\nDeleting Element from the end : ";
    for(int i = 1;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}