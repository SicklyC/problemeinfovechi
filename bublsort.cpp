#include <iostream>

using namespace std;
int v[1000],n;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    bool sortat;
    do
    {
        sortat=true;
        for(int i=0; i<n-1; i++)
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
    {
        cout<<v[i]<<" ";
    }
}

