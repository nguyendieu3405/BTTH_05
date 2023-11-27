/*1. Sắp xếp mảng
Mục tiêu: Áp dụng thuật toán sắp xếp vào mảng.
• Yêu cầu:
• Viết chương trình sắp xếp mảng sử dụng bubble sort và selection sort.
• So sánh hiệu suất của hai thuật toán bằng cách đo thời gian thực thi.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// bubble sort
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

//  Selection Sort
void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
}

// Hàm in mảng
void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    printf("bubbleSort la: ");
    bubbleSort(s, n);
    printArray(s,n);
    // đo thời gian sử dụng Bubble Sort
    clock_t start_bubble = clock();
    clock_t end_bubble = clock();
    double elapsed_time_bubble = ((double)(end_bubble - start_bubble)) / CLOCKS_PER_SEC;
    printf("thoi gian thuc hien cua Bubble Sort: %f seconds\n", elapsed_time_bubble);

    printf("selectionSort la: ");
    selectionSort(s,n);
    printArray(s,n);
    // đo thời gian sử dụng Selection Sort
    clock_t start_selection = clock();
    clock_t end_selection = clock();
    double elapsed_time_selection = ((double)(end_selection - start_selection)) / CLOCKS_PER_SEC;
    printf("thoi gian thuc hien cua Selection Sort: %f seconds\n", elapsed_time_selection);

    return 0;
}
