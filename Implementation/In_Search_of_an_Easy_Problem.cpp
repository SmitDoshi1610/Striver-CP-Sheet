//Code By : Smit Doshi
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
   int n;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
      int x;
      cin>>x;
      v.push_back(x);
   }
   if(count(v.begin(),v.end(),1)>=1)
   cout<<"HARD\n";
   else
   cout<<"EASY\n";
   return 0;
}
 
