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
   int n = str.length();
   if(n == 1)
   {
      cout << str;
      return;
   }
   vector<char>v;
   for(int i=0; i<n; i+=2)
   {
      v.push_back(str[i]);
   }
   sort(v.begin(), v.end());
   string temp;
   for(int i=0; i<v.size(); i++)
   {
      temp.push_back(v[i]);
      temp.push_back('+');
   }
   temp.pop_back();
   cout << temp;
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
