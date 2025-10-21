#include <iostream>
int p, n, k, v[1500];
using namespace std;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    k = 0; // număr de elemente eliminate

    for (int i = n - 1; i >= 0; i--) {
        bool prim = true;

        if (v[i] < 2) {
            prim = false;
        } else if (v[i] % 2 == 0 && v[i] != 2) {
            prim = false;
        } else {
            for (int j = 3; j * j <= v[i]; j += 2) {
                if (v[i] % j == 0) {
                    prim = false;
                    break;
                }
            }
        }

        if (prim) {
            for (int j = i; j < n - 1; j++) {
                v[j] = v[j + 1];
            }
            n--;
            k++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    return 0;
}
