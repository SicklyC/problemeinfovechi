#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n,radical;
    cin>>n;
    radical=sqrt(n);
    if (radical*radical==n) {
        cout<<"da"<<endl;
    } else {
        cout<<"nu"<<endl;
    }
    return 0;
}
