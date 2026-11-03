import java.util.*;
import btech.Student;
class Test{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("\nEnter Roll No.: ");
        int roll=sc.nextInt();
        sc.nextLine();
        System.out.print("Enter Name: ");
        String name=sc.nextLine();
        System.out.print("Enter Marks in 3 Subjects: ");
        int m1=sc.nextInt();
        int m2=sc.nextInt();
        int m3=sc.nextInt();
        Student ob = new Student(roll, name, m1, m2, m3);
        ob.display();
    }
}
