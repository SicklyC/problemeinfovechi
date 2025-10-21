#include <bits/stdc++.h>

using namespace std;

ifstream f("sort2.in");
ofstream g("sort2.out");

int v[100],n,z=0,c=0;

int main()
{
    while(f>>n){
        v[z]=n;
        z++;
    }
    for(int i=1;i<z;i++){
        int x=v[i];
        int p=i-1;
        while(p>=0&&v[p]>x){
            v[p+1]=v[p];
            p--;
        }
        v[p+1]=x;
    }
    for(int i=0;i<z;i++){
        if(v[i]<100){
            g<<v[i]<<" ";
            c++;
    }
    if(c==0)
        g<<"NU EXISTA";
    }
}
