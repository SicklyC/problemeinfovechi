#include <iostream>
using namespace std;

int main() {
    int n;
    int v[1001]; // conform restricției: n ≤ 1000

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int st = 0;
    int dr = n - 1;

    while (st <= dr) {
        cout << v[st] << " ";
        st++;
        if (st <= dr) {
            cout << v[dr] << " ";
            dr--;
        }
    }

    return 0;
}
