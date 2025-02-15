<%@ page import="java.sql.*" %>
<%@ page import="jakarta.servlet.http.*" %>
<%
    // Check if the session is valid
    if (session == null || session.getAttribute("rollno") == null) {
        response.sendRedirect("login.jsp");
        return; // Stop further execution
    }

    String rollno = session.getAttribute("rollno").toString();
    Connection con = null;
    String name = "", course1 = "", course2 = "", course3 = "";

    try {
        Class.forName("com.mysql.cj.jdbc.Driver");
        con = DriverManager.getConnection("jdbc:mysql://localhost:3306/student_management", "root", "1234");
        PreparedStatement pst = con.prepareStatement("SELECT * FROM student_details WHERE rollno = ?");
        pst.setInt(1, Integer.parseInt(rollno));

        ResultSet rs = pst.executeQuery();
        if (rs.next()) {
            name = rs.getString("name");
            course1 = rs.getString("course1");
            course2 = rs.getString("course2");
            course3 = rs.getString("course3");
        }
        con.close();
    } catch (Exception e) {
        e.printStackTrace();
    }
%>
<!DOCTYPE html>
<html>
<head>
    <title>Student Dashboard</title>
</head>
<body>
    <h2>Welcome, <%= name %></h2>
    <h3>Registered Courses</h3>
    <ul>
        <li><%= course1 %></li>
        <li><%= course2 %></li>
        <li><%= course3 %></li>
    </ul>
    <a href="update.jsp">Update Courses</a>
</body>
</html>
