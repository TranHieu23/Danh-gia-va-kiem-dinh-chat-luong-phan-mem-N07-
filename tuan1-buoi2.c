#include <stdio.h>

int main() {
    int number;

    // Nhập số nguyên từ người dùng
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &number);

    // Kiểm tra số có phải là số nguyên dương không
    if (number <= 0) {
        printf("So ban nhap khong phai la so nguyen duong.\n");
        return 1; // Kết thúc chương trình với mã lỗi 1 nếu không phải số nguyên dương
    }

    // In ra bảng cửu chương tương ứng với số nhập vào
    printf("Bang cuu chuong cua %d\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
