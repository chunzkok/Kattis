import java.util.Scanner;

public class Railroad{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int[] XY = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		if (XY[1]%2 == 0) System.out.println("possible");
		else System.out.println("impossible");
	}
}
