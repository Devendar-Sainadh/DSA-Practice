#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int m,n;
cin>>m>>n;
int a[m];
int b[n];
vector<int> c;
for(int i=0;i<m;i++){
cin>>a[i];
}

for(int i=0;i<n;i++){
cin>>b[i];
}

int i=0;
int j=0;

while (i<m && j<n)
{
    if(a[i]<b[j]){
        c.push_back(a[i++]);
    }
    else if(b[j]<a[i]){
        j++;
    }
    else{
        i++;
        j++;
    }
}

for(;i<m;i++){
    c.push_back(a[i]);
}

for(int k=0;k<c.size();k++){
cout<<c[k]<<" ";
}
    return 0;
}