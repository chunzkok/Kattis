import java.util.Scanner;

public class Autori{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		String word = s.nextLine().strip();
		int count = word.indexOf('-');
		String trunc = "" + word.charAt(0);
		while (count >= 0) {
			trunc += word.charAt(count+1);
			count = word.indexOf('-', count+1);
		}
		System.out.println(trunc);
	}
}
