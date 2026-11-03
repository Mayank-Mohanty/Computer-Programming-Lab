import java.lang.*;
import java.util.*;
class ArmstrongThread implements Runnable {
    Thread t;
	int num;
	ArmstrongThread(String name,int n){
		num=n;
		t = new Thread(this,name);
		t.start();
	}
	public void run(){
        int temp = num, sum = 0, count=0;
		while (temp > 0){
			count+=1;
			temp/=10;
		}
		temp=num;
        while (temp > 0) {
            sum += Math.pow(temp % 10, count);
            temp/=10;
        }
        if (sum == num){
			System.out.println(num + " is an Armstrong number.");
		}
        else{
			System.out.println(num + " is not an Armstrong number.");
		}
    }
}
class DriverArmstrong{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
		ArmstrongThread nt = new ArmstrongThread("Child Thread",num);
	}
}