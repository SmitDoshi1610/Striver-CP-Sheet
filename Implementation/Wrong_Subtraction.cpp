//Code By : Smit Doshi
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   cin>>n>>k;
   while(k>=1)
   {
     if(n%10!=0)
     {
       n=n-1;
     }
     else
     {
       n/=10;
     }
     k--;
   }
   cout<<n<<endl;
   return 0;
}
