/*
#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int a,b;
    cin>>a>>b;
    int res=min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    cout<<res;
    return 0;
}
*/

//Highly Optimised solution

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
int main()
{
    int a,b;
    cin>>a>>b;
    int x=gcd(a,b);
    cout<<x;
    return 0;
}

// Optimised solution
/*
#include <iostream>
using namespace std;
    
int main()
{
    int a,b;
    cin>>a>>b;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    cout<<a;
    return 0;
}
*/
