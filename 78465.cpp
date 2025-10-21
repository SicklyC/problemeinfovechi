#include <iostream>

using namespace std;
int v[1000],k,n;
int main()
{
    cin>>n>>k;
    for(int i=0; i<n; i++)
        cin>>v[i];
    bool ok=true;
    do
    {
    ok=true;
    for(int i=0; i<k-1; i++)
    if(v[i]>v[i+1])
        {
        int aux=v[i];
        v[i]=v[i+1];
        v[i+1]=aux;
        ok=false;
        }
    }
    while(ok==false);

    do
    {
    ok=true;
    for(int i=k; i<n; i++)
        if(v[i]<v[i+1])
        {
        int aux=v[i];
        v[i]=v[i+1];
        v[i+1]=aux;
        ok=false;
        }

    }
    while(ok==false);

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    return 0;
}
