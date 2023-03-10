import java.util.Scanner;
import java.lang.Math;

public class Romans {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		double miles = s.nextDouble();
		int paces = (int) Math.round(miles * 5280000.0 / 4854.0);
		System.out.println(paces);
	}
}
