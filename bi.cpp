#include <iostream>

using namespace std;
int v[1000],n;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i;j--)
        {
            v[j+1]=v[j];
        }
        n++;
        v[i+1]=(v[i]+v[i+2])/2;
        i++;
    }
    for(int i=0;i<n-1;i++)
        cout<<v[i]<<" ";
return 0;
}
