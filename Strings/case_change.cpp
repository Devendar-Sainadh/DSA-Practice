#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    char arr[]={'J','e','s','U','s','\0'};
    cout<<arr<<endl;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        if(arr[i]>='A' && arr[i]<='Z')
    arr[i]+=32;
    else if(arr[i]>='a' && arr[i]<='z')
     arr[i]-=32;
    }
    cout<<arr;
    
    return 0;
}