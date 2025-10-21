#include <iostream>
int n,v[10000],u[10000],z;
    using namespace std;

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        int x=v[i];
        bool este_prim=true;
        if (x<2)
        {
            este_prim=false;
        }
        else if(x==2)
        {
            este_prim=true;
        }
        else if (x%2==0)
        {
            este_prim=false;
        }
        else
        {
            for(int d=3; d*d<=x; d+=2)
            {
                if (x%d==0)
                {
                    este_prim=false;
                    break;
                }
            }
        }
        if(este_prim==true)
        {
            {
                u[z]=x;
                z++;
            }
        }

    }
    bool sortat;
    do
    {
        sortat=true;
        for(int i=0; i<z-1; i++)
            if(u[i]>u[i+1])
            {
                int aux=u[i];
                u[i]=u[i+1];
                u[i+1]=aux;
                sortat=false;
            }
    }
    while(!sortat);

    for(int i=0; i<z; i++)
        cout<<u[i]<<" ";

}
