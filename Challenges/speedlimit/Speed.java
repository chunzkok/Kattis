import java.util.Scanner;

public class Speed{
	public static void main(String[] args){
		Scanner s= new Scanner(System.in);
		while (s.hasNextLine()) {
			int n = Integer.parseInt(s.nextLine());
			if (n == -1) return;
			int prev_t = 0;
			int total_d = 0;
			for (int i = 0; i < n; i++) {
				int[] params = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
				total_d += params[0] * (params[1] - prev_t);
				prev_t = params[1];
			}
			System.out.println(Integer.toString(total_d) + " miles");
		}
	}
}
