#include <bits/stdc++.h>
using namespace std;

int v[1000],c[1000],n;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
        c[i]=v[i];
    }
    bool ok=true;
    do{
    ok=true;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            ok=false;
          swap(v[i],v[i+1]);
        }
    }
    }while(!ok);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]==c[j]){
                cout<<j+1<<" ";
                break;
            }
        }
    }
    return 0;
}
