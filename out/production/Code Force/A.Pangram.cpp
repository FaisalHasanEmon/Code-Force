#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,count=0;
    string str;
    cin>>a;
    cin>>str;
    for(int i=0;i<a;i++)
    {
        str[i]=towlower(str[i]);
    }
    sort(str.begin(),str.end());
    for(int i=0;i<a;i++)
    {
        if(str[i]!=str[i+1])
        {
            count++;
        }
    }
    (count==26)?cout<<"YES"<<endl:cout<<"NO"<<endl;

}
