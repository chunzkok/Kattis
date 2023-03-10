import java.util.Scanner;

public class Zanzibar {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		for (int j = 0; j < n; j++) {
			int count = 0;
			String[] nums = s.nextLine().split(" ");
			for (int i = 1; i < nums.length - 1; i++) {
				int curr = Integer.parseInt(nums[i]), prev = Integer.parseInt(nums[i-1]);
				if (curr > 2*prev) {
					count += curr - 2*prev;
				}
			}
			System.out.println(count);
		}
	}
}
