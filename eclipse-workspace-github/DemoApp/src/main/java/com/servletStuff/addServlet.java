package com.servletStuff;

import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.ServletException;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

public class addServlet extends HttpServlet{
	public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException {
		String num1Str = req.getParameter("num1");
		String num2Str = req.getParameter("num2");
		
		int i = Integer.parseInt(num1Str);
		int j = Integer.parseInt(num2Str);
		
		int sum = i + j;
		
		
		
	}
}
