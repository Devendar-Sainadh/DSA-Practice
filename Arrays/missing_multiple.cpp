#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

int diff=arr[0]-0;
for (int i = 0; i < n; i++)
{
    if(arr[i]-i!=diff){
        while(diff<arr[i]-i){
            cout<<i+diff<<" ";
            diff++;
        }
    }
}

    return 0;
}