#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream f("halfsort2.in");
    ofstream g("halfsort2.out");

    int n, v[100];
    f >> n;
    for (int i = 0; i < n; i++)
        f >> v[i];

    bool sortat;
    do
    {
        sortat = true;
        for (int i = 0; i + 3 < n; i += 2)
        {
            if (v[i] < v[i + 2])
            {
                swap(v[i], v[i + 2]);
                sortat = false;
            }
            if (v[i+1] > v[i + 3]){
            swap(v[i+1], v[i + 3]);
            sortat = false;
        }
        }
    } while (!sortat);

    for (int i = 0; i < n; i++)
        g<<v[i]<<" ";

    return 0;
    f.close();
    g.close();
}
