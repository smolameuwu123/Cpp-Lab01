#include <iostream>

using namespace std;

double cong(double a, double b) {
    return a + b;
}

double tru(double a, double b) {
    return a - b;
}

double nhan(double a, double b) {
    return a * b;
}

double chia(double a, double b) {
    if (b == 0) {
        cout << "Loi: Khong the chia cho 0!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double a, b;
    int luaChon;

    cout << "===== MAY TINH BO TUI =====" << endl;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;

    cout << "Chon phep tinh:" << endl;
    cout << "1. Cong (+)" << endl;
    cout << "2. Tru (-)" << endl;
    cout << "3. Nhan (*)" << endl;
    cout << "4. Chia (/)" << endl;
    cout << "Nhap lua chon (1-4): ";
    cin >> luaChon;

    switch (luaChon) {
        case 1:
            cout << "Ket qua: " << cong(a, b) << endl;
            break;
        case 2:
            cout << "Ket qua: " << tru(a, b) << endl;
            break;
        case 3:
            cout << "Ket qua: " << nhan(a, b) << endl;
            break;
        case 4:
            if (b != 0) {
                cout << "Ket qua: " << chia(a, b) << endl;
            } else {
                chia(a, b);
            }
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
    }

    return 0;
}
