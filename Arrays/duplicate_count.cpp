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

int j;

for(int i=0;i<n-1;i++){
if(arr[i]==arr[i+1]){
    j=i+1;
    while(arr[i]==arr[j]){
        j++;
    }
    cout<<arr[i]<<" is duplicated "<<j-i<<" times."<<endl;
    i=j-1;
}
}
    return 0;
}