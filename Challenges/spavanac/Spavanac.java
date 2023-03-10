import java.util.Scanner;

public class Spavanac {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String[] HM = s.nextLine().split(" ");
		int H = Integer.parseInt(HM[0]), M = Integer.parseInt(HM[1]);
		M -= 45;
		H = M < 0 ? H-1 : H;
		System.out.println(Integer.toString(H < 0 ? H + 24 : H) + " " + Integer.toString(M < 0 ? M + 60 : M));
	}
}
