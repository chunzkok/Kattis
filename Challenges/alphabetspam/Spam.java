import java.util.Scanner;

public class Spam{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		String msg = s.nextLine().strip();
		double wsp = 0, lc = 0, uc = 0, sym = 0;
		double n = msg.length();
		for (int i = 0; i < n; i++) {
			char c = msg.charAt(i);
			if (c == '_') wsp++;
			else if (Character.isLowerCase(c)) lc++;
			else if (Character.isUpperCase(c)) uc++;
			else sym++;
		}
		System.out.println(wsp/n);
		System.out.println(lc/n);
		System.out.println(uc/n);
		System.out.println(sym/n);
	}
}
