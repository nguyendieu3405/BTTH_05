/*1. Sắp xếp mảng
Mục tiêu: Áp dụng thuật toán sắp xếp vào mảng.
• Yêu cầu:
• Viết chương trình sắp xếp mảng sử dụng bubble sort và selection sort.
• So sánh hiệu suất của hai thuật toán bằng cách đo thời gian thực thi.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Bubble Sort
void bubbleSort(int a[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(int a[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }
        swap(&a[min_idx], &a[i]);
    }
}

// Hàm để in mảng
void printArray(int a[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
/*
// Hàm để đo thời gian  của một hàm sắp xếp
double measureTime(void (*sortFunction)(int[], int), int a[], int n) {
    clock_t start, end;
    start = clock();
    sortFunction(a, n);
    end = clock();
    return ((double) (end - start)) / CLOCKS_PER_SEC;
}
*/
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
    printf("selectionSort la: ");
    selectionSort(s,n);
    printArray(s,n);
    return 0;
}
