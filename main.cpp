#include <bits/stdc++.h>
using namespace std;
int nrm;
char v[1000];

char adaugare(){
getline(cin,v[nrm]);
nrm++;
return 0;
}
int main()
{   adaugare();
    cout<<v[nrm];
    return 0;
}
