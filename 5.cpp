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

void printF(int ind,vec &v,int arr[],int n){
  if(ind==n){
    for(int i=0;i<si(v);i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
  }
  v.pb(arr[ind]);
  printF(ind+1,v,arr,n);
  v.pop_back();
  printF(ind+1,v,arr,n);
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0) ;
  int n=3;
  int arr[]={3,1,2};
  vec v;
  printF(0,v,arr,n);
  return 0;
}