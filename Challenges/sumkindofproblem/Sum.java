import java.util.Scanner;

public class Sum{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		for (int i = 0; i < n; i++) {
			int[] params = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			double num = params[1];
			double S1 = (1.0+num)*(num/2.0);
			double S2 = (2.0*num)*(num/2.0);
			double S3 = (2.0*(num+1.0))*(num/2.0);
			System.out.println(Integer.toString(params[0]) + ' ' + 
					Integer.toString((int)S1) + ' ' + 
					Integer.toString((int)S2) + ' ' + 
					Integer.toString((int)S3));
		}
	}
}
