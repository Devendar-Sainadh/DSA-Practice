#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    char arr[]={'J','E','S','U','S','\0'};
    //cout<<arr;
    int i;
    int count=0;
    for (int i = 0; arr[i]!='\0'; i++)
    {
    count++;
    }
    cout<<count;
    
    return 0;
}
