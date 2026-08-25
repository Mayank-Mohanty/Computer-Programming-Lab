import java.lang.System;
import java.util.*;
class Array{
	public static int SEARCH(int A[],int E,int N){
		for (int i=0;i<A.length;i++){
			if (A[i]==E){
				return i+1;
			}
		}
		return -1;
	}
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter array size: ");
		int N=sc.nextInt();
		int A[]=new int[N];
		System.out.print("Enter array elements: ");
		for (int i=0;i<A.length;i++){
			A[i]=sc.nextInt();
		}
		System.out.print("Enter element to search: ");
		int E=sc.nextInt();
		int v=SEARCH(A,E,N);
		if (v==-1){
			System.out.println("Element Not Found");
		}
		else{
			System.out.print("Element Found At Position: "+v);
		}
	}
}
