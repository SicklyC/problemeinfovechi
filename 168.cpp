#include <bits/stdc++.h>

using namespace std;

ifstream f("halfsort2.in");
ofstream g("halfsort2.out");

int n,v[100];
int main()
{
    f>>n;
    for(int i=0;i<n;i++)
        f>>v[i];
    for(int i=2;i<n;i+=2){
            int x=v[i];
            int p=i-2;
            while(p>=0&&v[p]>x){
                v[p+1]=v[p];
                p-=2;
            }
            v[p+2]=x;
    }
    for(int i=1;i<n;i+=2){
            int x=v[i];
            int p=i-2;
            while(p>=0&&v[p]<x){
                v[p+1]=v[p];
                p-=2;
            }
            v[p+2]=x;
    }
    for(int i=0;i<n;i++)
        g<<v[i]<<" ";

    return 0;
}
