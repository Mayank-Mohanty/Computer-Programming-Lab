import java.util.*;
class Time{
		public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter time in seconds: ");
		int time=sc.nextInt();
		int h,m,s;
		h=time/3600;
		m=(time%3600)/60;
		s=time%60;
		System.out.println("OUTPUT: "+h+" Hour: "+m+" Minute: "+s+" Seconds");
	}
}
