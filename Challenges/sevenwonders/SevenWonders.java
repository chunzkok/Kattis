import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
import java.lang.Math;
import java.util.Arrays;

public class SevenWonders {
	public static void main(String[] args) {
		Map<Character, Integer> d = new HashMap<Character, Integer>(Map.of('T', 0, 'C', 0, 'G', 0));
		Scanner s = new Scanner(System.in);
		String line = s.nextLine().strip();
		for (int i = 0; i < line.length(); i++) {
			char c = line.charAt(i);
			d.put(c, d.get(c) + 1);
		}
		Integer[] vals = d.values().toArray(new Integer[d.size()]);
		int res = 0;
		int valid_sets = Integer.MAX_VALUE;
		for (Integer val : vals) {
			res += val * val;
			valid_sets = val < valid_sets ? val : valid_sets;
		}
		res += valid_sets * 7;
		System.out.println(Integer.toString(res));
	}
}
