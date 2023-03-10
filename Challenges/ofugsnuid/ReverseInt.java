import java.util.Scanner;

public class ReverseInt{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		java.util.List<String> ls = new java.util.ArrayList<String>();
		int n = Integer.parseInt(s.nextLine());
		for (int i = 0; i < n; i++) ls.add(s.nextLine().strip());
		for (int i = n-1; i >= 0; i--) System.out.println(ls.get(i));
	}
}
