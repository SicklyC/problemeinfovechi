#include <bits/stdc++.h>
using namespace std;
int v[1000],d[1000],n;

int main()
{

    for(int i=0; i<n; i++)
    {

        cin>>v[i];
        for(int j=1; j<=v[i]; j++)
        {
            if(v[i]%j==0)
                d[i]+=1;
        }
    }
    bool sortat;
    do
    {
        sortat = true;
        for(int i = 0 ; i < n - 1 ; i ++)
            if (d[i] < d[i + 1] || (d[i] == d[i + 1] && v[i] > v[i + 1]))
            {
                swap(d[i],d[i+1]);
                swap(v[i],v[i+1]);
                sortat = false;
            }
    }
    while(!sortat);
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
