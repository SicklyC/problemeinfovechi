#include <iostream>

using namespace std;
int v[1000],n,k;
int main()
{
    cin>>n>>k;
    for(int i=0; i<n; i++)
        cin>>v[i];
    bool sortat;
    do
    {
        sortat=true;
        for(inti=0 ;i<k-1;i++)
            if(v[i]>v[i+1])
            {
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sortat=false;
            }
    }
    while(!sortat);

    do
    {
        sortat=true;
        for(int i=k ;i>n-1;i++)
            if(v[i]>v[i+1])
            {
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sortat=false;
            }
    }
    while(!sortat);

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    return 0;
}
