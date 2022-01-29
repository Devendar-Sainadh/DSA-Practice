#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[] = "Hi How are you";
    int vcount, ccount;
    vcount = ccount = 0;
    for (int i = 0; arr[i]!= '\0'; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U'){
            vcount++;
        }
        else if((arr[i]>='a' && arr[i]<='z') || (arr[i]>='A' && arr[i]<='Z')){
            ccount++;
            
        }
    }
    cout<<"vowels= "<<vcount<<endl;
    cout<<"consonants= "<<ccount;

    return 0;
}