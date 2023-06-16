//Code By : Smit Doshi
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a[5][5],b,c;
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                b=i+1;c=j+1;
            }
              
        }
    }
    cout<<abs(b-3)+abs(c-3)<<"\n";
}
