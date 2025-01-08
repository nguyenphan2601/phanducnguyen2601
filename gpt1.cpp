#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "nhap so nguyeen N: ";
    cin >> N;

    if (N <= 0) {
        cout << "N phải lớn hơn 0." << endl;
        return 0;
    }

    int A[100]; // Giả sử N không lớn hơn 100
    cout << "nhap " << N << " sso nguyen: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Tìm giá trị lớn nhất trong mảng
    int max_value = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] > max_value) {
            max_value = A[i];
        }
    }

    // Xóa tất cả các phần tử có giá trị bằng max_value
    int B[100]; // Mảng tạm để lưu kết quả
    int index = 0; // Số lượng phần tử trong mảng B
    for (int i = 0; i < N; i++) {
        if (A[i] != max_value) {
            B[index] = A[i];
            index++;
        }
    }

    // In mảng sau khi xóa
    cout << "day cua ban: ";
    for (int i = 0; i < index; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
