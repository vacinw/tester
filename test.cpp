#include <iostream>

using namespace std;

int main() {
  int n; // Biến để lưu số lần lặp
  int soChan = 0; // Biến đếm số chẵn
  int soLe = 0; // Biến đếm số lẻ

  cout << "Nhap so lan lap: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int so; // Biến để lưu số nhập vào

    cout << "Nhap so thu " << i << ": ";
    cin >> so;

    if (so % 2 == 0) {
      soChan++;
    } else {
      soLe++;
    }
  }

  cout << "So luong so chan: " << soChan << endl;
  cout << "So luong so le: " << soLe << endl;

  return 0;
}
