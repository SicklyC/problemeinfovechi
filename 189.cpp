#include <bits/stdc++.h>

using namespace std;
int v[1000],m[1000],n,c,a,b;
bool ok=false;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
        int b=v[i];     while(b!=0){
           c++;
           b/=10;
        }
        for(int j=c;j>0;j--)
            v[j]=v[i]%10;
        for(int j=0;j<c/2+1;j++){
           if(v[j]<v[j+1])
                a++;
        }
        for(int j=c/2+1;j<c;j++){
           if(v[j]<v[j+1])
                b++;
        if(a==c/2+1 && b==c/2+1)
            ok=true;
    }


    return 0;
}
