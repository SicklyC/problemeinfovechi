#include <bits/stdc++.h>
using namespace std;
int v[100],n,v1=-9999;
bool ok=true;
int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
    if(v1>v[i]){
        ok=false;
        break;
    }else{
        v1=v[i];
    }
    if(ok==false) break;
}
    if(ok==true){
        cout<<"DA";
    }else{
    cout<<"NU";
    }

}
