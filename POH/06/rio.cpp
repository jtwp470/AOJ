#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int t[n];
    double s[n];
    for (int i = 0; i < n; i++) {
        int x;
        double y;
        cin >> x >> y;
        t[i] = x;
        s[i] = y;
    }

    double x = 0.0;
    double y = 0.0;

    for (int i = 0; i < n; i++) {
        switch (t[i]) {
        case 1:
            x += s[i];
            break;
        case 2:
            y += s[i];
            break;
        default:
            x = x - s[i] * x / (x + y);
            y = y - s[i] * y / (x + y);
        }
    }

    cout << floor(100 * y / (x + y)) << endl;
    return 0;
}
