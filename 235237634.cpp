Here’s the improved version of your code. I’ve made adjustments to ensure proper initialization of variables and clear output formatting:
#include <iostream>

using namespace std;

int main()
{
    int nr, n;
    int x0 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0; // Initialize counters to 0

    cin >> nr;

    while (nr != 0)
    {
        n = nr % 10;
        switch (n)
        {
            case 0: x0++; break;
            case 1: x1++; break;
            case 2: x2++; break;
            case 3: x3++; break;
            case 4: x4++; break;
            case 5: x5++; break;
            case 6: x6++; break;
            case 7: x7++; break;
            case 8: x8++; break;
            case 9: x9++; break;
        }
        nr /= 10;
    }

    // Output results with clear formatting
    cout << "Frequency of digits:" << endl;
    cout << "0: " << x0 << endl;
    cout << "1: " << x1 << endl;
    cout << "2: " << x2 << endl;
    cout << "3: " << x3 << endl;
    cout << "4: " << x4 << endl;
    cout << "5: " << x5 << endl;
    cout << "6: " << x6 << endl;
    cout << "7: " << x7 << endl;
    cout << "8: " << x8 << endl;
    cout << "9: " << x9 << endl;

    return 0;
}

