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
    int lastDuplicate=0;

for(int i=0;i<n-1;i++){
      if(arr[i]==arr[i+1] && arr[i]!=lastDuplicate){
          cout<<arr[i]<<" ";
          lastDuplicate=arr[i];
      }
}
    return 0;
}