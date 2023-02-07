#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=1;
    string s,pd;
    cin>>s;
    pd=s[1]-s[0];
    for(int i=2;i<s.length();i++)
    {
        if(pd==s[i])
        {
            c++;
        }
        else if(pd!=s[i])
        {
            c=1;
            pd=s[i+1]-s[i];
        }
        cout<<c<<endl;
    }

}
