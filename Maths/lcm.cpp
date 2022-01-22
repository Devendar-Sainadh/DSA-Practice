#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int x=gcd(a,b);
    int y=lcm(a,b);
    cout<<x<<endl;
    cout<<y;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int a,b;
    cin>>a>>b;
    int res=max(a,b);
    while(true){
        if(res%a==0 && res%b==0){
            break;

        }
        res++;
    }
    cout<<res;

    return 0;
}
*/
