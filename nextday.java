import java.util.Scanner;

public class nextday {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Nhập ngày: ");
        int day = scanner.nextInt();
        System.out.println("Nhập tháng: ");
        int month = scanner.nextInt();
        System.out.println("Nhập năm: ");
        int year = scanner.nextInt();

        int[] nextDate = nextDate(day, month, year);
        System.out.printf("Ngày tiếp theo của %d/%d/%d là %d/%d/%d.\n", day, month, year, nextDate[0], nextDate[1], nextDate[2]);
    }

    public static boolean isLeapYear(int year) {
        return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
    }

    public static int[] nextDate(int day, int month, int year) {
        int[] daysInMonth = {31, isLeapYear(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (day < daysInMonth[month - 1]) {
            return new int[]{day + 1, month, year};
        } else if (month < 12) {
            return new int[]{1, month + 1, year};
        } else {
            return new int[]{1, 1, year + 1};
        }
    }
}
