#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;

    // Kiem tra chan / le
    if (n % 2 == 0) {
        cout << n << " la so chan." << endl;
    } else {
        cout << n << " la so le." << endl;
    }

    // Kiem tra am / duong / zero
    if (n > 0) {
        cout << n << " la so duong." << endl;
    } else if (n < 0) {
        cout << n << " la so am." << endl;
    } else {
        cout << n << " la so khong." << endl;
    }

    return 0;
}
