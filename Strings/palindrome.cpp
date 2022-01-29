#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr="happah";
    int i;
    int j=arr.size()-1;
    string str=arr;
    for (i = 0; i < j; i++,j--)
    {
        char temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    if(arr==str)
    cout<<"True";
    else
    cout<<"False";
    return 0;
}