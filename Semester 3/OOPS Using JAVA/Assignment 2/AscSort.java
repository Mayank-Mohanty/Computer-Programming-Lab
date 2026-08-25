import java.lang.System;
import java.util.*;
class AscSort{
	public static void Display(int A[]){
		for (int i=0;i<A.length;i++){
			System.out.print(A[i]+" ");
		}
		System.out.println();
	}
	public static int Sort(int A[]){
		int comp=0,temp;
		for (int i=0;i<A.length;i++){
			for (int j=i+1;j<A.length;j++){
				comp++;
				if (A[i]>A[j]){
					temp=A[i];
					A[i]=A[j];
					A[j]=temp;
				}
			}
		}
		return comp;
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
		System.out.print("Before Sorting: ");
		Display(A);
		int comp=Sort(A);
		System.out.print("After Sorting: ");
		Display(A);
		System.out.println("No. of comparisons: "+comp);
		System.out.println("Smallest No.: "+A[0]+" Largest No.: "+A[N-1]);
	}
}
