import java.util.Scanner;

public class Simon{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int n = Integer.parseInt(s.nextLine());
		for (int i = 0; i < n; i++){
			String command = s.nextLine();
			if (command.length() < 11 || ! command.substring(0, 10).equals("Simon says")) continue;
			System.out.println(command.substring(10, command.length()));
		}
	}
}
