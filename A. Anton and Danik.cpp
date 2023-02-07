#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    int l,i,x=0,y=0,z;
    cin>>z;
    for(i=0;i<z;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<z;i++)
    {
        if(a[i]=='A')
        {
            x++;

        }
        else if(a[i]=='D')
        {
            y++;
        }
    }
    if(x>y)cout<<"Anton"<<endl;
    else if(y>x)cout<<"Danik"<<endl;
    else if(x==y)cout<<"Friendship"<<endl;
}
