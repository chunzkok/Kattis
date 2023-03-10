import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Arrays;
import java.util.Collections;

public class Sync{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		while (s.hasNextLine()) {
			int n = Integer.parseInt(s.nextLine());
			List<Integer> ls1 = new ArrayList<Integer>();
			List<Integer> ls2 = new ArrayList<Integer>();
			for (int i = 0; i < n; i++) ls1.add(Integer.valueOf(s.nextLine()));
			for (int i = 0; i < n; i++) ls2.add(Integer.valueOf(s.nextLine()));
			List<Integer> ogLs1 = new ArrayList<Integer>(ls1);
			Collections.sort(ls1);
			Collections.sort(ls2);
			Map<Integer, Integer> d = new HashMap<Integer, Integer>();
			for (int i = 0; i < n; i++) d.put(ls1.get(i), ls2.get(i));
			for (int i = 0; i < n; i++) System.out.println(d.get(ogLs1.get(i)));
			System.out.println();
		}
	}
}
