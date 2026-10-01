#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<long long> a(5);

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    long long total = 0;
    long long minVal = a[0];
    long long maxVal = a[0];

    for (int i = 0; i < 5; i++) {
        total += a[i];
        minVal = min(minVal, a[i]);
        maxVal = max(maxVal, a[i]);
    }

    cout << total - maxVal << " " << total - minVal;

    return 0;
}
