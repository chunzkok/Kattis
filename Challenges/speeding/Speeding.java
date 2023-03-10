import java.util.Scanner;
import java.util.Arrays;

public class Speeding {
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		int prev_t = 0, prev_d = 0;
		int max_spd = 0;
		for (int i = 0; i < n; i++){
			int[] td = Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			if (i > 0) {
				int spd = (td[1] - prev_d) / (td[0] - prev_t);
				max_spd = spd > max_spd ? spd : max_spd;
			}
			prev_t = td[0];
			prev_d = td[1];
		}
		System.out.println(max_spd);
	}
}
