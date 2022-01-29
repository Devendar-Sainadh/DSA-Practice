#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr="happy";
    int i;
    int j=arr.size()-1;
    for (i = 0; i < j; i++,j--)
    {
        char temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<arr;
    return 0;
}