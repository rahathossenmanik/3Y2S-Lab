import java.io.IOException;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;

public class Server {
	public static void main(String[] args) throws IOException {
		System.out.println("I am Manik");
		try (ServerSocket listener = new ServerSocket(59091)){
			System.out.println("Server is Running...");
			while(true) {
				try(Socket socket =listener.accept()){
					PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
					out.println("This is Manik Hosen");
				}
			}
		}
	}
}
