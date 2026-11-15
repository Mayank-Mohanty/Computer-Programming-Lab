import java.util.Scanner;
class SumThread extends Thread {
    int start, end;
    static int globalSum = 0;
    SumThread(int start, int end) {
        this.start = start;
        this.end = end;
    }
    public void run() {
        int localSum = 0;
        for (int i = start; i <= end; i++) {
            localSum += i;
        }
        // Synchronized block: only one thread updates globalSum at a time
        synchronized (SumThread.class) {
            globalSum += localSum;
        }
    }
}
class DriverNaturalSum {
    public static void main(String[] args) throws InterruptedException {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();
        System.out.print("Enter number of threads (m): ");
        int m = sc.nextInt();
        SumThread[] t = new SumThread[m];
        int part = n / m;
        int start = 1;
        for (int i = 0; i < m; i++) {
            int end = start + part - 1;
            if (i == m - 1) {
                end = n; // Last thread takes any remaining numbers
            }
            t[i] = new SumThread(start, end);
            t[i].start();
            start = end + 1;
        }
        // Wait for all threads to finish
        for (int i = 0; i < m; i++) {
            t[i].join();
        }
        System.out.println("Total Sum = " + SumThread.globalSum);
    }
}
