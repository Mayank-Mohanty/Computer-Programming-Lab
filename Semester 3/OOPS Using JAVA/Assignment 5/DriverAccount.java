import java.util.*;
class Account{
	String cname;
	int acc_no;
	Account(String n,int a){
		cname=n;
		acc_no=a;
	}
	void display(){
		System.out.println("\nCustomer Name: "+cname);
		System.out.println("Account No.: "+acc_no);
	}
}
class Savings_Account extends Account{
	double min_bal,saving_bal;
	Savings_Account(String n,int a,double m,double s){
		super(n,a);
		min_bal=m;
		saving_bal=s;
	}
	void show(){
		super.display();
		System.out.println("Minimum Balance: "+min_bal);
		System.out.println("Savings Balance: "+saving_bal);
	}
}
class Account_details extends Savings_Account{
	double deposit,withdrawal;
	Account_details(String n,int a,double m,double s,double d,double w){
		super(n,a,m,s);
		deposit=d;
		withdrawal=w;
	}
	void show1(){
		super.show();
		System.out.println("Deposit Amount: "+deposit);
		System.out.println("Withdrawal Amount: "+withdrawal);
	}
}
class DriverAccount{
	public static void main(String[] args){
		int i;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter no. of Accounts: ");
		int n=sc.nextInt();
		Account_details[] a=new Account_details[n];
		for (i=0;i<n;i++){
			System.out.println("\nEnter Details of Account "+(i+1)); 
			System.out.print("Enter Account No.: ");
			int acc_no=sc.nextInt();
			sc.nextLine();
			System.out.print("Enter Customer Name: ");
			String cname=sc.nextLine();
			System.out.print("Enter Minimum Balance: ");
			double m=sc.nextDouble();
			System.out.print("Enter Savings Balance: ");
			double s=sc.nextDouble();
			System.out.print("Enter Deposit Amount: ");
			double d=sc.nextDouble();
			System.out.print("Enter Withdrawal Amount: ");
			double w=sc.nextDouble();
			a[i]=new Account_details(cname,acc_no,m,s,d,w);
		}
		System.out.println("\nACCOUNT DETAILS:");
		for (i=0;i<n;i++){
			a[i].show1();
		}
	}
}