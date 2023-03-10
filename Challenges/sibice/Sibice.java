import java.util.Scanner;
import java.util.Arrays;
import java.lang.Math;

public class Sibice {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int[] NWH = Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		double diag = Math.sqrt(Math.pow(NWH[1], 2) + Math.pow(NWH[2], 2));
		for (int i = 0; i < NWH[0]; i++) {
			int match = Integer.parseInt(s.next());
			System.out.println(match <= diag ? "DA" : "NE");
		}
	}
}
