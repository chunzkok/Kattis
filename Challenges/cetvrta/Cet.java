import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class Cet{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		List<Integer> X = new ArrayList<Integer>(), Y = new ArrayList<Integer>();
		for (int i = 0; i < 3; i++) {
			int[] XY = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			if (X.contains(XY[0])) X.remove(Integer.valueOf(XY[0]));
			else X.add(XY[0]);

			if (Y.contains(XY[1])) Y.remove(Integer.valueOf(XY[1]));
			else Y.add(XY[1]);
		}
		System.out.println(Integer.toString(X.get(0)) + " " + Integer.toString(Y.get(0)));
	}
}
