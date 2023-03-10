import java.util.Scanner;

public class Reverse{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		String nBin = "";
		while (n > 0) {
			nBin += (n & 1) == 0 ? '0' : '1';
			n >>= 1;
		}

		int m = 0;
		for (int i = 0; i < nBin.length(); i++) {
			m <<= 1;
			m += nBin.charAt(i) == '1' ? 1 : 0;
		}
		System.out.println(Integer.toString(m));
	}
}
