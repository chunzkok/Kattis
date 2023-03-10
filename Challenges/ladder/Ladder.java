import java.util.Scanner;

public class Ladder{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int[] hv = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		int len = (int) (hv[0]/java.lang.Math.sin(java.lang.Math.toRadians(hv[1])));
		System.out.println(Integer.toString(len + 1));
	}
}
