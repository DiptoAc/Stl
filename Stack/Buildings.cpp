#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;
template <typename T>
using oset = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
//mt19937 rng(chrono::system_clock::now().time_since_epoch().count());
//uniform_int_distribution<int> random(1, 1000000);
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ok cout<<"ok"<<endl<<flush;
#define endl '\n'
#define INF 1e16
const ll M =1e9+7;
const ll N =2e5+1;
void debug(vector<ll>&v){for(auto it:v){cout<<it<<" ";}cout<<endl;}
ll n,m;
int32_t main()
{
    fast
    ll i,j=1,k=1,p,q,tc=1,cs=0;//cin>>tc;
    while(tc--)
    {
        stack<ll>st;
        cin>>n;
        vector<ll>v(n),ans;
        for(auto &it:v){cin>>it;}
        reverse(v.begin(),v.end());
        for(auto it:v)
        {
            ans.pb(st.size());
            while(st.size() && st.top()<it){st.pop();}
            st.push(it);
        }
        reverse(ans.begin(),ans.end());
        debug(ans);
    }
}
//https://atcoder.jp/contests/abc372/tasks/abc372_d
