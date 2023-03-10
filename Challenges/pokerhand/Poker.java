import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
import java.util.Collections;

public class Poker {
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		Map<Character, Integer> d = new HashMap();
		String[] cards = s.nextLine().split(" ");
		for (String card : cards) {
			Character rank = card.charAt(0);
			Integer count = d.containsKey(rank) ? d.get(rank) : 0;
			d.put(rank, ++count);
		}
		Integer max_num = Collections.max(d.values());
		System.out.println(Integer.toString(max_num));
	}
}
