import java.util.Scanner;
public class CapsLock {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        char[] ans = str.toCharArray();
        boolean flag = true;
        /*if (ans[0] >= 96) {
            ans[0] = (char) (ans[0]-32);
        }*/
        for (int i=1; i<ans.length; i++) {
            if (ans[i] >= 96) {
                flag = false;
                break;
            }
            ans[i] = (char)(ans[i] + 32);
        }
        if (flag) {
            if (ans[0] >= 96)
                ans[0] = (char) (ans[0]-32);
            else
                ans[0] = (char) (ans[0]+32);
            System.out.println(ans);
        }
        else
            System.out.println(str);
        sc.close();
    }
}