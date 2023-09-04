#include <bits/stdc++.h>
using ll = unsigned long long;
using namespace std;

void solve()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = 0;
    for(int i = 1; i < n; i++){
        maxi = max(maxi, a[i]);
    }
    if(a[0] > maxi){
        cout << 0;
    } else {
        cout << maxi-a[0]+1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
