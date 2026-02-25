/******************************************************************************
 * Họ và tên: [Đỗ Minh Tú]
 * MSSV:      [PS48536]
 * Lớp:       [COM108-cs21302]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
int main() {
    int n, sum = 0, count = 0;
    
    // Nhập số phần tử của mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Tính tổng và đếm số phần tử chia hết cho 3
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
            count++;
        }
    }
    
    // Tính trung bình và xuất kết quả
    if (count > 0) {
        float average = (float)sum / count;
        printf("Trung binh tong cac so chia het cho 3: %.2f\n", average);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    }
    
    return 0;
}

