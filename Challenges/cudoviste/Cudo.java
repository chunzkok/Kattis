import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class Cudo{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		List<String> parking = new ArrayList<String>();
		int[] RC = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		int[] squashed = new int[5];
		for (int i = 0; i < RC[0]; i++) parking.add(s.nextLine().strip());
		for (int r = 0; r < RC[0] - 1; r++) {
			for (int c = 0; c < RC[1] - 1; c++) {
				int ind = squash(parking, r, c);
				if (ind == -1) continue;
				squashed[ind] += 1;
			}
		}
		for (int i = 0; i < 5; i++) {
			System.out.println(squashed[i]);
		}
	}

	private static int squash(List<String> parking, int r, int c) {
		int res = 0;
		for (int i = r; i < r+2; i++){
			for (int j = c; j < c+2; j++) {
				char ch = parking.get(i).charAt(j);
				if (ch == '#') return -1;
				if (ch == 'X') res += 1;
			}
		}
		return res;
	}
}
