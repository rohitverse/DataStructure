#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
    if(arr[i]==key)
    {
        return 1;
    }
    }
    return 0;
}
int main()
{
    int arr[10]={5,7,3,4,12,-23,-9,-88,77,3};
    cout <<"Enter the key"<<endl;
    int key;
    cin>>key;
bool found=search(arr,10,key);
{
    if(found)
    {
        cout<<"Key is Present"<<endl;
    }
    else
    cout<<"Key is not Present"<<endl;
}
return 0;
}
