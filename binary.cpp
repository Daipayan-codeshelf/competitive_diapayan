#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void printSubstrings(string str,int &ans,float xy)
{
    int z=0,o=0;
        string subStr;
    for (int j = 0; j < str.length(); j++) {
        // Second loop is generating sub-string
        
            subStr += str[j];
            if(str[j]=='0') z++;
            else if(str[j]=='1') o++;
            float rat = (float)z/(float)o;
            //cout<<rat;
            if(rat==xy) ans++;
            //ans.insert(subStr);
            // cout << subStr << endl;
        
    }
}


int main() {
    int n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    int ans=0;
    int ret=0;
    float xy = (float)x/(float)y;
    // cout<<xy<<" ";
    printSubstrings(s,ans,xy);
    cout<<ans<<endl;
    // for(auto i:ans){
    //   cout<<i<<endl;
    // }
    // for(int i=0;i<ans.size();i++){
    //     int count0=0;
    //     int count1=0;
    //     for(int j=0;j<ans.size();j++){
    //         if(ans[i][j]=='0') count0++;
    //         else count1++;
    //     }
    //     // cout<<count0<<" "<<count1<<" ";
    //     if((count0/count1)==(x/y)) ret++;
    // }
    // cout<<ret<<endl;
    return 0;
}