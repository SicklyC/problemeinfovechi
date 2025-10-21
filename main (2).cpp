#include<iostream>
using namespace std;

int main()
{
    int n,v[100],s[100];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        int x=v[i],suma=0;
        if(x<0)x=-x;
        while(x>0)
        {
            suma+=x%10;
            x/=10;
        }
        s[i]=suma;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(s[j]>s[j+1])
            {
                int aux=s[j];
                s[j]=s[j+1];
                s[j+1]=aux;
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
