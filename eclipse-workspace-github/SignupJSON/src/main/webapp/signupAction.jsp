<%@ page import="java.io.*, org.json.simple.*, org.json.simple.parser.*" %>
<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<%@ page pageEncoding="UTF-8" %>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Signup Successful</title>
</head>
<body>
    <h2>Signup Successful!</h2>
    <p>You have successfully signed up. Here are your credentials:</p>

    <%
        String username = request.getParameter("username");
        String email = request.getParameter("email");
        String password = request.getParameter("password");

        // Create a JSON object for the user data
        JSONObject user = new JSONObject();
        user.put("username", username);
        user.put("email", email);
        user.put("password", password); // In a real-world scenario, don't store passwords in plain text

        // File path for storing user data (use an appropriate path in your project)
        String filePath = application.getRealPath("/") + "users.json";
        out.println("File path: " + filePath);

        try {
            // Read the existing users from the JSON file
            FileReader reader = new FileReader(filePath);
            JSONParser jsonParser = new JSONParser();
            JSONArray usersArray = (JSONArray) jsonParser.parse(reader);
            reader.close();

            // Add the new user to the list
            usersArray.add(user);

            // Save the updated user list back to the file
            FileWriter writer = new FileWriter(filePath);
            writer.write(usersArray.toJSONString());
            writer.flush();
            writer.close();

        } catch (Exception e) {
            // If the file doesn't exist, create a new one with an empty array
            JSONArray usersArray = new JSONArray();
            usersArray.add(user);

            try {
                FileWriter writer = new FileWriter(filePath);
                writer.write(usersArray.toJSONString());
                writer.flush();
                writer.close();
            } catch (IOException ioException) {
                out.println("Error saving user data.");
            }
        }
    %>

    <p>Username: <%= username %></p>
    <p>Email: <%= email %></p>
    <p>Password: <%= password %></p>
</body>
</html>
