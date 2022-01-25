#include <bits/stdc++.h>
using namespace std;

int Binarysearch(int arr[],int target,int start,int end){
   
    
    
    while(start<=end){
    int mid= start+(end-start)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
        start=mid+1;
    }
    else if(arr[mid]>target){
        end=mid-1;
    }
    }
    return -1;


}  
int main()
{
    int n,target;
    cin>>n>>target;
   // int arr[10]={22,5,68,75,98,41,25,69,14,1};
    int arr[100]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int start=0;
    int end=n-1;
    int x=Binarysearch(arr,target,start,end);
    
    cout<<x;
    

    return 0;
}