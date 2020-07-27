import java.util.Scanner;
public class IQTest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), p=0, q=0, s=0, t=0;
        for (int i=0; i<N; i++) {
            int x = sc.nextInt();
            if (x%2 != 0) {
                p = i+1;
                s++;
            }
            else {
                q = i+1;
                t++;
            }
        }
        if (s==1) {
            System.out.println(p);
        }
        else {
            System.out.println(q);
        }
        sc.close();
    }
}