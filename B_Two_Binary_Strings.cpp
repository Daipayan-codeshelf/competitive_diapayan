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
  int test_case;
  cin>>test_case;
  while(test_case--){
  string s1,s2;
  cin>>s1>>s2;
        if(s1[0]==s1[s1.size()-1] &&s2[0]==s2[s1.size()-1]&&s1[0]==s2[0])
        { 
          cout<<"YES"<<endl;
          continue;
        }
        bool flag=0;
        int i=0;
        while(i<s1.size()-1){
          if(s1[i]==s1[0]&&s2[i]==s1[0]){
            if(s1[i+1]==s2[i+1] && s1[i+1]==s1[s1.size()-1]) flag=1;
          } 
          i++;
        };
        cout<<(!flag?"NO":"YES")<<endl;


  }
  return 0;
}