#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start <= end) 
    {
        if(arr[mid] == key) 
        {
            return mid;
        }
        if(key > arr[mid]) 
        {
            start = mid + 1;
        }
        else
        { 
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main() { 
    int arr[10] = {2,4,6,8,12,18,20,22,30};
    int key;
    cout<<"Enter The Key :";
    cin>>key;
    int arrIndex = binarySearch(arr,10,key);
    cout << "Index of "<<key<<" is " << arrIndex << endl;
    return 0;
}