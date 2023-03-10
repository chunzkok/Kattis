import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class Vertices{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		while (s.hasNextLine()) {
			int n = Integer.parseInt(s.nextLine());
			if (n == -1) return;
			List<List<Integer>> d = new ArrayList<List<Integer>>();
			for (int i = 0; i < n; i++) {
				int[] connected = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
				List<Integer> ls = new ArrayList<Integer>();
				for (int j = 0; j < n; j++) {
					if (connected[j] == 1) ls.add(j);
				}
				d.add(ls);
			}
			List<Integer> weak = new ArrayList<Integer>();
			for (int i = 0; i < n; i++) {
				List<Integer> og = d.get(i);
				boolean found = false;
				for (Integer num1 : og) {
					for (Integer num2 : d.get(num1)) {
						if (og.contains(num2)) {
							found = true;
							break;
						}
					}
					if (found) break;
				}
				if (!found) weak.add(i);
			}
			String res = weak.stream().map(String::valueOf).collect(java.util.stream.Collectors.joining(" "));
			System.out.println(res);
		}
	}
}
