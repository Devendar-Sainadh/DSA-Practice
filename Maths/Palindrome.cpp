#include <iostream>
using namespace std;
    
int main()
{
    int n;
    cin>>n;
    int real=n;
    int rem;
    int rev=0;
    while(n>0){
      rem=n%10;
      rev=rev*10+rem;
      n/=10;

    }
    if(real==rev){
     cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}