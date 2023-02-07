#include<iostream>
using namespace std;
int main()
{
    string a;
    int i;
    bool ABC=1;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='W' and a[i+1]=='U' and a[i+2]=='B')
        {
            i+=2;
            if(!ABC)cout<<" ";
            continue;
        }
        else
        {
            ABC=0;
            cout<<a[i];
        }
    }
}


