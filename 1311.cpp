#include <iostream>

using namespace std;
int a,k;
int main()
{
    cin>>a;
    if(a/100==a/10%10){
        if(a/10%10==a%10)cout<<"da";
        else cout<<"nu";}
    else{
        cout<<"nu";


    return 0;
    }
}
