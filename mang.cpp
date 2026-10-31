#include <iostream>

using namespace std;

int main() {
    int a[5] = {3, 7, 2, 9, 5};

    cout << "Mang ban dau: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // 1. Tinh tong cac phan tu trong mang (tu feature-sum)
    int tong = 0;
    for (int i = 0; i < 5; i++) {
        tong += a[i];
    }
    cout << "Tong cac phan tu: " << tong << endl;

    // 2. Tim phan tu lon nhat (Max) trong mang (tu feature-max)
    int maxVal = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }
    cout << "Phan tu lon nhat: " << maxVal << endl;

    return 0;
}
