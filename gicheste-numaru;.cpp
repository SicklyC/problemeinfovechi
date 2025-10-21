#include <iostream>
using namespace std;
int n=-1,mij,z;
int main()
{
    cout<<"Cate cifre are numarul?"<<"\n";
    cin>>z;
    int st = 1,dr=1;
    for(int i=z;i>0;i--)
        dr*=10;
    while(n!=2){
        mij=(dr+st)/2;
        cout<<"Este mai mare decat "<<mij<<" numarul?(0-nu;1-da;2-acela este numarul este numarul)"<<"\n";
        cin>>n;
        if(n==0){
            dr=mij;
        }else if(n==1){
            st=mij;
        }else if(n==2){
        cout<<"Numarul tau este "<<mij<<"\n";
        } else {
            cout << "Invalid. Foloseste 0, 1 sau 2."<<"\n";
        }
    }

}
