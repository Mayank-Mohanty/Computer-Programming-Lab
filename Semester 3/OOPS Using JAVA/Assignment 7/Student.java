package btech;
public class Student{
    int roll,m1,m2,m3;
    String name;
    public Student(int roll,String name,int m1,int m2,int m3){
        this.roll=roll;
        this.name=name;
        this.m1=m1;
        this.m2=m2;
        this.m3=m3;
    }
    int total(){
        return (m1+m2+m3);
    }
    double percentage(){
        return (m1+m2+m3)/3.0;
    }
    public void display(){
        System.out.println("\nRoll No.: " + roll);
        System.out.println("Name: " + name);
        System.out.println("-----MARKS-----");
        System.out.println("Sub1: " + m1);
        System.out.println("Sub2: " + m2);
        System.out.println("Sub3: " + m3);
        System.out.println("Total: " + total());
        System.out.println("Percentage: " + percentage() + "%");
        System.out.println("---------------");
    }
}
