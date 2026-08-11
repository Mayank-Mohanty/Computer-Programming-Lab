import java.lang.System;
import java.util.*;
class Triangle{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Side1");
		int a=sc.nextInt();
		System.out.println("Enter Side2");
		int b=sc.nextInt();
		System.out.println("Enter Side3");
		int c=sc.nextInt();
		float s=(a+b+c)/2.0f;
		float area=(float)Math.sqrt(s*(s-a)*(s-b)*(s-c));
		System.out.println("Area=" + area);
	}
}