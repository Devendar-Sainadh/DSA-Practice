#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibo(n-2)+fibo(n-1);
    }
}

int Ifibo(int n){
    int t1=0,t2=1,s=0;
    if(n<=1){
        return n;
    }
    for(int i=2;i<=n;i++){
         s=t1+t2;
         t1=t2;
         t2=s;
    }
    return s;
}

int F[10];

int mfibo(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else {
        if(F[n-2]==-1){
        F[n-2]=mfibo(n-2);
    }
     if(F[n-1]==-1){
        F[n-1]=mfibo(n-1);
    }
    return F[n-2]+F[n-1];
    }
}


int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<10;i++){
        F[i]=-1;
    }

    int x=mfibo(n);
    cout<<x;
    return 0;
}
