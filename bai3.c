/******************************************************************************
 * Họ và tên: [Đỗ Minh Tú]
 * MSSV:      [PS48536]
 * Lớp:       [COM108-cs21302]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
int main() {
    int n;
    
    // Nhập số phần tử của mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sắp xếp mảng theo thứ tự giảm dần (sử dụng thuật toán sắp xếp nổi bọt)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Đổi chỗ hai phần tử
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // Xuất kết quả mảng đã sắp xếp
    printf("Mang sau khi sap xep theo thu tu giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
