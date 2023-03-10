import java.util.Scanner;
import java.util.Arrays;

public class Cake {
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		int W = s.nextInt(), N = s.nextInt();
		int totalVol = 0;
		for (int i = 0; i < N; i++) {
			totalVol += s.nextInt() * s.nextInt();
		}
		System.out.println(totalVol / W);
	}
}
