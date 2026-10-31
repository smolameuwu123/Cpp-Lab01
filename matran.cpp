#include <iostream>

using namespace std;

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "=== MA TRAN 3x3 ===" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nCac phan tu tren duong cheo chinh (a[i][i]): ";
    for (int i = 0; i < 3; i++) {
        cout << a[i][i] << " ";
    }
    cout << endl;

    return 0;
}
