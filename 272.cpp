#include <bits/stdc++.h>

using namespace std;

ifstream f("paresort.in");
ofstream g("paresort.out");

int v[100],z=-1,i,n,c;

int main()
{
    f>>n;
       for(i=0; i<n; i++){
        f>>c;
        if(c%2==0){
        z++;
        v[z]=c;
       }
       }
    for(i=0; i<=z; i++)
        g<<v[i]<<" ";
    g<<endl;
    for(int j=0; j<=z; j++)
    {
        int x=v[j];
        int p=j-1;
        while(p>=0&&v[p]>x)
        {
            v[p+1]=v[p];
            p--;
        }
        v[p+1]=x;
    }
    for(i=0; i<=z; i++)
        g<<v[i]<<" ";

    return 0;
}
