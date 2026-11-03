import java.lang.*;
import java.util.*;
class PalindromeChecker extends Thread {
    int num;
    PalindromeChecker(int n) {
		num = n;
	}
    public void run() {
		System.out.println("Child Executing...");
        int temp = num, rev = 0;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        System.out.println("Palindrome Check: " + (rev == num));
    }
}
class PrimePalindrome {
    public static void main(String[] args) {
		System.out.println("Main Executing...");
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        PalindromeChecker ob = new PalindromeChecker(num);
		ob.start();
        int flag=1;
		for (int i=2;i<=num/2;i++){
			if (num % i == 0){
				flag=0;
				break;
			}
		}
		if (flag == 1){
			System.out.println(num + " Is A Prime Number");
		}
		else{
			System.out.println(num + " Is A Composite Number");
		}
    }
}
