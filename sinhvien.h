#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <string>
#include <iostream>

using namespace std;

struct SinhVien {
    string msv;
    string hoTen;
    double diemTB;
};

void nhapSinhVien(SinhVien &sv);
void inSinhVien(const SinhVien &sv);

#endif
