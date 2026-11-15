import java.util.Scanner;
class TableThread extends Thread {
    int num;
    TableThread(int num) {
        this.num = num;
    }
    public void run() {
        for (int i = 1; i <= 10; i++) {
            System.out.println(num + " x " + i + " = " + (num * i));
        }
    }
}
class FactorialThread extends Thread {
    int num;
    FactorialThread(int num) {
        this.num = num;
    }
    public void run() {
        long fact = 1;
        for (int i = 1; i <= num; i++) {
            fact = fact * i;
        }
        System.out.println("Factorial of " + num + " is: " + fact);
    }
}
class DriverTableFactorial {
    public static void main(String[] args) throws InterruptedException {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        TableThread t1 = new TableThread(num);
        FactorialThread t2 = new FactorialThread(num);
        t1.start();
        t1.join();
        t2.start();
        t2.join();
    }
}
