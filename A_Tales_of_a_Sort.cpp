// Ankan Dutta
// 2112087
 
 
#include <bits/stdc++.h>
using namespace std;
void init_code(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}
 
 
 
// ⠁⠁⠁⠁⠁⠁⠐⢶⣶⣶⣶⣤⣤⡀⠁⠁⣠⣀⣀⠁⠁⠁⠁⠁⠁⠁⠁⠁⠁⠁
// ⠁⠁⠁⠁⠁⠁⠁⠁⠙⢿⣯⣠⣶⣦⣤⣤⣌⣛⠻⢇⣠⣤⣤⠁⠁⠁⠁⠁⠁⠁
// ⠁⠁⠁⠁⠁⠁⠁⠁⠁⠁⠻⣿⣿⣿⡟⢉⡤⢤⣤⣤⡍⠛⢡⢖⣥⣶⣦⣀⠁⠁
// ⠁⠁⠁⠁⠁⠁⠁⠁⠁⠁⣠⣿⣿⣿⡏⣭⣶⣿⣿⠟⢿⣦⡡⣿⣿⡇⠁⡙⣷⡀
// ⠁⠁⠁⠁⠁⠁⠁⣀⣴⣿⣿⣿⣿⣿⣿⡞⣿⣿⡟⢀⡀⣿⣿⢻⣿⣿⣀⣁⣿⠏
// ⠁⠁⠁⢀⣠⣶⣿⣿⣿⣿⣿⣿⣿⣿⣟⢰⢻⣿⣇⣈⣴⣿⠟⢨⣛⠛⠛⠉⠁⠁
// ⠁⣠⣶⣿⣿⡟⢋⠤⣤⠘⢿⣿⣧⡙⠻⠌⠒⠙⠛⢛⣫⣥⣿⣦⡈⠉⣡⣴⣾⠇
// ⢰⣿⣿⣿⣿⠁⡇⠁⠙⠷⣤⡙⠻⢿⣿⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⠿⠟⠋⠁⠁
// ⠘⣿⣿⣿⣿⣆⠻⣄⠁⣀⡀⠉⠙⠒⠂⠉⠍⠉⠉⠉⠉⣩⣍⣁⣂⡈⠠⠂⠁⠁
// ⠁⠘⢿⣿⣿⣿⣦⡉⠳⢬⣛⠷⢦⡄⠁⠁⠁⠁⠁⣀⣼⣿⣿⠿⠛⠋⠁⠁⠁⠁
// ⠁⠁⠁⠉⠻⢿⣿⣿⣷⣦⣬⣍⣓⡒⠒⣒⣂⣠⡬⠽⠓⠂⠁⠁⠁⠁⠁⠁
 
 
//<---------------------Definitions-------------------->
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
// #define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define read(x) int x; cin >> x
 
 
//<---------------------Functions-------------------->
 
 
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void SieveOfEratosthenes(int n){
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++){
        if (prime[p]){
            printf("%d ",p);
        }
    }
 
}
void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int64_t sqrt_i64(int64_t v) {
    uint64_t q = 0, b = 1, r = v;
    for( b <<= 62; b > 0 && b > r; b >>= 2);
    while( b > 0 ) {
        uint64_t t = q + b;
        q >>= 1;           
        if( r >= t ) {     
            r -= t;        
            q += b;        
        }
        b >>= 2;
    }
    return q;
}
ll llmin(ll a, ll b){if(a < b){return a;}else{return b;}}
ll llmax(ll a, ll b){if(a > b){return a;}else{return b;}}
 
// 				  _oo0oo_ 
//               o8888888o 
//               88" . "88 
//               (| -_- |) 
//               0\  =  /0 
//             ___/`---'\___ 
//           .' \\|     |// '. 
//          / \\|||  :  |||// \ 
//         / _||||| -:- |||||- \ 
//        |   | \\\  -  /// |   | 
//        | \_|  ''\---/''  |_/ | 
//        \  .-\__  '-'  ___/-. / 
//      ___'. .'  /--.--\  `. .'___ 
//   ."" '<  `.___\_<|>_/___.' >' "". 
//  | | :  `- \`.;`\ _ /`;.`/ - ` : | | 
//  \  \ `_.   \_ __\ /__ _/   .-` /  / 
// =====`-.____`.___ \_____/___.-`___.-'===== 
//                `=---=' 

 
int main(){
	init_code();
	read(T);
	while(T--){
		ll n, maxm = 0;
		cin>>n;
		vector<ll>v(n);
		for(ll i =0;i<n;i++){
			cin>>v[i];
		}
		for(ll i = n - 2;i>=0;i--){
			if(v[i] > v[i + 1]){
				maxm = llmax(v[i], maxm);
			}
		}
		cout<<maxm<<endl;
	}
}