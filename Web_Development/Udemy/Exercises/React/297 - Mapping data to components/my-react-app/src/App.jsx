import { useState } from "react";
// import "./App.css";
import Card from "./components/card";
import Emoji from "./components/emojipedia";

function CreateCard(emoji) {
  return (
    <Card 
      key = {emoji.id}
      emoji = {emoji.emoji}
      name = {emoji.name}
      meaning = {emoji.meaning}
    />
  );
}

function App() {
  return (
    <div>
      <h1>
        <span>emojipedia</span>
      </h1>
      {Emoji.map(CreateCard)}
    </div>
  );
}

export default App;
