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
int N = 1e9 + 7;
vector<string>preCompute;
void smit()
{
   int val;
   cin >> val;
   string x = to_string(val);
   int index = lower_bound(preCompute.begin(), preCompute.end(), x) - preCompute.begin();

   int cnt = 0;
   for(int i=0; i<=index; i++)
   {
      string t = preCompute[i];
      int len = t.length();
      cnt = cnt + len;
   }
   cout << cnt << endl;
}

int main()
{
      for(int i=1; i<=9; i++)
      {
         string ronak = to_string(i);
         string temp;
         for(int j=1; j<=4; j++)
         {
            temp += ronak;
            preCompute.push_back(temp);
         }
      }
      int t;
      cin >> t;
      while(t--)
      {

         smit(); 
      }  
      return 0;
}
