#include <iostream>

using namespace std;

int cmmnr(int n)
{
    int v[10],m,i=0;
    while(n!=0)
    {
        v[i]=n%10;
        i++;
        n/=10;
    }
    bool ok=true ;
    do
    {
        ok=true;
        for(int z=0; z<i-1; i++)
        {
            if(v[z]<v[z+1])
            {
                int aux=v[z];
                v[z]=v[z+1];
                v[z+1]=aux;
                ok=false;
            }
        }

    }while(ok==false);

    for(int z=0;z<i;i++){
       m=m*10+v[z];
    }
    return m;
}
