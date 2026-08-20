import java.lang.System;
import java.util.*;
class Tax{
		public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter income: ");
		float inc=sc.nextFloat();
		float tax;
		if (inc<150000){
			tax=0;
		}
		else if (inc>=150001 && inc<=300000){
			tax=(inc-150000)*0.10f;
		}
		else if (inc>=300001 && inc<=500000){
			tax=(inc-300000)*0.20f+150000*0.10f;
		}
		else{
			tax=(inc-500000)*0.30f+200000*0.20f+150000*0.10f;
		}
		System.out.println("Tax= "+tax);
	}
}
