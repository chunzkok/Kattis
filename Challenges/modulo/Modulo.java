import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class Modulo {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Set<Integer> d= new HashSet<Integer>();
		while (s.hasNext()) d.add(Integer.valueOf(s.next()) % 42);
		System.out.println(d.size());
	}
}
