#include <iostream>

using namespace std;
int n,v[1000];
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int m=n/2;
    bool ok=true;
    do{
        ok=true;
           for(int i=0; i<m-1; i++)
        {
            if(v[i]>v[i+1])
            {
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                ok=false;
            }
        }
    }
    while(ok==false);
    do
    {
        ok=true;
           for(int i=m; i<n-1; i++)
        {
            if(v[i]<v[i+1])
            {
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                ok=false;
            }
        }
    }
    while(ok==false);
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
