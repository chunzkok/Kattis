import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;
import java.util.Arrays;

public class Homework {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in).useDelimiter(";");
		int count = 0;
		while (s.hasNext()) {
			String word = s.next().strip();
			if (word.contains("-")) {
				List<Integer> nums = Arrays.asList(word.split("-")).stream().map(x -> Integer.valueOf(x)).collect(Collectors.toList());
				count += nums.get(1) - nums.get(0) + 1;
			} else {
				count += 1;
			}
		}
		System.out.println(Integer.toString(count));
	}
}
