import java.util.Scanner;

public class Encoded{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int cases = Integer.parseInt(s.nextLine());
		for (int caseNum = 0; caseNum < cases; caseNum++) {
			String word = s.nextLine().strip();
			int n = (int) java.lang.Math.sqrt(word.length());
			String decrypted = "";
			for (int i = n-1; i >= 0; i--) {
				for (int j = 0; i+j < word.length(); j+=n) {
					decrypted += word.charAt(i+j);
				}
			}
			System.out.println(decrypted);
		}
	}
}
