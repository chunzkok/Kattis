import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class ICPC {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int N = Integer.parseInt(s.nextLine());
		Set<String> unis = new HashSet<String>();
		int count = 0;
		for (int i = 0; i < N && count < 12; i++) {
			String[] uniTeam = s.nextLine().split(" ");
			if (unis.contains(uniTeam[0])) continue;
			System.out.println(uniTeam[0] + " " + uniTeam[1]);
			unis.add(uniTeam[0]);
			count++;
		}
	}
}
