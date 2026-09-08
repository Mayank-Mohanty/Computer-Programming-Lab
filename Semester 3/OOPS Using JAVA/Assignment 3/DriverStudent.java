import java.lang.System;
import java.util.*;
class Student {
    String name;
    int roll_no;
    String branch;
    void inputDetails(){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter student name: ");
        name=sc.nextLine();
		System.out.print("Enter branch: ");
        branch=sc.nextLine();
        System.out.print("Enter roll number: ");
        roll_no=sc.nextInt();
    }
    void displayDetails(){
        System.out.println("\nStudent Details-");
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + roll_no);
        System.out.println("Branch: " + branch);
    }
}
class DriverStudent{
    public static void main(String[] args){
        Student s1=new Student();
        s1.inputDetails();
        s1.displayDetails();
    }
}