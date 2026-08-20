import java.lang.System;
import java.util.*;
class Factorial{
		public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number: ");
		int num=sc.nextInt();
		long fact=1;
		while(num!=0){
			fact*=num;
			num--;
		}
		System.out.println("Factorial= "+fact);
	}
}
