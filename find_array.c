/*2. Tìm kiếm trong mảng
Mục tiêu: Hiểu và áp dụng các thuật toán tìm kiếm.
• Yêu cầu:
• Viết chương trình tìm kiếm tuyến tính và nhị phân cho giá trị x trong mảng.
• So sánh hiệu suất của hai phương pháp.*/

#include<stdio.h>

int linearSearch(int s[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (s[i] == x) {
            return i;
        }
    }
    return -1; 
}

int binarySearch(int s[], int low, int high, int x) {
    while (low <= high) {
        int temp = low + (high - low) / 2;
        if (s[temp] == x) {
            return temp;
        } else if (s[temp] < x) {
            low = temp + 1;
        } else {
            high = temp - 1;
        }
    }
    return -1; 
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

    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);

    int linearResult = linearSearch(s, n, x);
    if (linearResult != -1) {
        printf("Tim thay gia tri tai vi tri: %d \n", linearResult);
    } else {
        printf("INVALID)\n");
    }

    int binaryResult = binarySearch(s, 0, n - 1, x);
    if (binaryResult != -1) {
        printf("Tim thay gia tri tai vi tri: %d\n", binaryResult);
    } else {
        printf("INVALID\n");
    }

    return 0;
}
