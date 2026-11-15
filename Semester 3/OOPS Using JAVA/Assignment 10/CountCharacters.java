import java.util.Scanner;
class CountCharacters {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("Total number of characters: " + str.length());
    }
}
