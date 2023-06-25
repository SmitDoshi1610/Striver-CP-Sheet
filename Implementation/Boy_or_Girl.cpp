#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   string str;
   cin>>str;
   set<char>s;
   int n = str.length();
   for(int i=0;i<n;i++)
   {
         s.insert(str[i]);
   }
   if(s.size()%2==0)
      cout<<"CHAT WITH HER!\n";
   else
      cout<<"IGNORE HIM!\n";

   return 0;
}
