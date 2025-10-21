/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int v[1000],n,m;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        m=9;
        while(v[i]!=0)
        {
            if(m>v[i]%10)
                m=v[i]%10;
            v[i]=v[i]/10;
        }
        v[i]=m;
    }
    bool sortat;
    do
    {
        sortat=true;
        for(int i=1; i<n-1; i++)
        {
            if(v[i]>v[i+1]){
            swap(v[i],v[i+1]);
            sortat=false;
            }
        }
    }
    while(sortat==false);
    if(v[0]==0)
    {
        for(int i=1; i<n; i++)
            if(v[i]!=0){
            swap(v[i],v[0]);
            break;
    }
    }
    for(int i=0; i<n; i++)
        cout<<v[i];

    return 0;
}
