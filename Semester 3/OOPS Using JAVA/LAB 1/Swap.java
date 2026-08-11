import java.lang.System;
class Swap{
	public static void main(String args[]){
	int a=7,b=3;
	System.out.println("Before Swap a=" + a + " b=" + b);
	a=a+b;
	b=a-b;
	a=a-b;
	System.out.println("After Swap a=" + a + " b=" + b);
	}
}