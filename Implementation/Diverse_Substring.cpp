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
// ll N = 1000000;
void smit()
{
   int n;
   cin >> n;
   string str;
   cin >> str;
   for(int i=1; i<n; i++)
   {
      if(str[i] != str[i-1])
      {
         cout << "YES\n";
         cout << str[i-1] <<str[i] << endl;
         return;
      }
   }
   cout << "NO\n";
   
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
