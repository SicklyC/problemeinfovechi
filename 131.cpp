#include<iostream>
using namespace std;

int main()
{
    int n,v[100],p[100];
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        int x=v[i];
        if(x<0)x=-x;
        while(x>=10)
        x/=10;
        p[i]=x;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(p[j]>p[j+1])
            {
                int aux=p[j];
                p[j]=p[j+1];
                p[j+1]=aux;
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";

    return 0;
}
