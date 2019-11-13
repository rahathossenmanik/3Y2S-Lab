import java.io.IOException;
import java.net.Socket;
import java.util.Scanner;

public class Client {
	@SuppressWarnings("resource")
	public static void main(String[] args) throws IOException {
		System.out.println("I am Manik");
		Socket socket = new Socket("192.168.5.44", 59091);
		Scanner in = new Scanner(socket.getInputStream());
		System.out.println("Server Response: " + in.nextLine());
	}
}
