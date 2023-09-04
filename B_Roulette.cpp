#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define pb push_back
#define un unordered_map<int,int>
#define all(x) (x).begin(), (x).end()
ll gcd(ll a, ll b) { return((b == 0) ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return (b / gcd(a, b)) * a; }
#define vec vector<int>
#define vll vector<long long>
#define str string
#define form(i,n) for(int i = 0; i < n; i++)
#define si(x) (x).size()
const ll mod = 1e9+7;



int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0) ;
  vector<vec> ds;
  int test_case;
  cin>>test_case;
  while(test_case--){
    int n;
    cin>>n;
    vec v(n);
    form(i,n)cin>>v[i];
    ds.pb(v);
  }
  int x;
  cin>>x;
  vector<pair<int,int> > b;
  vec ans;
  form(i,si(ds)){
    form(j,ds[i].size()){
      if(ds[i][j]==x){
        b.pb({i,ds[i].size()});
        break;
      }
    }
  }
  int mini=INT_MAX;
  form(i,si(b)){
    int temp=b[i].second;
    mini=min(mini,temp);
  }
  // cout<<mini<<endl;
  int count=0;
  form(i,si(b)){
    if(b[i].second==mini) {
      count++;
      // cout<<b[i].first+1<<" ";
    }
  }
  cout<<count<<endl;
  form(i,si(b)){
    if(b[i].second==mini) {
      // count++;
      cout<<b[i].first+1<<" ";
    }
  }
  cout<<endl;

  

  return 0;
}