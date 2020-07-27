import java.util.*;
public class VanyaAndLanterns {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int l = sc.nextInt();
        ArrayList<Integer> list = new ArrayList<Integer>();
        for (int i=0; i<n; i++) {
            list.add(sc.nextInt());
        }
        Collections.sort(list, Collections.reverseOrder());
        int maxdist = Integer.MAX_VALUE;
        for (int i=0; i<list.size()-1; i++) {
            if (list.get(i) - list.get(i+1) > maxdist) {
                maxdist = list.get(i) - list.get(i+1);
            }
        }
        System.out.println(max(maxdist, Math.max(list.get(0)-0), l-list.get(list.size()-1)));
        sc.close();
    }
}