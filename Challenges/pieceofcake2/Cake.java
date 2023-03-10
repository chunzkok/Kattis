public class Cake{
	public static void main (String[] args) {
		java.util.Scanner s = new java.util.Scanner(System.in);
		int[] nhv = java.util.Arrays.stream(s.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		int len1 = java.lang.Math.max(nhv[1], nhv[0] - nhv[1]);
		int len2 = java.lang.Math.max(nhv[2], nhv[0] - nhv[2]);
		System.out.println(Integer.toString(len1 * len2 * 4));
	}
}
