#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr="happah";
    int i;
    int n=arr.size();
    char ld;
    
    for (i = 0; i < n-1; i++)
    {
        int count=1;
        if(arr[i]!=-1){
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j]){
                count++;
                 arr[j]=-1;
            }
        }
        }
        if(count>1)
        cout<<arr[i]<<" is duplicated "<<count<<" times."<<endl;
        
    }
    return 0;
}