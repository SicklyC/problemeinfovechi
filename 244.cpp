#include <bits/stdc++.h>
using namespace std;
int v[100000],n;
ifstream f("cifreord.in");
ofstream g("cifreord.out");
int main()
{
    f>>n;
    for(int i=0;i<n;i++)
        f>>v[i];
    sort(v, v + n);
    for(int i=0;i<n;i++){
        if(i%20==0&&i!=0){
        g<<endl;
        }
        g<<v[i]<<" ";
    }
    f.close();
    g.close();

}
