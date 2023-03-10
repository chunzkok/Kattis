import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.stream.Collectors;

public class Forced{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int[] NPS = Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		for (int i = 0; i < NPS[2]; i++) {
			List<Integer> choices = Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).boxed().collect(Collectors.toList());
			if (choices.subList(1, choices.size()).contains(NPS[1])) System.out.println("KEEP");
			else System.out.println("REMOVE");
		}
	}
}
