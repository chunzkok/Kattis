import java.util.Scanner;
import java.util.Arrays;

public class Sticker{
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		int[] dims = Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		int wc = dims[0], hc = dims[1], ws = dims[2], hs = dims[3];
		if (wc - ws < 2 || hc - hs < 2) System.out.println("0");
		else System.out.println("1");
	}
}
