// Code by : Smit Doshi
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        int n = s.length();
        
        int flag=-1;
        int ans=0;
        
        for(int i=0;i<(n-1);i++){
            if(s[i]=='0'&&s[i+1]=='1'){
                if(flag>=0)
                ans+=i-flag;
            }
            else if(s[i]=='1'&&s[i+1]=='0'){
                flag=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
