#include <bits/stdc++.h>
using namespace std;
int u[10],n,maxim=0;
ifstream f("maxcif.in");
ofstream g("maxcif.out");
int main()
{
    while(f>>n)
    {
        u[n]++;
    }
    for(int i=0; i<10; i++)
        if(u[i]>maxim) maxim=u[i];
    for(int i=0; i<10; i++)
        if(u[i]==maxim)
            g<<i<<" ";

    return 0;
}
