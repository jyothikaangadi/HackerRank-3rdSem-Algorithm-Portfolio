#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int target;
    cin >> target;

    int left = 0;
    int right = n - 1;
    int position = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == target) {
            position = mid;
            break;
        }
        else if (a[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (position != -1)
        cout << "Element found at index " << position;
    else
        cout << "Element not found";

    return 0;
}
