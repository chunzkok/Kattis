import java.util.Scanner;

public class JobExp{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		if (n == 0) {
			System.out.println("0");
			return;
		}
		int[] nums = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		int expenses = 0;
		for (int num : nums) {
			if (num < 0) expenses -= num;
		}
		System.out.println(Integer.toString(expenses));
	}
}
