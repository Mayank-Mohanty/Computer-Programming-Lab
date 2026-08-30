import java.util.Scanner;
class JaggedArray {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int a[][]=new int[3][];
        for (int i=0;i<a.length;i++) {
            System.out.print("Enter number of elements in row " + (i+1) + ": ");
            int n=sc.nextInt();
            a[i]=new int[n];
            System.out.println("Enter elements:");
            for (int j=0;j<a[i].length;j++) {
                a[i][j]=sc.nextInt();
            }
        }
        System.out.println("Jagged Array:");
        for (int i=0;i<a.length;i++) {
            for (int j=0;j<a[i].length;j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        }
    }
}