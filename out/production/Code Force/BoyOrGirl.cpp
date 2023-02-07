//#include<iostream>
//#include<string>
//#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,count=0;
    cin>>a;
    sort(a.begin(),a.end());

    for(i=0;i<a.size();i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
