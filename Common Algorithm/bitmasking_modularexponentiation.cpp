#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll power(ll a,ll n)
{
    ll c=0;
    ll ans=1;
    while(n>0)
    {
        c++;
        ans=ans%1000000007;
        if(n&1==1) //getting the last bit
            ans=(ans*a)%1000000007;

        a=(a*a)%1000000007;
        n=n>>1;  //shifting or killing the previous bit

    }
    cout<<"complexity "<<c<<endl;
    return ans;

}
int main()
{
    cout<<power(5,1000000);
    return 0;
}
