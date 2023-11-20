/*2. Tìm kiếm trong mảng
Mục tiêu: Hiểu và áp dụng các thuật toán tìm kiếm.
• Yêu cầu:
• Viết chương trình tìm kiếm tuyến tính và nhị phân cho giá trị x trong mảng.
• So sánh hiệu suất của hai phương pháp.*/

#include<stdio.h>

// Hàm tìm kiếm tuyến tính
int linearSearch(int s[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (s[i] == x) {
            return i; // Trả về vị trí của phần tử nếu tìm thấy
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy
}

// Hàm tìm kiếm nhị phân
int binarySearch(int s[], int low, int high, int x) {
    while (low <= high) {
        int temp = low + (high - low) / 2;
        if (s[temp] == x) {
            return temp; // Trả về vị trí của phần tử nếu tìm thấy
        } else if (s[temp] < x) {
            low = temp + 1;
        } else {
            high = temp - 1;
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy
}

int main() {
    int n, x;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int s[n];
    printf("Nhap cac phan tu cua mang :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }

    // Nhập giá trị cần tìm kiếm
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);

    // Tìm kiếm tuyến tính và in kết quả
    int linearResult = linearSearch(s, n, x);
    if (linearResult != -1) {
        printf("Tim thay gia tri tai vi tri: %d (tim kiem tuyen tinh)\n", linearResult);
    } else {
        printf("Khong tim thay gia tri (tim kiem tuyen tinh)\n");
    }

    // Tìm kiếm nhị phân và in kết quả
    int binaryResult = binarySearch(s, 0, n - 1, x);
    if (binaryResult != -1) {
        printf("Tim thay gia tri tai vi tri: %d (tim kiem nhi phan)\n", binaryResult);
    } else {
        printf("Khong tim thay gia tri (tim kiem nhi phN)\n");
    }

    return 0;
}
