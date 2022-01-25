#include <bits/stdc++.h>
using namespace std;

int* Delete(int n,int arr[],int index){
    int x=arr[index];
    for (int i = index; i < n; i++)
    {
        arr[i]=arr[i+1];
    }
    
}
int main()
{
    int arr[100]={0};
    int n,index;
    cout<<"Enter the length of Array."<<endl;
    cin>>n;
    cout<<"Enter the index where element to be deleted"<<endl;
    cin>>index;

    cout<<"Enter the elements of an Array."<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Original array"<<endl;
     for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Delete(n,arr,index);
    n--;

    cout<<"Final array"<<endl;
     for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}