#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    int wr;
    cin>>n>>k;
    for(i=0;i<k;i++)
    {
        if(n%10==0)
        {
            wr=n/10;
            wr=n-1;
        }
        else
        {
            wr=n-1;
            wr=n/10;
        }
    }
    cout<<wr<<endl;
}
