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
  int n;
  cin>>n;
  string s="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
  cout<<(s.substr(0,n+2));
  return 0;
}