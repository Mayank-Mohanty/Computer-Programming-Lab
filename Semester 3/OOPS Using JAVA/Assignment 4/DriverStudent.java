import java.lang.System;
import java.util.*;
class Student{
    int regNo;
    String stdName;
    String branch;
    double CGPA;
    void accept(){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter Registration Number: ");
        regNo=sc.nextInt();
        sc.nextLine();
        System.out.print("Enter Student Name: ");
        stdName=sc.nextLine();
        System.out.print("Enter Branch: ");
        branch=sc.nextLine();
        System.out.print("Enter CGPA: ");
        CGPA=sc.nextDouble();
    }
    void display(){
        System.out.println("Registration No.: " + regNo);
        System.out.println("Student Name: " + stdName);
        System.out.println("Branch: " + branch);
        System.out.println("CGPA: " + CGPA);
    }
}
class DriverStudent{
    public static void main(String[] args){
        Student[] s=new Student[5];
        for (int i=0;i<5;i++){
            s[i]=new Student();
            System.out.println("\nEnter details of Student " + (i+1));
            s[i].accept();
        }
        int highest=0;
        for (int i=1;i<5;i++){
            if (s[i].CGPA > s[highest].CGPA){
                highest=i;
            }
        }
        System.out.println("\nSTUDENT WITH HIGHEST CGPA:");
        s[highest].display();
    }
}
