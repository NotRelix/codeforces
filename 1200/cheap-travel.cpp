#include <iostream>

using namespace std;

int main()
{
    int n, m, a, b, total = 0;
    cin >> n >> m >> a >> b;
    if (m * a <= b) {
        total += n * a;
    } else {
        total += (n / m) * b;
        if (n % m != 0) {
            if (total == 0 && n * a > b) {
                total += b;
            } else {
                total += (a <= b) ? a * (n % m) : b;
            }
        }
    }
    cout << total;
}