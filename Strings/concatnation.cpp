
//string concatenation without using builtin functions
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    string str1;
    cin>>str1;

    
    int n=str.length();
    int m=str1.length();

    string str2;
    for(int i=0;i<n;i++)
    {
        str2=str2+str[i];
    }

    for(int i=0;i<m;i++)
    {
        str2=str2+str1[i];
    }

    cout<<str2<<endl;
}
