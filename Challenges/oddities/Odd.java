import java.util.Scanner;

public class Odd {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		for (int i = 0; i < n; i++) {
			int num = Integer.parseInt(s.nextLine());
			System.out.println(Integer.toString(num) + " is " + (num % 2 == 0? "even" : "odd"));
		}
	}
}
