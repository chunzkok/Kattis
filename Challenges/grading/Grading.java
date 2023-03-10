import java.util.Scanner;

public class Grading{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int[] abcde = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		int score = Integer.parseInt(s.nextLine());
		if (score >= abcde[0]) System.out.println("A");
		else if (score >= abcde[1]) System.out.println("B");
		else if (score >= abcde[2]) System.out.println("C");
		else if (score >= abcde[3]) System.out.println("D");
		else if (score >= abcde[4]) System.out.println("E");
		else System.out.println("F");
	}
}
