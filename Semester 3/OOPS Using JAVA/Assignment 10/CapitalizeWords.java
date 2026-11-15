import java.util.Scanner;
class CapitalizeWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a sentence: ");
        String sentence = sc.nextLine();
        String[] words = sentence.split(" ");
        String result = "";
        for (int i = 0; i < words.length; i++) {
            if (words[i].length() > 0) {
                String first = words[i].substring(0, 1).toUpperCase();
                String rest = words[i].substring(1);
                result = result + first + rest + " ";
            }
        }
        System.out.println(result.trim());
    }
}
