#include <bits/stdc++.h>

using namespace std;

ifstream f("sortcif.in");
ofstream g("sortcif.out");

int v[100],suma[100]={0},n,c;

int main()
{
    f>>n;
    for(int i=0;i<n;i++){
        f>>v[i];
        c=v[i];
        while(c!=0){
            suma[i]=suma[i]+c%10;
            c/=10;
        }
    }
    for(int i=1;i<n;i++)
    {
        int x=v[i];
        int y=suma[i];
        int p=i-1;
        while(p>=0 && suma[p]>y){
                suma[p+1]=suma[p];
                v[p+1]=v[p];
                p--;
        }
        suma[p+1]=y;
        v[p+1]=x;

    }
    for(int i=0;i<n;i++)
        g<<v[i]<<" ";
}
