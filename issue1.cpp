#include <gtest/gtest.h>
#include <iostream>

using namespace std;

int demSoChanLe(int n) {
  int soChan = 0; // Biến đếm số chẵn
  int so; // Biến để lưu số nhập vào

  for (int i = 1; i <= n; i++) {
    cout << "Nhap so thu " << i << ": ";
    cin >> so;

    if (so % 2 == 0) {
      soChan++;
    }
  }

  return soChan;
}

TEST(DemSoChanLeTest, TestVoiNLaSoDuongLonHon0) {
  int n = 5; // Số lần lặp là 5

  // Chạy chương trình và lưu kết quả
  int soChan = demSoChanLe(n);
  int soLe = n - soChan;

  // Kiểm tra kết quả
  EXPECT_EQ(2, soChan); // Số lượng số chẵn phải bằng 2
  EXPECT_EQ(3, soLe); // Số lượng số lẻ phải bằng 3
}

TEST(DemSoChanLeTest, TestVoiNLaSoAm) {
  int n = -5; // Số lần lặp là -5 (không hợp lệ)

  // Chạy chương trình và lưu kết quả
  int soChan = demSoChanLe(n);
  int soLe = n - soChan;

  // Kiểm tra kết quả
  EXPECT_EQ(0, soChan); // Số lượng số chẵn phải bằng 0
  EXPECT_EQ(0, soLe); // Số lượng số lẻ phải bằng 0
}

TEST(DemSoChanLeTest, TestVoiNLa0) {
  int n = 0; // Số lần lặp là 0

  // Chạy chương trình và lưu kết quả
  int soChan = demSoChanLe(n);
  int soLe = n - soChan;

  // Kiểm tra kết quả
  EXPECT_EQ(0, soChan); // Số lượng số chẵn phải bằng 0
  EXPECT_EQ(0, soLe); // Số lượng số lẻ phải bằng 0
}

TEST(DemSoChanLeTest, TestVoiSoNhapVaoLaSoNguyenDuong) {
  int n = 5; // Số lần lặp là 5

  // Chạy chương trình với các số nhập vào là số nguyên dương
  for (int i = 1; i <= n; i++) {
    demSoChanLe(n, i);
  }

  // **Đảm bảo tất cả các dòng lệnh trong hàm demSoChanLe() được thực thi ít nhất 1 lần**
}

TEST(DemSoChanLeTest, TestVoiSoNhapVaoLaSoNguyenAm) {
  int n = 5; // Số lần lặp là 5

  // Chạy chương trình với các số nhập vào là số nguyên âm
  for (int i = -1; i <= -n; i--) {
    demSoChanLe(n, i);
  }

  // **Đảm bảo tất cả các dòng lệnh trong hàm demSoChanLe() được thực thi ít nhất 1 lần**
}

TEST(DemSoChanLeTest, TestVoiSoNhapVaoLaSo0) {
  int n = 5; // Số lần lặp là 5

  // Chạy chương trình với các số nhập vào là số 0
  for (int i = 0; i < n; i++) {
    demSoChanLe(n, 0);
  }

  // **Đảm bảo tất cả các dòng lệnh trong hàm demSoChanLe() được thực thi ít nhất 1 lần**
}
