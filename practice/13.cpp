#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tests;
    cin>>tests;
    while(tests--)
    {
        int n,res=0;
        cin>>n;
        for(int i=1;i<=n;i=i*10+1)
        {
            for(int j=1;j<=9;j++)
            {
                if(j*i<=n)
                {
                    res++;
                }
            }
        }
        cout<<res<<endl;

    }
}