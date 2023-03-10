import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
import java.util.List;

public class Datum{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		Map<Integer, String> d = new HashMap<Integer, String>(Map.of(0, "Thursday", 1, "Friday", 2, "Saturday", 3, "Sunday", 4, "Monday", 5, "Tuesday", 6, "Wednesday"));
		int[] DM = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		System.out.println(d.get((daysSinceJan(DM[1]) + DM[0] - 1)%7));

	}

	private static int monthDays(int month) {
		List<Integer> evens = java.util.Arrays.asList(1,3,5,7,8,10,12);
		if (evens.contains(month)) return 31;
		else if (month == 2) return 28;
		else return 30;
	}

	private static int daysSinceJan(int month) {
		int count = 0;
		for (int i = 1; i < month; i++) count += monthDays(i);
		return count;
	}
}
