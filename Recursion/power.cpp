 #include <bits/stdc++.h>
using namespace std;

int pow(int m, int n){
    if(n==0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}   
int main()
{
    int m,n,ans;
    cin>>m>>n;
    ans=pow(m,n);
    cout<<ans;
    return 0;
}

// Efficient Method
/*
#include <bits/stdc++.h>
using namespace std;

int pow(int m, int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return pow(m*m,n/2);
    }
    else{
        return m*pow(m*m,(n-1)/2);
    }
}   
int main()
{
    int m,n,ans;
    cin>>m>>n;
    ans=pow(m,n);
    cout<<ans;
    return 0;
}
*/