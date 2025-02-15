import java.io.*;


import jakarta.servlet.ServletException;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import jakarta.servlet.http.HttpSession;

import java.sql.*;

public class UpdateCourseServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        HttpSession session = request.getSession(false);
        if (session == null || session.getAttribute("rollno") == null) {
            response.sendRedirect("login.jsp");
            return;
        }

        String rollno = session.getAttribute("rollno").toString();
        String courseField = request.getParameter("courseField");
        String newCourse = request.getParameter("newCourse");

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/student_management", "root", "1234");

            String query = "UPDATE student_details SET " + courseField + " = ? WHERE rollno = ?";
            PreparedStatement pst = con.prepareStatement(query);
            pst.setString(1, newCourse);
            pst.setInt(2, Integer.parseInt(rollno));

            pst.executeUpdate();
            con.close();

            response.sendRedirect("dashboard.jsp");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
