#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int m,n;
cin>>m>>n;
int a[m];
int b[n];
int c[m+n];
for(int i=0;i<m;i++){
cin>>a[i];
}

for(int i=0;i<n;i++){
cin>>b[i];
}

int i=0;
int j=0;
int k=0;
while (i<m && j<n)
{
    if(a[i]<b[j]){
        c[k++]=a[i++];
    }
    else{
        c[k++]=b[j++];
    }
}

for(;i<m;i++){
    c[k++]=a[i];
}
for(;j<n;j++){
    c[k++]=b[j];
}

for(int k=0;k<m+n;k++){
cout<<c[k]<<" ";
}
    return 0;
}