#include <iostream>

using namespace std;

int main()
{
    int x,k;
    cin>>x;
    k=x%10;
    while(x!=0){
        if(k<(x%10)){
            k=x%10;
        }
        x=x/10;
    }
    cout<<k;
    return 0;
}
