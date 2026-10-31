#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
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

    string line;
    int demPass = 0;

    cout << "=== DANH SACH SINH VIEN QUA MON (Diem >= 5.0) ===" << endl;
    while (getline(inFile, line)) {
        if (line.empty()) continue;

        stringstream ss(line);
        vector<string> tokens;
        string token;
        while (ss >> token) {
            tokens.push_back(token);
        }

        if (tokens.size() >= 2) {
            try {
                // Phan tu cuoi cung la diem
                double diem = stod(tokens.back());

                // Cac phan tu truoc do la ho ten
                string ten = "";
                for (size_t i = 0; i < tokens.size() - 1; i++) {
                    ten += tokens[i];
                    if (i < tokens.size() - 2) {
                        ten += " ";
                    }
                }

                if (diem >= 5.0) {
                    outFile << ten << " " << diem << endl;
                    cout << "- " << ten << " (Diem: " << diem << ")" << endl;
                    demPass++;
                }
            } catch (...) {
                // Bo qua dong neu loi chuyen doi diem
            }
        }
    }

    inFile.close();
    outFile.close();

    cout << "------------------------------------------" << endl;
    cout << "Tong so sinh vien qua mon: " << demPass << endl;
    cout << "Da ghi ket qua vao file pass.txt thanh cong!" << endl;

    return 0;
}
