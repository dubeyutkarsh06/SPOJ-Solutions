#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define str string
#define ios ios_base::sync_with_stdio(0);
using namespace std;
#define ll long long int
int main()
{
    ios
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        ll a=str.at(str.length()-1)-48;
        ll b;
        cin>>b;
        if(b==0)
            cout<<"1"<<endl;
        else
        {
            ll val=1;
            ll rp=b%4;
            if(rp==0)
                val=a*a*a*a;
            else
            {
                while(rp--)
                    val*=a;
            }
            cout<<val%10<<endl;
        }
    }
}
