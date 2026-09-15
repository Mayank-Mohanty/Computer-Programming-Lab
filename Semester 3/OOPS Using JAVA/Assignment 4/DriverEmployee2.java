import java.lang.System;
import java.util.*;
class Employee{
    int id;
    String name;
    double salary;
    static String compName="XYZ Tech";
    Employee(){
        id=0;
        name=null;
        salary=0.0;
    }
    Employee(int id,String name,double salary){
        this.id=id;
        this.name=name;
        this.salary=salary;
    }
    void display(){
        System.out.println("Employee ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Salary: " + salary);
        System.out.println("Company: " + compName);
    }
}
class DriverEmployee2{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter number of employees: ");
        int n=sc.nextInt();
        Employee[] emp=new Employee[n];
        for (int i=0;i<n;i++){
            System.out.println("\nEnter details of Employee " + (i+1));
            System.out.print("Enter Employee ID: ");
            int id = sc.nextInt();
            sc.nextLine();
            System.out.print("Enter Name: ");
            String name=sc.nextLine();
            System.out.print("Enter Salary: ");
            double salary=sc.nextDouble();
            emp[i]=new Employee(id,name,salary);
        }
        System.out.println("\nEMPLOYEE DETAILS:");
        for (int i=0;i<n;i++) {
            System.out.println("\nEmployee " + (i+1));
            emp[i].display();
        }
    }
}
