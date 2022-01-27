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
int i=0;
int j=n-1;
int k=10;
while(i<j){
    if(arr[i]+arr[j]==k){
        cout<<arr[i]<<" "<<arr[j]<<endl;
        i++;
        j--;
    }
    else if(arr[i]+arr[j]<k){
        i++;
    }
    else{
        j--;
    }
}
    return 0;
}