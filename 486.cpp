
#include<iostream>
using namespace std;
int main()
{
int n,minim=9999999999,maxim=-999999999999,v[1001];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    for(int i=1; i<=n; i++)
    {
if(v[i]>maxim){
maxim= v[i];
}
if(v[i]<maxim){
minim= v[i];
}

        }

    return 0;
}

