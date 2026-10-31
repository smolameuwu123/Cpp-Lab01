#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("danhsach.txt");
    if (!inFile.is_open()) {
        cerr << "Khong the mo file danhsach.txt!" << endl;
        return 1;
    }

    ofstream outFile("pass.txt");
    if (!outFile.is_open()) {
        cerr << "Khong the tao file pass.txt!" << endl;
        inFile.close();
        return 1;
    }

    string ten;
    double diem;
    int demPass = 0;

    cout << "=== DANH SACH SINH VIEN QUA MON (Diem >= 5.0) ===" << endl;
    while (inFile >> ten >> diem) {
        if (diem >= 5.0) {
            outFile << ten << " " << diem << endl;
            cout << "- " << ten << " (Diem: " << diem << ")" << endl;
            demPass++;
        }
    }

    inFile.close();
    outFile.close();

    cout << "------------------------------------------" << endl;
    cout << "Tong so sinh vien qua mon: " << demPass << endl;
    cout << "Da ghi ket qua vao file pass.txt thanh cong!" << endl;

    return 0;
}
