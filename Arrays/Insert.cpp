#include <bits/stdc++.h>
using namespace std;


int* Insertx(int n,int arr[],int index,int x){
    n++;
    for (int i = n; i > index; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=x;
    
    return arr;
}
int main()
{
    int arr[100]={0};
    int x,index,n;

    cout<<"Enter length of Array."<<endl;
    cin>>n;
    cout<<"Enter Element to be inserted."<<endl;
    cin>>x;
    cout<<"Enter Index."<<endl;
    cin>>index;
    cout<<"Enter Elements of an array."<<endl;
    for (int i = 0; i < n; i++)
    {
         cin>>arr[i];
    }
cout<<"Original Array."<<endl;
      for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
       
    }
     cout<<endl;

    Insertx(n,arr,index,x);
   n++;
   cout<<"Element Inserted Array."<<endl;
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   


    

    return 0;
}
