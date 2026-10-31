#include "sinhvien.h"

void nhapSinhVien(SinhVien &sv) {
    cout << "Nhap ma sinh vien: ";
    cin >> sv.msv;
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, sv.hoTen);
    cout << "Nhap diem TB: ";
    cin >> sv.diemTB;
}

void inSinhVien(const SinhVien &sv) {
    cout << "MSV: " << sv.msv 
         << " | Ho ten: " << sv.hoTen 
         << " | Diem TB: " << sv.diemTB << endl;
}
