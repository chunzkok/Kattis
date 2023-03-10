import java.util.Scanner;

public class SSD{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		for (int i = 0; i < n; i++) {
			int sum = 0;
			int[] params = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			int base = params[1], num = params[2];
			while (num > 0) {
				int rem = num % base;
				sum += rem * rem;
				num /= base;
			}

			System.out.println(Integer.toString(params[0]) + ' ' + Integer.toString(sum));
		}
	}
}
