/*3. Ứng dụng thực tế: Tính điểm trung bình
Mục tiêu: Áp dụng mảng vào bài toán thực tế.
• Yêu cầu:
• Viết chương trình nhập điểm của sinh viên trong một lớp học vào một mảng.
• Tính và in ra điểm trung bình của lớp*/

#include<stdio.h>

int main(){
    int a[100],n,i;
    printf("nhap so hs trong lop: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    double sum =0,average_score;
    for(i=1;i<=n;i++){
        sum+=a[i];
        average_score = sum/n;
    }
    printf("Diem trung binh la: %.2lf",average_score);
    return 0;
}