#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter the size of the array: ";
    cin >> n;
    int arr[n], i, pos;
    cout << "\n\n Enter the " << n << " elements of the array: "<<endl;
    for(i=0; i<n; i++)
    {
        cin >> arr[i]; 
    }
    cout << "\n\n The " << n << " elements of the array, before deletion are : "<<endl;
    for(i=0; i<n; i++)
    {
        cout << arr[i] <<" "; 
    }
    cout << " \nEnter the position, between 1 and " << n << " , of the element to be deleted : "<<endl;
    cin >> pos;
    --pos;
    for (i = pos; i <= 9; i++)
    {
        arr[i] = arr[i + 1];
    }
    cout << "The " << n-1 << " elements of the array, after deletion are :"<<endl;
    for(i=0; i<n-1; i++)
    {
        cout << arr[i] << "  "; 
    } 
    return 0;
}
