#include <bits/stdc++.h>
using namespace std;
int n,t,m,st,dr,a[1000000],b[1000000];
int main()
{
    cin>>n;
    cin>>t;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<t;i++){
        cin>>st>>dr;
        m=0;
    for(int j=0;j<n;j++)
    if(a[j]<=dr&&a[j]>=st){
        m++;
    }
    b[i]=m;
    }
    for(int i=0;i<t;i++)
        cout<<b[i]<<endl;
    return 0;
}

