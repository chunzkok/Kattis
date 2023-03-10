import java.util.Scanner;
import java.lang.Math;

public class Cannon {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		for (int i = 0; i < n; i++) {
			double v0 = s.nextFloat(), 
			    theta = s.nextFloat(), 
			    x1 = s.nextFloat(), 
			    h1 = s.nextFloat(),
			    h2 = s.nextFloat();
			double t = x1/(v0 * Math.cos(Math.toRadians(theta)));
			double y = v0 * t * Math.sin(Math.toRadians(theta)) - 0.5*9.81*Math.pow(t, 2);
			System.out.println(y <= h2-1 && y >= h1 +  1 ? "Safe" : "Not Safe");
		}
	}
}
