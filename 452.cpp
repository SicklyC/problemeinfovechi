#include <iostream>

using namespace std;
int a,k;
int main()
{
    cin>>a;
    if((a/100%2)!=0) k++;
    if((a/10%10%2)!=0) k++;
    if((a%10%2)!=0)k++;
    cout<<k;
    return 0;
}
