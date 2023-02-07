#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string a,b;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++)
        {
           if(a[i]=='B')
           {
               a[i]='G';
           }
        }
        for(int j=0;j<n;j++)
        {
           if(b[j]=='B')
           {
               b[j]='G';
           }
        }
        if(a==b)cout<<"YES"<<endl;
        if(a!=b)cout<<"NO"<<endl;
    }
}
