import java.util.Scanner;
import java.util.Arrays;

public class Provinces{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int[] GSC = Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		int bp = 3*GSC[0] + 2*GSC[1] + GSC[2];
		if (bp < 2) System.out.println("Copper");
		else {
			String state = "";
			if (bp >= 8) state = "Province";
			else if (bp >= 5) state = "Duchy";
			else state = "Estate";
			String treasure = "";
			if (bp >= 6) treasure = "Gold";
			else if (bp >= 3) treasure = "Silver";
			else treasure = "Copper";
			System.out.println(state + " or " + treasure);
		}
	}
}
