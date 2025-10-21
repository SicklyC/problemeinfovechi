#include <iostream>
#include <algorithm> // pentru sort()

using namespace std;

int x[10000], y[10000];
int n, m;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];

    sort(x, x + n); // trebuie sortat înainte de binary search

    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> y[i];

    for (int i = 0; i < m; i++) {
        int z = y[i];
        int st = 0, dr = n - 1;
        bool gasit = false;

        while (st <= dr) {
            int mij = (st + dr) / 2;
            if (x[mij] == z) {
                gasit = true;
                break;
            }
            if (x[mij] < z)
                st = mij + 1;
            else
                dr = mij - 1;
        }

        y[i] = gasit ? 1 : 0;
    }

    for (int i = 0; i < m; i++)
        cout << y[i] << " ";

    return 0;
}
