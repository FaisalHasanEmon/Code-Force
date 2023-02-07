
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int> v;
    v.push_back(1);
    v.push_back(2);
    for(int i = 3; i <= 1e6 ;i++)
    {
        if(i%3==0 or i%10==3)continue;
        else v.push_back(i);
    }

    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        cout<<v[n-1]<<endl;
    }

}
