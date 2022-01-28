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
int maxi=INT_MIN;
for(int i=0;i<n;i++){
maxi=max(maxi,arr[i]);
}
int target;
cin>>target;
int k=maxi+1;
int H[k]={0};
for(int i=0;i<n;i++){
    if(H[target-arr[i]]>0 ){
       cout<<target-arr[i]<<" "<<arr[i]<<endl;
       break;
    }
     H[arr[i]]++;
}
    return 0;
}