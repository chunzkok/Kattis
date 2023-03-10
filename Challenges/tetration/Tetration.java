import java.util.Scanner;
import java.lang.Math;

public class Tetration{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		double prev = Double.valueOf(s.nextLine());
		double curr = Math.pow(prev, 1.0/prev);
		while (prev - curr > 0.0000001) {
			prev = curr;
			curr = Math.pow(curr, 1.0/curr);
		}
		System.out.println(curr);
	}
}
