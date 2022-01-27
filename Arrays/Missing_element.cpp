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
int sum=0;
for (int i = 0; i < n; i++)
{
    sum+=arr[i];
}
int k=arr[n-1];
int s=k*(k+1)/2;

cout<<s-sum;

    return 0;
}