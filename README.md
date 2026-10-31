# Cpp-Lab01: Sổ tay Thực hành Lập trình C++ & Git

- **Môn học**: Nhập môn Công nghệ Thông tin (CS044)
- **Thời lượng**: 10 Bài Lab tiêu chuẩn
- **Mục tiêu**: Tích hợp tư duy lập trình C++ cơ bản và kỹ năng quản lý mã nguồn, kiểm soát phiên bản bằng Git/GitHub theo chuẩn quy trình doanh nghiệp.

---

## Danh mục 10 Bài Lab

### Giai đoạn 1: Khởi động & Cấu hình (Lab 1 - Lab 3)
- **Lab 1: Chương trình "Hello World" & Quy trình Git cơ bản**
  - File: `main.cpp` (lịch sử commit `c0ef7b3`)
  - Kỹ năng Git: `clone`, `add`, `commit`, `push`.
- **Lab 2: Kiểu dữ liệu, Biến & Cấu hình .gitignore**
  - File: [`hinhchunhat.cpp`](./hinhchunhat.cpp), [`.gitignore`](./.gitignore)
  - Kỹ năng Git: Chặn file thực thi (`*.exe`, `*.o`, `*.out`, `.DS_Store`).
- **Lab 3: Cấu trúc Rẽ nhánh (If/Else) & Phân nhánh (Git Branch)**
  - File: [`kiemtraso.cpp`](./kiemtraso.cpp)
  - Nhánh: `feature-kiemtra`
  - Kỹ năng Git: `git branch`, `git checkout`, `git push -u origin <branch>`.

### Giai đoạn 2: Cấu trúc Lập trình & Gộp mã nguồn (Lab 4 - Lab 7)
- **Lab 4: Vòng lặp (For/While) & Sửa lỗi (Git Diff / Revert)**
  - File: [`vonglap.cpp`](./vonglap.cpp)
  - Kỹ năng Git: Tạo commit lỗi có chủ ý, dùng `git diff` đối chiếu, commit bản vá `Fix bug vong lap`.
- **Lab 5: Hàm (Functions) & Gộp nhánh (Git Merge)**
  - File: [`maytinh.cpp`](./maytinh.cpp)
  - Nhánh: `feature-maytinh`
  - Kỹ năng Git: Tạo nhánh tính năng, phát triển các hàm toán học, dùng `git merge` kéo vào `main`.
- **Lab 6: Mảng 1 chiều & Xử lý Xung đột (Resolve Conflict)**
  - File: [`mang.cpp`](./mang.cpp)
  - Nhánh: `feature-sum`, `feature-max`
  - Kỹ năng Git: Mô phỏng xung đột merge khi 2 nhánh cùng sửa một file, xử lý conflict thủ công và hoàn tất commit.
- **Lab 7: Chuỗi (String) & Đánh dấu phiên bản (Git Tag)**
  - File: [`xulychuoi.cpp`](./xulychuoi.cpp)
  - Phiên bản: **Tag `v1.0`**
  - Kỹ năng Git: `git tag -a v1.0`, `git push origin v1.0`.

### Giai đoạn 3: Dữ liệu Phức hợp & Làm việc nhóm (Lab 8 - Lab 10)
- **Lab 8: Mảng 2 chiều & Đóng góp mã nguồn (Pull Request)**
  - File: [`matran.cpp`](./matran.cpp)
  - Nhánh: `feature-matran`
  - Kỹ năng Git: Đẩy nhánh lên remote, quy trình Pull Request và đồng bộ về `main`.
- **Lab 9: Kiểu cấu trúc (Struct), Chia File & Git Stash**
  - File: [`sinhvien.h`](./sinhvien.h), [`sinhvien.cpp`](./sinhvien.cpp), [`main.cpp`](./main.cpp)
  - Kỹ năng Git: Tạm lưu thay đổi đang viết dở với `git stash` và phục hồi bằng `git stash pop`.
  - Biên dịch đa file: `g++ main.cpp sinhvien.cpp -o app`
- **Lab 10: Đọc/Ghi File & Tổng hợp quy trình hoàn chỉnh**
  - File: [`fileio.cpp`](./fileio.cpp), [`danhsach.txt`](./danhsach.txt), [`pass.txt`](./pass.txt)
  - Nhánh: `feature-file-io`
  - Phiên bản: **Tag `v2.0`**
  - Kỹ năng Git: Đọc/ghi luồng file `<fstream>`, quy trình nhánh tính năng, release tag `v2.0` và xóa nhánh sau khi gộp.

---

## Hướng dẫn Biên dịch & Chạy thử

Mở Terminal tại thư mục `Cpp-Lab01`:

```bash
# Lab 2: Hình chữ nhật
g++ hinhchunhat.cpp -o hinhchunhat && ./hinhchunhat

# Lab 3: Kiểm tra số
g++ kiemtraso.cpp -o kiemtraso && ./kiemtraso

# Lab 4: Vòng lặp
g++ vonglap.cpp -o vonglap && ./vonglap

# Lab 5: Máy tính bỏ túi
g++ maytinh.cpp -o maytinh && ./maytinh

# Lab 6: Thao tác mảng (Tổng & Max)
g++ mang.cpp -o mang && ./mang

# Lab 7: Xử lý chuỗi
g++ xulychuoi.cpp -o xulychuoi && ./xulychuoi

# Lab 8: Ma trận 3x3
g++ matran.cpp -o matran && ./matran

# Lab 9: Sinh viên đa file
g++ main.cpp sinhvien.cpp -o app && ./app

# Lab 10: Đọc/Ghi file danh sách sinh viên
g++ fileio.cpp -o fileio && ./fileio
```
