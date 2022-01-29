#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr="happah";
    int i;
    int n=arr.size();
    int H[26]={0};
    for (i = 0; i < n; i++)
    {
        H[arr[i]-97]+=1;
    }
    for (i= 0; i < 26; i++)
    {
        if(H[i]>1){
            cout<<char(i+97)<<" is duplicate"<<endl;
        }
    }
    return 0;
}