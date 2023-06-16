//Code By : Smit Doshi
#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
   int n,k,l,c,d,p,nl,np;
   cin >> n >> k >> l >> c >> d >> p >> nl >> np;
   int drink = k*l;
   int toast = drink/nl;
   int lime = d*c;
   int salt = p/np;

   cout<<min(toast,min(lime,salt))/n<<endl;

   return 0;

}
