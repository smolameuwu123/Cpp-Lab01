#include <iostream>
#include "sinhvien.h"

using namespace std;

int main() {
    SinhVien sv;

    cout << "=== NHAP THONG TIN SINH VIEN ===" << endl;
    nhapSinhVien(sv);

    cout << "\n=== THONG TIN SINH VIEN ===" << endl;
    inSinhVien(sv);

    return 0;
}
