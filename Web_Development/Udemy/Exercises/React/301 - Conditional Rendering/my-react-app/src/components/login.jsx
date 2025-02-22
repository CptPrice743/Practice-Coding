import React from "react";
import InputFields from "./input";

function LoginForm(props) {
  return (
    <div className="login-form">
      <h1>Hello</h1>
      <form className="form">
        <InputFields type="text" placeholder="Email ID" />
        <InputFields type="password" placeholder="Password" />
        <button type="submit">Login</button>
      </form>
    </div>
  );
}

export default LoginForm;
