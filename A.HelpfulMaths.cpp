#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j;
    cin>>a;
    for(i=0;i<a.size();i+=2)
    {
        for(j=0;j<a.size()-1;j+=2)
        {
            if(a[j]>a[j+2])
            {
                swap(a[j],a[j+2]);
            }
        }
    }
    cout<<a;
}

