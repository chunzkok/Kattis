import java.util.Scanner;

public class Stopwatch{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		if (n % 2 != 0) System.out.println("still running");
		else {
			int total = 0;
			for (int i = 1; i < n; i += 2) {
				total += -(s.nextInt() - s.nextInt());
			}
			System.out.println(Integer.toString(total));
		}
	}
}
