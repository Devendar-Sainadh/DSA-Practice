#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    char arr[]={'j','e','s','u','s','\0'};
    cout<<arr<<endl;
    for (int i = 0; arr[i]!='\0'; i++)
    {
    arr[i]-=32;
    }
    cout<<arr;
    
    return 0;
}