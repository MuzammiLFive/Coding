import java.util.Scanner;
public class GeorgeAndAccomodation {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), count=0;
        while (N!=0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            if (b-a >=2) {
                count++;
            }
            N--;
        }
        System.out.println(count);
        sc.close();
    }
}