#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

// Ham chuan hoa chuoi: xoa khoang trang thua va viet hoa chu cai dau moi tu
string chuanHoaChuoi(const string &str) {
    stringstream ss(str);
    string tu;
    vector<string> cacTu;

    while (ss >> tu) {
        // Chuyen tat ca ve chu thuong truoc
        for (char &c : tu) {
            c = tolower(c);
        }
        // Viet hoa chu cai dau
        if (!tu.empty()) {
            tu[0] = toupper(tu[0]);
        }
        cacTu.push_back(tu);
    }

    // Ghep lai thanh chuoi hoan chinh
    string ketQua = "";
    for (size_t i = 0; i < cacTu.size(); i++) {
        ketQua += cacTu[i];
        if (i < cacTu.size() - 1) {
            ketQua += " ";
        }
    }
    return ketQua;
}

int main() {
    string str;
    cout << "Nhap mot chuoi bat ky: ";
    getline(cin, str);

    string ketQua = chuanHoaChuoi(str);

    cout << "Chuoi sau khi chuan hoa: \"" << ketQua << "\"" << endl;

    return 0;
}
