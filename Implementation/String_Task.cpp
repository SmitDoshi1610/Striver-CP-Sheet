#include<bits/stdc++.h>
using namespace std;
bool isVowels(char c)
{
   if(c=='a'||c=='e'||c=='i'|| c=='o'||c=='u'||c=='y')
      return false;
   else if(c=='A'||c=='E'||c=='I'|| c=='O'||c=='U'||c=='Y')
      return false;
   return true;
}
int main()
{
    string str,s="";
    cin>>str;
    int n = str.length();
    for(int i=0;i<n;i++)
    {
       if(isVowels(str[i]))
       {
          if(str[i]>='A' and str[i]<='Z')
          {
            s = s +".";
            str[i] = str[i]+32;
            s+=str[i];
          }
          else
          {
            s = s +".";
            s+=str[i];
          }
       }
    }
    cout<<s<<endl;
}
