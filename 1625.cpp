#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, delta, x1, x2;
    cin >> a >> b >> c;

    if (a==0) {
        if (b==0) {
            if (c==0)
                cout << "Infinitate de solutii";
            else
                cout << "Nu are solutii reale";
        } else {
            x1 =-c/b;
            cout << "Radacina dubla " << x1;
        }
    } else {
        delta =b*b-4*a*c;
        if (delta>0) {
            x1=(-b+sqrt(delta))/(2 * a);
            x2=(-b-sqrt(delta))/(2 * a);

            cout <<x1<<" "<<x2;
        } else if (delta==0) {
            x1= -b/(2 * a);
            cout<<"Radacina dubla "<<x1;
        } else {
            cout<<"Nu are solutii reale";
        }
    }

    return 0;
}
