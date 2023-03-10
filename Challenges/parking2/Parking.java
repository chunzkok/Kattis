import java.util.Scanner;
import java.util.Arrays;

public class Parking {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int cases = Integer.parseInt(s.nextLine());
		for (int c = 0; c < cases; c++) {
			int stores = Integer.parseInt(s.nextLine());
			int[] locs = Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			Arrays.sort(locs);
			System.out.println(Integer.toString((locs[stores-1] - locs[0])*2));
		}
	}
}
