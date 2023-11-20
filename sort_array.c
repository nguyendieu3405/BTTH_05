/*1. Sắp xếp mảng
Mục tiêu: Áp dụng thuật toán sắp xếp vào mảng.
• Yêu cầu:
• Viết chương trình sắp xếp mảng sử dụng bubble sort và selection sort.
• So sánh hiệu suất của hai thuật toán bằng cách đo thời gian thực thi.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Hàm để hoán đổi giá trị của hai phần tử
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

// Hàm để in mảng
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
/*
// Hàm để đo thời gian thực thi của một hàm sắp xếp
double measureTime(void (*sortFunction)(int[], int), int arr[], int n) {
    clock_t start, end;

    // Lấy thời gian bắt đầu
    start = clock();

    // Gọi hàm sắp xếp
    sortFunction(arr, n);

    // Lấy thời gian kết thúc
    end = clock();

    // Trả về thời gian thực thi tính bằng giây
    return ((double) (end - start)) / CLOCKS_PER_SEC;
}
*/
int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int s[n];
    // Nhập các phần tử của mảng
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    printf("bubbleSort la: ");
    bubbleSort(s, n);
    printArray(s,n);
    printf("selectionSort la: ");
    selectionSort(s,n);
    printArray(s,n);
    return 0;
}
