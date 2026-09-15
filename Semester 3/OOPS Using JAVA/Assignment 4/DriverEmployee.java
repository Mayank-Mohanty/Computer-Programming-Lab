import java.lang.System;
import java.util.*;
class Employee{
    int empid;
    String ename;
    String dept;
    double sal;
    Scanner sc=new Scanner(System.in);
    void getData(){
        System.out.print("Enter Employee ID: ");
        empid=sc.nextInt();
		sc.nextLine();
        System.out.print("Enter Employee Name: ");
        ename=sc.nextLine();
        System.out.print("Enter Department: ");
        dept=sc.nextLine();
        System.out.print("Enter Salary: ");
        sal=sc.nextDouble();
    }
    void putData(){
        System.out.println("Employee ID: " + empid);
        System.out.println("Employee Name: " + ename);
        System.out.println("Department: " + dept);
        System.out.println("Salary: " + sal);
    }
}
class DriverEmployee{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter number of employees: ");
        int n=sc.nextInt();
        Employee[] emp=new Employee[n];
        for (int i=0;i<n;i++){
            System.out.println("\nEnter details of Employee " + (i+1));
            emp[i]=new Employee();
            emp[i].getData();
        }
        System.out.println("\nEMPLOYEE DETAILS: ");
        for (int i=0;i<n;i++) {
            System.out.println("\nEmployee " + (i+1));
            emp[i].putData();
        }
    }
}
