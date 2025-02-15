package com.InterestServlet;

import java.io.IOException;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;

import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.ServletException;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

public class CalculateInterest extends HttpServlet {
	public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException{
		
		int principal = Integer.parseInt(req.getParameter("principal"));
		int roi = Integer.parseInt(req.getParameter("ROI"));
		int time = Integer.parseInt(req.getParameter("time"));
		
		float amount = (principal * roi * time) / 100;
		
//		res.getWriter().println(amount);
		
		req.setAttribute("interest", amount);
		req.setAttribute("principal", principal);
		RequestDispatcher rd = req.getRequestDispatcher("totalamount");
		rd.forward(req, res);
	}
}
