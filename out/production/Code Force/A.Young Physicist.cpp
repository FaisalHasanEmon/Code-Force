#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    int xsum(0),ysum(0),zsum(0);
    int n;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        xsum+=x;
        ysum+=y;
        zsum+=z;
    }
    if(xsum==0 and ysum==0 and  zsum==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
