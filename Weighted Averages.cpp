#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    float a, b, c;
    for (int i = 0; i < N; i++) {
        cin >> a >> b >> c;
        float weightedAverage = (a * 2 + b * 3 + c * 5) / 10.0;
        cout << fixed << setprecision(1) << weightedAverage << endl;
    }

    return 0;
}

