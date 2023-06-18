// Code By : Smit Doshi
#include <bits/stdc++.h>
using namespace std;
#define MOD 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INPUT(a, n) for (ll i=0; i<n; i++) cin >> a[i];
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

void smit()
{
   string s; cin >> s;
   
   ll count = 0;
   for(char c: s) if(c == '4' || c == '7') count++;
   
   if(!count){
      cout << "NO" << endl;
      return;
   }
 
   while(count > 0){
      ll d = count % 10;
      if(d != 4 && d != 7){
         cout << "NO" << endl;
         return;
      }
      count /= 10;
   }
   
   cout << "YES" << endl;
}

int main()
{
      
      // int t;
      // cin >> t;
      // while(t--)
      // {
      //    smit();
      // }
   smit();   
      return 0;
}
