import java.util.Scanner;

public class Zamka {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int L = s.nextInt(), D = s.nextInt(), X = s.nextInt();
		int N = L, M = D;
		while (sum_num(N) != X) N += 1;
		while (sum_num(M) != X) M -= 1;
		System.out.println(N);
		System.out.println(M);

	}

	private static int sum_num(int num) {
		int cNum = num, cSum = 0;
		while (cNum != 0) {
			cSum += cNum % 10;
			cNum /= 10;
		}
		return cSum;
	}
}
