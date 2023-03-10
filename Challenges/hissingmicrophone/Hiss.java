import java.util.Scanner;

public class Hiss{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		String word = s.nextLine().strip();
		for (int i = 1; i < word.length(); i++){
			if (word.charAt(i) == 's' && word.charAt(i-1) == 's') {
				System.out.println("hiss");
				return;
			}
		}
		System.out.println("no hiss");
	}
}
