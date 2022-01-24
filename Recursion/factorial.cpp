#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}   
int main()
{
    int n,ans;
    cin>>n;
    ans=fact(n);
    cout<<ans;
    return 0;
}