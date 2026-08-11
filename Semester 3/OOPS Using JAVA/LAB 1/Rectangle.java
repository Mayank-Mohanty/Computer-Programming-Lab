import java.lang.System;
import java.util.*;
class Rectangle{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Length:");
		int length=sc.nextInt();
		System.out.println("Enter Breadth:");
		int breadth=sc.nextInt();
		int area=length*breadth,perimeter=2*(length+breadth);
		System.out.println("Area= " + area + " Perimeter=" + perimeter);
	}
}