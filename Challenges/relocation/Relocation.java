import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

public class Relocation{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int[] NQ = Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		int[] dist = Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		for (int i = 0; i < NQ[1]; i++) {
			int[] params = Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			if (params[0] == 1) {
				dist[params[1]-1] = params[2];
			} else {
				int dist1 = dist[params[1]-1], dist2 = dist[params[2]-1];
				System.out.println(java.lang.Math.abs(dist1 - dist2));
			}
		}
	}
}
