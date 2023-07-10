#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool case1(string str)
{
   ll count = 0;
   for(int i=1;i<str.length();i++)
   {
      if(str[i]>='A' && str[i]<='Z')
         count++;
   }
   if(count==str.length()-1 && (str[0]>='a' && str[0]<='z'))
      return true;
   return false;
}
bool case2(string str)
{
   ll count = 0;
   for(int i=0;i<str.length();i++)
   {
      if(str[i]>='A' && str[i]<='Z')
         count++;
   }
   if(count==str.length())
      return true;
   return false;
}
int main() {
   
   string str;
   cin>>str;
   bool ans1 = case1(str);
   bool ans2 = case2(str);
   if(ans2 || ans1)
   {
      for(ll i=0;i<str.length();i++)
      {
         if(str[i]>='A' && str[i]<='Z')
         {
            str[i] = str[i] + 32;
         }
         else
         {
            str[i] = str[i] - 32;
         }
      }
      for(auto it : str)
         cout<<it;
   }
   else
   {
      for(auto it : str)
         cout<<it;
   }
   return 0;
}
