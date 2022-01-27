#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}   
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int i=0;
int j=n-1;
while(i<j){
    while (arr[i]<0)
    {
        i++;
    }
    while(arr[j]>0){
        j--;
    }
    if(i<j){
        swap(arr[i],arr[j]);
    }
    
}    
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
    return 0;
}