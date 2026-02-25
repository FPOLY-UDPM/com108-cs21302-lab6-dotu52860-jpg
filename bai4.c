/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
int main() {
    int n, m;
    
    // Nhập số hàng và số cột của ma trận
    printf("Nhap so hang va so cot cua ma tran: ");
    scanf("%d %d", &n, &m);
    
    int matrix[n][m];
    
    // Nhập các phần tử của ma trận
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Tính bình phương các phần tử trong ma trận
    printf("Ma tran binh phuong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j] * matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
