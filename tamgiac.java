import java.util.Scanner;

public class tamgiac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Nhập cạnh a: ");
        int a = scanner.nextInt();
        System.out.println("Nhập cạnh b: ");
        int b = scanner.nextInt();
        System.out.println("Nhập cạnh c: ");
        int c = scanner.nextInt();
        System.out.println(classifyTriangle(a, b, c));
    }

    public static String classifyTriangle(int a, int b, int c) {
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c) {
                return "Equilateral";
            } else if (a == b || b == c || c == a) {
                return "Isosceles";
            } else {
                return "Scalene";
            }
        } else {
            return "NotATriangle";
        }
    }
}
