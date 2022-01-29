#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[] = "Hi How  are you";
    int word=1;
    for (int i = 0; arr[i]!= '\0'; i++)
    {
      if(arr[i]==' ' && arr[i-1]!=' '){
          word++;
      }
    }
    cout<<"No of Words= "<<word;

    return 0;
}