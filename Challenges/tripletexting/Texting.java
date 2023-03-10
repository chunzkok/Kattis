import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;

public class Texting{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String words = s.nextLine().strip();
		int wordLen = words.length() / 3;
		Map<String, Integer> d = new HashMap<String, Integer>();
		for (int i = 0; i < words.length(); i+=wordLen) {
			String word = words.substring(i, i+wordLen);
			if (!d.containsKey(word)) d.put(word, 1);
			else d.put(word, d.get(word) + 1);
		}
		for (String key : d.keySet()) 
			if (d.get(key) > 1)
				System.out.println(key);
	}
}
