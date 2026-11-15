import java.util.Scanner;
class NameInitials {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your full name: ");
        String fullName = sc.nextLine().trim();
        String[] parts = fullName.split(" ");
        String initials = "";
        for (int i = 0; i < parts.length; i++) {
            if (parts[i].length() > 0) {
                initials = initials + Character.toUpperCase(parts[i].charAt(0)) + ".";
            }
        }
        System.out.println("Initials: " + initials);
    }
}
