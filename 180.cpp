#include <iostream>

using namespace std;
int n,v[1000],z,u[1000],minim=99999999,maxim=-999999999;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]<minim)
        {
            minim=v[i];
        }
        if(v[i]>maxim)
        {
            maxim=v[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(v[i]<=       maxim&&v[i]>=minim)
            u[z]=v[i];
        z++;
    }
    bool sortat;
    do
    {
        sortat = true;
        for(int i = 0 ; i < z - 1 ; i ++)
            if(u[i] > u[i+1])
            {
                int aux = u[i];
                u[i] = u[i+1];
                u[i+1] = aux;
                sortat = false;
            }
    }
    while(!sortat);
    for(int i=0; i<z; i++)
        cout<<u[i]<<" ";
}
