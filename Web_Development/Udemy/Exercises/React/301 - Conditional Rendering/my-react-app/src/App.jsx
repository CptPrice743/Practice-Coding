import { useState } from "react";
import LoginForm from "./components/login";

var isLoggedIn = false;

function renderConditionally() {
  if(isLoggedIn) {
    return <h1>Hello!</h1>
  } else {
    return <LoginForm />
  }
}


function App() {

  return (
      <div className="container">
        {isLoggedIn ? <h1>Hello!</h1> : <LoginForm />}
      </div>
  );
}

export default App;
