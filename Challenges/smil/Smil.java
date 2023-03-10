import java.util.Scanner;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class Smil {
	public static void main(String[] args) {
		Pattern smile = Pattern.compile("[:;]-?\\)");
		Scanner s = new Scanner(System.in);
		String word = s.next().strip();
		Matcher m = smile.matcher(word);
		while (m.find()){
			System.out.println(m.start());
		}
	}
}
