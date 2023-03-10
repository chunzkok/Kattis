import java.util.Scanner;
import java.lang.Math;
import java.util.Map;
import java.util.HashMap;

public class Racing{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		Map<Character, Integer> d = new HashMap<Character, Integer>();
		for (int i = 0; i < 26; i++) {
			char c = (char) ('A' + i);
			d.put(c, i);
		}
		d.put(' ', 26);
		d.put('\'', 27);
		for (int i = 0; i < n; i++){
			String sentence = s.nextLine();
			double totalTime = 1.0;
			double totalDistance = 0.0;
			for (int j = 1; j < sentence.length(); j++) {
				totalTime++;
				int pos = d.get(sentence.charAt(j));
				int prev = d.get(sentence.charAt(j-1));
				int dir1 = (28 + pos - prev) % 28;
				int dir2 = 28 - dir1;
				totalDistance += Math.min(dir1, dir2);
			}
			totalTime += totalDistance/28.0*2.0*Math.PI*30.0/15.0;
			System.out.println(Double.toString(totalTime));
		}
	}
}
