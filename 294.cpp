#include <iostream>

using namespace std;
int n,v[100],inv;

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    while(v[0]!=0){
        inv=inv*10+v[0]%10;
        v[0]/=10;
    }
    bool ok=false;
    for(int i=1; i<n; i++)
    {
        if(inv==v[i])
        {
            ok=true;
        }
    }
    if(ok)
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }
    return 0;
}
