import java.util.Scanner;
class SquareThread extends Thread {
    int num;
    SquareThread(int num) {
        this.num = num;
    }
    public void run() {
        System.out.println("Square of " + num + " is: " + (num * num));
    }
}
class DigitSumThread extends Thread {
    int num;
    DigitSumThread(int num) {
        this.num = num;
    }
    public void run() {
        int temp = Math.abs(num), sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        System.out.println("Sum of digits of " + num + " is: " + sum);
    }
}
class DriverSquareDigitSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        SquareThread t1 = new SquareThread(num);
        DigitSumThread t2 = new DigitSumThread(num);
        t1.start();
        t2.start();
    }
}
