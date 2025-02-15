<%@ page import="jakarta.servlet.http.*" %>
<%
    if (session == null || session.getAttribute("rollno") == null) {
        response.sendRedirect("login.jsp");
        return; // Stop further execution after redirection
    }
%>
<!DOCTYPE html>
<html>
<head>
    <title>Update Courses</title>
</head>
<body>
    <h2>Update Your Courses</h2>
    <form action="UpdateCourseServlet" method="POST">
        <label>Select Course to Update:</label>
        <select name="courseField">
            <option value="course1">Course 1</option>
            <option value="course2">Course 2</option>
            <option value="course3">Course 3</option>
        </select><br>
        <label>New Course Name:</label>
        <input type="text" name="newCourse" required><br>
        <button type="submit">Update</button>
    </form>
</body>
</html>
