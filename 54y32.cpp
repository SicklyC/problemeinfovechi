#include <bits/stdc++.h>

using namespace std;

int n,v[1000];

int main()
{
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>v[i];
    bool ok=true;
    for (int i=0; i<n; i++)
    {
        ok=true;
        if (v[i]==1 || v[i]==0)
            ok=false;
        if (v[i]%2==0 && v[i]!=2)
            ok=false;
        for (int j=3; j*j<v[i]; j+=2)
            if (v[i]%j==0)
                ok=false;
      if (ok==true){
        for (int k=i;k<n-1;k++)
        v[k]=v[k+1];
        n--;
        i--;
      }

    }

    for (int i=0;i<n;i++)
        cout<<v[i]<<" ";
return 0;
}
