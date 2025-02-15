package com.ClientNServer;

import java.io.*;
import java.net.*;


public class SocServer {
	public static void main(String[] args) throws Exception {
		
		int port = 9999;
		
		System.out.println("Server Started");
		ServerSocket ss = new ServerSocket(port);
		
		System.out.println("Wating for requests");
		Socket s = ss.accept();
		System.out.println("Client connected");
		
		BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
		String str = br.readLine();
		
		System.out.println("Client data: " + str);
	}
}
