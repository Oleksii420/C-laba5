#include <iostream>
using namespace std;

double sum(int n) {
    double a = 1;
    double b = 1;
    double Sn = 0;

    for (int k = 1; k <= n; ++k) {
        double a_k = b * a;
        double b_k = b + a;

        Sn += a_k / (1 + b_k);

        a = a_k;
        b = b_k;
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
