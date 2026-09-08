import java.lang.System;
import java.util.*;
class Employee{
	public static void display(int id,String name,int dno,int sal){
		System.out.println("ID: "+id);
		System.out.println("Name: "+name);
		System.out.println("Dept. No.: "+dno);
		System.out.println("Salary: "+sal);
		if (sal>50000)
			System.out.println("Above Threshold Salary");
		else
			System.out.println("Below Threshold Salary");
	}
	public static void main(String args[]){
		int id,dno,sal;
		String name;
		if (args.length<4){
			System.out.println("Insufficient Arguments");
			return;
		}
		id=Integer.parseInt(args[0]);
		name=args[1];
		dno=Integer.parseInt(args[2]);
		sal=Integer.parseInt(args[3]);
		display(id,name,dno,sal);
	}
}