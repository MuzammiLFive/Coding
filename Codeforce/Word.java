import java.util.Scanner;

public class Word {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int lower = 0, upper = 0;
        for (int i=0; i<str.length(); i++) {
            if (str.charAt(i)>=97) {
                lower++;
            }
            else {
                upper++;
            }
        }
        String ans;
        if (lower>=upper) {
            ans = str.toLowerCase();
        }
        else {
            ans = str.toUpperCase();
        }
        System.out.println(ans);
        sc.close();
    }
}