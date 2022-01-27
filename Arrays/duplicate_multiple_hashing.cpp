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
int k=arr[n-1];
int H[k]={0};   
for(int i=0;i<n;i++){
      H[arr[i]]++;
}

for (int i = 0; i < k; i++)
{
    if(H[i]>1){
        cout<<i<<" is duplicated "<<H[i]<<" times."<<endl;
    }
}

    return 0;
}