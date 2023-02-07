#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int i;
    for(int i=0; i<a.size() ;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            a[i]+=32;
    }
    for(int i=0; i<a.size() ;i++)
    {
        if(b[i]>='A' && b[i]<='Z')
            b[i]+=32;
    }
    int x=a.compare(b);
    if(x==0)cout<<"0"<<endl;
    else if(x<0)cout<<"-1"<<endl;
    else cout<<"1"<<endl;
}
