import java.lang.System;
import java.util.*;
class Insert{
	public static void main(String args[]){
		int i;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter array size: ");
		int N=sc.nextInt();
		int A[]=new int[N+1];
		System.out.print("Enter array elements: ");
		for (i=0;i<N;i++){
			A[i]=sc.nextInt();
		}
		System.out.print("Enter Element & Position For Insertion: ");
		int key=sc.nextInt();
		int pos=sc.nextInt();
		for (i=N-1;i>=pos-1;i--){
			A[i+1]=A[i];
		}
		A[i+1]=key;
		System.out.print("Array After Insertion: ");
		for (i=0;i<A.length;i++){
			System.out.print(A[i]+" ");
		}
	}
}