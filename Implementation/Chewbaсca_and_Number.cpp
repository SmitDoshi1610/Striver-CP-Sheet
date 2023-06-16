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
   string str;
   cin >> str;

   for(int i=0; i<str.length(); i++)
   {
      int digit = str[i] - '0';
      if(i == 0 and (digit >= 5 and digit <= 8))
      {
             str[i] = '9' - digit;
      }
      else if(digit >= 5 and i > 0)
      {
          str[i] = '9' - digit;
      }
   }
   cout << str;
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
