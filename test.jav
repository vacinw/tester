import java.util.Scanner;

public class VongLapVaLenhReNhanh {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Nhập số từ người dùng
        System.out.print("Nhập số nguyên dương: ");
        int n = sc.nextInt();

        // Kiểm tra số nguyên dương
        if (n <= 0) {
            System.out.println("Số bạn nhập không hợp lệ. Vui lòng nhập số nguyên dương!");
            return;
        }

        // In ra các số từ 1 đến n
        System.out.println("Các số từ 1 đến " + n + ":");
        for (int i = 1; i <= n; i++) {
            System.out.print(i + " ");
        }

        // Kiểm tra số chẵn hay lẻ
        if (n % 2 == 0) {
            System.out.println("\n" + n + " là số chẵn.");
        } else {
            System.out.println("\n" + n + " là số lẻ.");
        }
    }
}
