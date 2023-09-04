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




struct Result{
  Result():output1(){};
  int output1[10000];
};


Result Find_postOrder(int input1,int input2[],int input3[]){
  Result v;
  printPostOrder(input2,input3,input1,v,0);
  return v;
}

int search(int arr[], int x, int n){
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
void printPostOrder(int in[], int pre[], int n,Result v,int k)
{
    int root = search(in, pre[0], n);
    if (root != 0)
        printPostOrder(in, pre + 1, root,v,k+1);
    if (root != n - 1)
        printPostOrder(in + root + 1, pre + root + 1, n - root - 1,v,k+1);
    v[k]=pre[0];
}



int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0) ;
  int n;
  cin>>n;
  Result arr1;
  Result arr2;
  Result ans=Find_postOrder(arr1,arr2,n);
  // for(int i=0;i<n;i++){
  //   cout<<ans[i];
  // }
  return 0;
}