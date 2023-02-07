#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int c=0,d=0;
    for(int i=1;i<a.size();i++)
    {
        if(islower(a[i]))
        {
            c++;
        }
    }
    for(int i=0;i<a.size();i++)
    {
        if(isupper(a[i]))
        {
            d++;
        }
    }
    if(islower(a[0]) and c==0)
       {
           a[0]=toupper(a[0]);
           for(int i=1;i<a.size();i++)
            {
                a[i]=tolower(a[i]);
            }
            cout<<a<<endl;
       }
    else if(d==a.size())
    {
           for(int i=0;i<a.size();i++)
            {
                a[i]=tolower(a[i]);
            }
            cout<<a<<endl;
    }
    else
    {
        cout<<a<<endl;
    }
}
