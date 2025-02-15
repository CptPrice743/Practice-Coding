package com.ClientNServer;

import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.net.Socket;


public class SocClient {
	public static void main(String[] args) throws Exception {
		String ip = "localhost";
		int port = 9999;
		Socket s = new Socket(ip, port);
		
		String str = "Hello!";
		
		OutputStreamWriter os = new OutputStreamWriter(s.getOutputStream());
		PrintWriter out = new PrintWriter(os);
		out.write(str);
		os.flush();
	}
}
