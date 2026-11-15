import java.util.Scanner;
class PalindromeThread extends Thread {
    int num;
    PalindromeThread(int num) {
        this.num = num;
    }
    public void run() {
        int temp = num, rev = 0;
        while (temp > 0) {
            rev = (rev * 10) + (temp % 10);
            temp /= 10;
        }
        if (num >= 0 && rev == num) {
            System.out.println(num + " is a Palindrome number.");
        }
        else {
            System.out.println(num + " is not a Palindrome number.");
        }
    }
}
class DriverPrimePalindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        PalindromeThread t = new PalindromeThread(num);
        t.start();
        if (num <= 1) {
            System.out.println(num + " is neither Prime nor Composite.");
        }
        else {
            boolean isPrime = true;
            for (int i = 2; i <= Math.sqrt(num); i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                System.out.println(num + " is a Prime number.");
            } else {
                System.out.println(num + " is a Composite number.");
            }
        }
    }
}
