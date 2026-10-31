#include <iostream>

using namespace std;

int main() {
    int a[5] = {3, 7, 2, 9, 5};

    cout << "Mang ban dau: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Tim phan tu lon nhat (Max) trong mang
    int maxVal = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }
    cout << "Phan tu lon nhat: " << maxVal << endl;

    return 0;
}
