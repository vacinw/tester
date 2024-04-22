public class App {
    public static void main(String[] args) throws Exception {
        System.out.println(sayHello());

        int number = 17;
        boolean isPrime = checkPrime(number);

        // Kiểm tra và in kết quả
        if (isPrime) {
            System.out.println(number + " là số nguyên tố.");
        } else {
            System.out.println(number + " không là số nguyên tố.");
        }
    }

    public static String sayHello() {
        return "Haha";
    }

    public static boolean checkPrime(int number){
        if (number <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(number); i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
}