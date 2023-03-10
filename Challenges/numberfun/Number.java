import java.util.Scanner;

public class Number {
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		for (int i = 0;i < n; i++) {
			int[] abc = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			double a = abc[0], b = abc[1], c = abc[2];
			if (a+b == c) System.out.println("Possible");
			else if (a-b == c || b-a == c) System.out.println("Possible");
			else if (a*b == c) System.out.println("Possible");
			else if (a/b == c || b/a == c) System.out.println("Possible");
			else System.out.println("Impossible");
		}
	}
}
