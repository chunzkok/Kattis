import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class Nodup {
	public static void main(String[] args) {
		Set<String> d = new HashSet<String>();
		Scanner s = new Scanner(System.in);
		while (s.hasNext()) {
			String word = s.next();
			if (d.contains(word)) {System.out.println("no"); return;}
			else d.add(word);
		}
		System.out.println("yes");
	}
}
