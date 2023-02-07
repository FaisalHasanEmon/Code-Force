#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count = 0 ;
    cin>>a>>b;
    while(a!=0 and b!=0)
    {
        a-=1;
        b-=1;
        count+=1;
    }
    int s = (a+b)/2;
    cout<<count<<" "<<s<<endl;
}