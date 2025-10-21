#include <iostream>

using namespace std;

int main()
{
    int n,m,k=0,z;
    cin>>n>>m;
    for (int i=0; i<3; i++){
        z=n%10;
        if((m%z==0)&&(z!=0)){
           k++;
        }
        n=n/10;
    }
    cout<<k;
    return 0;
}
