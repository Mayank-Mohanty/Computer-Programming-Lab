import java.lang.System;
import java.util.*;
class Patient{
	int id;
    String name;
    int age;
    Patient(int id,String name,int age){
        this.id=id;
        this.name=name;
        this.age=age;
    }
    void display(){
        System.out.println("Patient ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}
class DriverPatient{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter number of patients: ");
        int n=sc.nextInt();
        Patient[] p=new Patient[n];
        for (int i=0;i<n;i++){
            System.out.println("\nEnter details of Patient " + (i+1));
            System.out.print("Enter Patient ID: ");
            int id=sc.nextInt();
            sc.nextLine();
            System.out.print("Enter Patient Name: ");
            String name=sc.nextLine();
            System.out.print("Enter Age: ");
            int age=sc.nextInt();
            p[i]=new Patient(id, name, age);
        }
        System.out.print("\nEnter age limit: ");
        int ageLimit=sc.nextInt();
        int count=0;
        System.out.println("\nPATIENTS OLDER THAN " + ageLimit + ": ");
        for (int i=0;i<n;i++){
            if (p[i].age > ageLimit){
                p[i].display();
                System.out.println();
                count++;
            }
        }
        System.out.println("Number of patients older than " + ageLimit + " = " + count);
    }
}
