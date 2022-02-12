// Speed Limit https://open.kattis.com/problems/speedlimit

import java.util.Scanner;


public class speedlimit {
	
	public static void main(String[] args) {

		int sets = 0;

		Scanner input = new Scanner(System.in);


		sets = input.nextInt();

		while (sets != -1) {

			int miles = 0;
			int speed;
			int time;
			int timeEL = 0;

			for(int i=0; i < sets; i++) {
				speed = input.nextInt();

				time = input.nextInt();

				miles += (time - timeEL) * speed;

				timeEL = time;
			}

			System.out.println(miles + " miles");

			miles = 0;

			sets = input.nextInt();
		}
	}	
}