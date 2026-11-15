import java.util.Scanner;
class ArmstrongTask implements Runnable {
    int num;
    ArmstrongTask(int num) {
        this.num = num;
    }
    public void run() {
        int temp = num, sum = 0;
        int digits = String.valueOf(num).length();
        while (temp > 0) {
            sum += (int) Math.pow(temp % 10, digits);
            temp /= 10;
        }
        if (num >= 0 && sum == num) {
            System.out.println(num + " is an Armstrong number.");
        } else {
            System.out.println(num + " is not an Armstrong number.");
        }
    }
}
public class DriverArmstrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        Thread t = new Thread(new ArmstrongTask(num), "Child Thread");
        t.start();
    }
}
