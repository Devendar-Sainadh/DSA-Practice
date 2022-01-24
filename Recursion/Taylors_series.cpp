#include <bits/stdc++.h>
using namespace std;

double exp(int x, int n){
    static double p=1,q=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r=exp(x,n-1);
        p=p*x;
        q=q*n;
        return r+p/q;
    }
}   
int main()
{
    int n;
    cin>>n;
    double ans=exp(1,n);
    cout<<ans;
    return 0;
}

/*
//using for loop
#include <bits/stdc++.h>
using namespace std;

double exp(int x,int n){
    double s=1;
    double num=1;
    double den=1;
    for(int i=1;i<=n;i++){
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}   
int main()
{
    int n;
    cin>>n;
    double ans=exp(1,n);
    cout<<ans;
    return 0;
}
*/