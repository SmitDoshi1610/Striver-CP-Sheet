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
   int n;
   cin >> n;
   vector<int>v(n, 0);
   for(int i=0; i<n; i++)
      cin >> v[i];
   
   int maxi = v[0];
   int mini = v[0];
   int indexMin = 0;
   int indexMax = 0;
   for(int i=1; i<n; i++)
   {
      if(v[i] > maxi)
      {
         maxi = v[i];
         indexMax = i;
      }
   }
   for(int i=1; i<n; i++)
   {
      if(v[i] <= mini)
      {
         mini = v[i];
         indexMin = i;
      }
   }
   if(indexMin < indexMax)
   {
       indexMin = (n - 1) - indexMin;
      cout << indexMin + indexMax - 1;
   }
     
   else
     {
       indexMin = (n - 1) - indexMin;
      cout << indexMin + indexMax;
     }
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
