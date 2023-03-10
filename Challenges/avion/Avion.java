import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class Avion{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		List<String> blimps = new ArrayList<String>();
		for (int i = 0; i < 5; i++) {
			String blimp = s.nextLine().strip();
			if (blimp.contains("FBI")) blimps.add(Integer.toString(i+1));
		}
		System.out.println(blimps.size() > 0 ? String.join(" ", blimps) : "HE GOT AWAY!");
	}
}
