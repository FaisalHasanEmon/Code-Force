#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b="hello";
    int i,j=0,f=0;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==b[j] and f<6)
        {
            f++;
            j++;
        }
    }
    (f==5)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
