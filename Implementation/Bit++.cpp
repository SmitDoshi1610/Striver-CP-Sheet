#include<iostream>
using namespace std;
int main()
{
   
      int n;
      cin>>n;
      int x=0;
      while(n--)
      {
        string str;
        cin>>str;
        if(str[0]=='+')
        {
            ++x;
        }
        else if(str[2]=='+')
        {
          x++;
        }
        else if(str[0]=='-')
        {
          --x;
        }
        else if(str[2]=='-')
        {
          x--;
        }
      }
      cout<<x<<endl;
      x = 0;
   return 0;
}
