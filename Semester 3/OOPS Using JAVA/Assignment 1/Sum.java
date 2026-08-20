import java.lang.System;
import java.util.*;
class Sum{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter two floating point numbers: ");
		float f1=sc.nextFloat();
		float f2=sc.nextFloat();
		float sum=f1+f2;
		System.out.println("Sum= "+sum);
	}
}