import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
import java.util.List;
import java.util.ArrayList;

public class Birthday{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		Map<String, String[]> d = new HashMap<String, String[]>();
		for (int i = 0; i < n; i++) {
			String[] bday = s.nextLine().split(" ");
			if (d.containsKey(bday[2])) {
				int currScore = Integer.parseInt(bday[1]);
				int prevScore = Integer.parseInt(d.get(bday[2])[1]);
				if (prevScore >= currScore) continue;
			}
			d.put(bday[2], new String[] {bday[0], bday[1]});
		}
		List<String> names = new ArrayList<String>();
		for (String key : d.keySet()) names.add(d.get(key)[0]);
		java.util.Collections.sort(names);
		System.out.println(names.size());
		for (String name : names) System.out.println(name);
	}
}
