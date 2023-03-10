import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class Boat{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Set<String> replaced = new HashSet<String>();
		int[] PN = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		for (int i = 0; i < PN[1]; i++) {
			replaced.add(s.nextLine().strip());
			if (replaced.size() == PN[0]) {
				System.out.println(Integer.toString(i+1));
				return;
			}
		}
		System.out.println("paradox avoided");
	}
}
