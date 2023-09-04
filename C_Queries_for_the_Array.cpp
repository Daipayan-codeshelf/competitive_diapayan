#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define pb push_back
#define un unordered_map<int,int>
#define all(x) (x).begin(), (x).end()
ll gcd(ll a, ll b) { return((b == 0) ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return (b / gcd(a, b)) * a; }
// #define vec vector<int>
#define vll vector<long long>
#define str string
#define form(i,n) for(int i = 0; i < n; i++)
#define si(x) (x).size()
const ll mod = 1e9+7;



bool checkerfunc(vector<int>nums){
  int n = nums.size();

  for(int i = 1; i<n; i++){
    if(nums[i-1] > nums[i]){
      return false;
    }
  }

  return true;
}
int main() {
    // init_code();
    int t;
    // IN(t);
    while(t--){
      vector<vector<char>> vec;
      string s ;
      cin>>s; 
      // IN(s);
      int n = s.size();
      vector<char>temp;
      form(i,n){
        if(s[i] == '1' or s[i] == '0'){
          temp.push_back(s[i]);
          vec.push_back(temp);
          temp.clear();
        }
        else{
          temp.push_back(s[i]);
        }
      }
      vector<int>returnarr;
      bool flag = true;


      for(auto it : vec){
        int n = it.size();
        char c = it[n-1];

        if(c == '1'){
          for(int i = 0; i<n-1; i++){
            if(s[i] == '+'){
              if(flag){
                returnarr.push_back(1);
                flag = false;
              }
              else{
                int t = returnarr.back();
                returnarr.push_back(t+1);
              }
            }
            else{
              returnarr.pop_back();
            }
          }
          
        }
        else{
          for(int i = 0; i<n-1; i++){
            if(s[i] == '+'){
              if(flag){
                returnarr.push_back(1);
                flag = false;
              }
              else{
                int t = returnarr.back();
                returnarr.push_back(t-1);
              }
            }
            else{
              returnarr.pop_back();
            }
          }

        }
      }

      int v = vec.size();
      auto k = vec[v-1];
      int l = k.size();

      char m = k[l-1];
      cout<<m;

        bool answer = checkerfunc(returnarr);

        if((!answer && m=='0') || (answer && m=='1') ){
          cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }
    }    
}