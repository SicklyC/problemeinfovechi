#include <iostream>

using namespace std;

int main()
{
    int x,k=0;
    cin>>x;
    while(x!=0){
        x=x/10;
        k++;
    }
    switch(k){
    case 1:
        cout<<"1";
        break;
    case 2:
        cout<<"2";
        break;
    case 3:
        cout<<"3";
        break;
    }
    return 0;
}
