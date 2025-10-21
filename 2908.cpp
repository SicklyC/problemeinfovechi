#include <bits/stdc++.h>

using namespace std;

ifstream f("planta.in");
ofstream g("planta.out");
int main()
{
    int D,A,B,N,suma;
    f>>D>>A>>B>>N;
    suma=D;
    for(int i=1;i<=N;i++){
        if(i%2==1){
        suma=suma+A;
        }
        else{
        suma=suma-B;
        }
    }
    g<<suma;

    f.close();
    g.close();
    return 0;
}
/*#include <bits/stdc++.h>

using namespace std;

ifstream f("planta.in");
ofstream g("planta.out");

int main() {
    int D, A, B, N;
    f >> D >> A >> B >> N;

    // Calcul direct al înălțimii
    int inaltime = D + ((N + 1) / 2) * A - (N / 2) * B;

    g << inaltime; // Scriem rezultatul în fișier

    f.close();
    g.close();
    return 0;
}
*/
