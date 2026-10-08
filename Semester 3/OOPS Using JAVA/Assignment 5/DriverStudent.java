import java.util.*;
class Student{
	int roll;
	String name;
	double m1,m2,m3;
	Student(int roll,String name,double m1,double m2,double m3){
		this.roll=roll;
		this.name=name;
		this.m1=m1;
		this.m2=m2;
		this.m3=m3;
	}
	void display(){
		System.out.println("Roll No: "+roll);
		System.out.println("Name: "+name);
		System.out.println("Marks In 3 Subjects: "+m1+" "+m2+" "+m3);
	}
}
class Result extends Student{
	double p;
	Result(int roll,String name,double m1,double m2,double m3){
		super(roll,name,m1,m2,m3);
	}
	void display(){
		super.display();
		System.out.println("Percentage: "+this.Percentage());
		this.Grade();
	}
	double Percentage(){
		p=(m1+m2+m3)/3;
		return p;
	}
	void Grade(){
		if (p>=90){ 
		System.out.println("Grade: O");
		}
		else if (p>=80){
			System.out.println("Grade: E");
		}
		else if (p>=70){
			System.out.println("Grade: A");
		}
		else if (p>=60){
			System.out.println("Grade: B");
		}
		else if (p>=50){
			System.out.println("Grade: C");
		}
		else if (p>=40){
			System.out.println("Grade: D");
		}
		else{
			System.out.println("Fail");
		}
	}
}
class DriverStudent{
	public static void main(String[] args){
		int i;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter no. of students: ");
		int n=sc.nextInt();
		Result[] r=new Result[n];
		for (i=0;i<n;i++){
			System.out.println("\nEnter Details of Student "+(i+1)); 
			System.out.print("Enter Roll No.: ");
			int roll=sc.nextInt();
			sc.nextLine();
			System.out.print("Enter Name: ");
			String name=sc.nextLine();
			System.out.print("Enter Marks of 3 subjects: ");
			int m1=sc.nextInt();
			int m2=sc.nextInt();
			int m3=sc.nextInt();
			r[i]=new Result(roll,name,m1,m2,m3);
		}
		System.out.println("\nSTUDENT WITH HIGHEST PERCENTAGE:");
		Result Highest=r[0];
		for (i=0;i<n;i++){
			if (r[i].Percentage() > Highest.Percentage())
				Highest=r[i];
		}
		Highest.display();
	}
}