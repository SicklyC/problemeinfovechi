#include <iostream>
using namespace std;
int n,c,v[1000], m[1000];
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<n; i++)
    {
        c=9;
        while(v[i]!=0)
        {
            if(v[i]%10<c)
                c=v[i]%10;
            v[i]/=10;
        }
        m[i]=c;
    }
    bool sortat;
    do
    {
        sortat=true;
        for(int i=0; i<n-1; i++)
            if(m[i]>m[i+1])
            {
                int aux=m[i];
                m[i]=m[i+1];
                m[i+1]=aux;
                sortat=false;
            }
    }
    while(!sortat);
    if(m[0]==0)
    {
        for(int i=1; i<n; i++)
        {
            if(m[i]!=0)
            {
                swap(m[0],m[i]);
                break;
            }
        }
    }
    for(int i=0; i<n; i++)
        cout <<m[i];
    return 0;
}
