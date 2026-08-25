import java.util.*;
class MatrixSum{
	public static void Input(int A[][],int r,int c){
		Scanner sc=new Scanner(System.in);
		for (int i=0;i<r;i++){
			for (int j=0;j<c;j++){
				A[i][j]=sc.nextInt();
			}
		}
	}
	public static void Display(int A[][],int r,int c){
		for (int i=0;i<r;i++){
			for (int j=0;j<c;j++){
				System.out.print(A[i][j]+" ");
			}
			System.out.println();
		}
	}
	public static void Sum(int A1[][],int A2[][],int A3[][],int r,int c){
		for (int i=0;i<r;i++){
			for (int j=0;j<c;j++){
				A3[i][j]=A1[i][j]+A2[i][j];
			}
		}
	}
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter row and col: ");
		int r=sc.nextInt();
		int c=sc.nextInt();
		int A1[][]=new int[r][c];
		int A2[][]=new int[r][c];
		int A3[][]=new int[r][c];
		System.out.println("Enter 1st Matrix: ");
		Input(A1,r,c);
		System.out.println("1st Matrix:");
		Display(A1,r,c);
		System.out.println("Enter 2nd Matrix: ");
		Input(A2,r,c);
		System.out.println("2nd Matrix:");
		Display(A2,r,c);
		Sum(A1,A2,A3,r,c);
		System.out.println("Resultant Matrix:");
		Display(A3,r,c);
	}
}