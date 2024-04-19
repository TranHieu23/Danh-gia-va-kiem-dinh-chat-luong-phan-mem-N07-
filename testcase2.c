#include <stdio.h>
#include <stdlib.h>

int test_negative_number_input() {
    // Giả lập việc nhập một số nguyên âm từ người dùng
    printf("Nhap mot so nguyen duong: ");
    int number = -5; // Giả lập số nguyên âm
    if (number <= 0) {
        printf("So ban nhap khong phai la so nguyen duong.\n");
        return 1; // Kết thúc chương trình với mã lỗi 1 nếu không phải số nguyên dương
    }
    return 0;
}

int test_positive_number_input() {
    // Giả lập việc nhập một số nguyên dương từ người dùng
    printf("Nhap mot so nguyen duong: ");
    int number = 5; // Giả lập số nguyên dương
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

int main() {
    // Chạy các ca kiểm thử
    int result_1 = test_negative_number_input();
    int result_2 = test_positive_number_input();
    
    // In kết quả của các ca kiểm thử
    printf("Ket qua kiem thu test_negative_number_input: %d\n", result_1);
    printf("Ket qua kiem thu test_positive_number_input: %d\n", result_2);

    return 0;
}
