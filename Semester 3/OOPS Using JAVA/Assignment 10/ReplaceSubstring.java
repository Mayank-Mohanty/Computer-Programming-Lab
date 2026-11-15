import java.util.Scanner;
class ReplaceSubstring {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the main string: ");
        String str = sc.nextLine();
        System.out.print("Enter the substring to replace: ");
        String oldSub = sc.nextLine();
        System.out.print("Enter the new string: ");
        String newSub = sc.nextLine();
        String updated = str.replace(oldSub, newSub);
        System.out.println("Updated string: " + updated);
    }
}
