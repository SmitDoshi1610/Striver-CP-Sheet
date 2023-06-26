#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 1e5;
int main()
{
   string st;
   cin>>st;
   bool flag = false;
   for(int i=0;i<5;i++)
   {
      string str;
      cin>>str;
      if(str[1]==st[1] or str[0]==st[0])
      {
         flag = true;
      }
   }
   if(flag)
      cout<<"YES\n";
   else
      cout<<"NO\n";
   return 0;
}
