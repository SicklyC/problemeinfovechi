#include <iostream>

using namespace std;

int main()
{

    int an,luna,zi;
    long long a;
    cin>>a;
    an=a/10000000000%100;
    luna=a/100000000%100;
    zi=a/1000000%100;
    if (an < 10) cout << "0";
        cout << an << " ";
    if (luna < 10) cout << "0";
        cout << luna << " ";
    if (zi < 10) cout << "0";
    cout << zi;
    return 0;
}
