#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string a,string b){
    int H[26]={0};
    int i;
    if(a.size()!=b.size()){
        cout<<"Not a Anagram";
    }
else{
    for ( i = 0; i < a.size(); i++)
    {
        H[a[i]-97]+=1;
    }
     for ( i = 0; i < b.size(); i++)
    {
        H[b[i]-97]-=1;
    }
    for ( i = 0; i < 26; i++)
    {
          if(H[i]<0){
            return false;
        }
    }
   return true; 
}
}   
int main()
{
    string a="decimal";
    string b="medical";
   
     if(isAnagram(a,b)){
         cout<<"Anagram";
     }
     else{
         cout<<"Not a Anagram";
     }
    return 0;
}