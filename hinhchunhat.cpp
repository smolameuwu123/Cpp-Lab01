#include <iostream>

using namespace std;

int main() {
    double chieuDai, chieuRong;

    cout << "Nhap chieu dai: ";
    cin >> chieuDai;

    cout << "Nhap chieu rong: ";
    cin >> chieuRong;

    if (chieuDai <= 0 || chieuRong <= 0) {
        cout << "Chieu dai va chieu rong phai lon hon 0!" << endl;
        return 1;
    }

    double chuVi = (chieuDai + chieuRong) * 2;
    double dienTich = chieuDai * chieuRong;

    cout << "-------------------------" << endl;
    cout << "Chu vi hinh chu nhat: " << chuVi << endl;
    cout << "Dien tich hinh chu nhat: " << dienTich << endl;

    return 0;
}
