import java.util.*;

public class Translation {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        String b = sc.nextLine();
        String ans = "YES";
        int j = b.length()-1;
        for (int i=0; i<a.length(); i++) {
            if (j<0) {
                ans = "NO";
                break;
            }
            if (a.charAt(i) != b.charAt(j))
                ans = "NO";
            j--;
        }
        System.out.println(ans);
        sc.close();
    }
}