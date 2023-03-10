import java.util.Scanner;

public class Pyramids{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int level = 1;
		int req = 3;
		int blocks = Integer.parseInt(s.nextLine()) - 1;
		while (blocks >= req*req) {
			blocks -= req*req;
			req+=2;
			level++;
		}
		System.out.println(Integer.toString(level));
	}
}
