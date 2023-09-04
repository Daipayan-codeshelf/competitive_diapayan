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

bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                if(st.empty()) return false;
                else if(s[i]==')' && st.top()!='(') return false;
                else st.pop();
            }
        }
        return st.empty()?1:0;
    }

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0) ;
  int test_case;
  cin>>test_case;
  while(test_case--){
    str s;
    cin>>s;
    int n=s.size();
    // string ans="";
    
    string b = "";

  form(i,n)
   b += "()";
    bool flag=isValid(s);
    if(flag) cout<<"NO"<<endl;
    
    else{
      string a = string(n, '(') + string(n, ')');
      string b = "";

  form(i,n)
   b += "()";
      cout<<"YES"<<endl;
      if (a.find(s) == string::npos)
      {
        cout << a << endl;
      }
      else
      {
        cout << b << endl;
      }
      // cout<<ans<<endl;
    }
  }
  return 0;
}