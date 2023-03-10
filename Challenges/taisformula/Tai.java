import java.util.Scanner;

public class Tai{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		double total = 0;
		double[] prev = {0.0, 0.0};
		for (int i = 0; i < n; i++) {
			double[] tv = java.util.Arrays.stream(s.nextLine().split(" ")).mapToDouble(Double::parseDouble).toArray();
			if (i != 0) {
				total += (prev[1] + tv[1])/2.0 * (tv[0] - prev[0])/1000.0;
			}

			prev = tv;
		}
		System.out.println(total);
	}
}
