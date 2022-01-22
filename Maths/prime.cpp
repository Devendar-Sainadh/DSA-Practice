#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int n;
    cin>>n;
    int count=0;
    if(n==1){
        cout<<"Not a prime";
    }
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            cout<<"Not a Prime";
            count=1;
            break;
        }

    }
    if(count==0){
    cout<<"Prime NUmber";
    }
    
}
