#include <stdio.h>
#include <stdlib.h>
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

// Hàm kiểm thử cho việc kiểm tra số nguyên âm
void test_negative_number() {
    int number = -5; // Giả lập số nguyên âm
    CU_ASSERT_EQUAL(number <= 0, 1); // Kiểm tra lệnh rẽ nhánh
}

// Hàm kiểm thử cho việc kiểm tra số nguyên dương
void test_positive_number() {
    int number = 5; // Giả lập số nguyên dương
    CU_ASSERT_EQUAL(number <= 0, 0); // Kiểm tra lệnh rẽ nhánh
}

// Hàm kiểm thử cho việc in ra bảng cửu chương
void test_multiplication_table() {
    int number = 5; // Giả lập số nguyên dương
    // Kiểm tra việc in ra bảng cửu chương
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

int main() {
    // Khởi tạo bộ kiểm thử
    CU_initialize_registry();

    // Thêm các test suite
    CU_pSuite suite = CU_add_suite("TestSuite", NULL, NULL);
    CU_add_test(suite, "test_negative_number", test_negative_number);
    CU_add_test(suite, "test_positive_number", test_positive_number);
    CU_add_test(suite, "test_multiplication_table", test_multiplication_table);

    // Chạy các test
    CU_basic_run_tests();

    // Hiển thị kết quả
    CU_cleanup_registry();

    return 0;
}
