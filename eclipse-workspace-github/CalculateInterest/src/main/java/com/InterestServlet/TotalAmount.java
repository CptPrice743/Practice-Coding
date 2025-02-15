package com.InterestServlet;

import java.io.IOException;

import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

public class TotalAmount extends HttpServlet {
	public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException {
		int k = (int) req.getAttribute("interest");
		int principal = (int) req.getAttribute("principal");
		
		int totalAmount = k = principal;
		
		res.getWriter().println("The total amount is " + totalAmount);
	}
}
