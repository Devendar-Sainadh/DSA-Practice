#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x=3;
    int j=n-1;
    while(arr[j]>x){
         arr[j+1]=arr[j];
         j--;
    }
    arr[j+1]=x;
     for (int i = 0; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}