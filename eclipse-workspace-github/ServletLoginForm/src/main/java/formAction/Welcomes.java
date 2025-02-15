package formAction;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import jakarta.servlet.http.HttpSession;
import java.io.IOException;
import java.io.PrintWriter;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

@WebServlet("/welcomes")
public class Welcomes extends HttpServlet {
    private static final long serialVersionUID = 1L;

    protected void doGet(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
        HttpSession session = req.getSession(false); // Check if session exists
        res.setContentType("text/html");
        PrintWriter out = res.getWriter();

        if (session != null) {
            String username = (String) session.getAttribute("username");
            if (username != null) {
                LocalDateTime now = LocalDateTime.now();
                DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm:ss");
                int hour = now.getHour();

                if (hour >= 5 && hour < 12) {
                    out.println("<h1>Good Morning, " + username + "!</h1>");
                } else if (hour >= 12 && hour < 18) {
                    out.println("<h1>Good Afternoon, " + username + "!</h1>");
                } else {
                    out.println("<h1>Good Evening, " + username + "!</h1>");
                }

                out.println("<p>Current Date and Time: " + now.format(formatter) + "</p>");
                out.println("<a href='logout'>Logout</a>");
            } else {
                res.sendRedirect("login.html");
            }
        } else {
            res.sendRedirect("login.html"); // Redirect to login if session is invalid
        }
    }

    protected void doPost(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
        doGet(req, res);
    }
}