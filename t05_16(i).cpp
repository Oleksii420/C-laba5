#include <iostream>
#include <cmath>
using namespace std;

double suma(double x, double e) {
    double sum = 1.0;
    double term = 1.0;
    int n = 1;
    double coeff = 1.0;

    while (abs(term) >= e) {
        coeff = n * (n + 1) / 2.0;
        term = pow(-1, n) * coeff * pow(x, n);
        sum += term;
        n++;
    }

    return sum;
}

int main() {
    double x, e;
    cin >> x;
    cin >> e;

    if (abs(x) >= 1) {
        return 1;
    }

    double result = suma(x, e);
    cout << result;

    return 0;
}
