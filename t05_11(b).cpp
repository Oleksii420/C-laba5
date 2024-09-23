#include <iostream>
#include <cmath>
using namespace std;

double sum(int n) {
    double a1 = 1;
    double a2 = 1;
    double Sn = pow(3, 1) / a1 + pow(3, 2) / a2;

    for (int k = 3; k <= n; ++k) {
        double a_next = a2 / k + a1;
        Sn += pow(3, k) / a_next;
        a1 = a2;
        a2 = a_next;
    }

    return Sn;
}

int main() {
    int n;
    cin >> n;

    double result = sum(n);
    cout << result;

    return 0;
}
