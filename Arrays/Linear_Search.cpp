#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int target,int n){
  for (int i = 0; i < n; i++)
    {
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}  
int main()
{
    int n,target;
    cin>>n;
    cin>>target;
    //int arr[10]={22,5,68,75,98,41,25,69,14,1};
    int arr[100]={0};
   
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int x=linearsearch(arr,target,n);
    
    cout<<x;
    

    return 0;
}