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

int comb(int n, int r){
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);

    return t1/(t2*t3);
}

int rcomb(int n, int r){
    if(n==r || r==0){
        return 1;
    }
    else{
        return rcomb(n-1,r-1)+rcomb(n-1,r);
    }
}
int main()
{
    int n,r;
    cin>>n>>r;
    int c=rcomb(n,r);
    cout<<c;
    return 0;
}