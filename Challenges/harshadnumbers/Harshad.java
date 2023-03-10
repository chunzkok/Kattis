import java.util.Scanner;

public class Harshad{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		while (!isHarshad(n)) n++;
		System.out.println(n);
	}

	private static boolean isHarshad(int num) {
		int sumNum = 0, currNum = num;
		while (currNum != 0) {
			sumNum += currNum % 10;
			currNum /= 10;
		}
		return num % sumNum == 0;
	}
}
