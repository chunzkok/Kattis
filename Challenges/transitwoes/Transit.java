import java.util.Scanner;

public class Transit {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int s = sc.nextInt(), t = sc.nextInt(), n = sc.nextInt();
		int[] dArr = get_n_ints(sc, n+1), bArr = get_n_ints(sc, n), cArr = get_n_ints(sc, n);
		int curr_time = 0;
		for (int i = 0; i < n; i++) {
			curr_time += dArr[i];
			int bus = 0;
			while (bus < curr_time) bus += cArr[i];
			curr_time = bus + bArr[i];
		}
		System.out.println(curr_time + dArr[n] <= t ? "yes" : "no");

	}

	private static int[] get_n_ints(Scanner s, int n){
		int[] res = new int[n];
		for (int i = 0; i < n; i++) res[i] = s.nextInt();
		return res;
	}
}
