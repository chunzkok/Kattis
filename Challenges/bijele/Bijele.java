import java.util.Scanner;

public class Bijele{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int[] pieces = {1, 1, 2, 2, 2, 8};
		int[] current = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		for (int i = 0; i < pieces.length; i++) {
			pieces[i] -= current[i];
		}

		System.out.println(String.join(" ", java.util.Arrays.stream(pieces).mapToObj(i -> Integer.toString(i)).toArray(String[]::new)));
	}
}
