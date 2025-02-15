<!DOCTYPE html>
<html>
<head>
    <title>Student Login</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <h2>Student Login</h2>
    <form action="StudentLoginServlet" method="POST">
        <label>Roll Number:</label>
        <input type="text" name="rollno" required><br>
        <label>Password:</label>
        <input type="password" name="password" required><br>
        <button type="submit">Login</button>
    </form>
</body>
</html>
