import { useState } from 'react'
import './App.css'
import { add, multiply, subtract, divide } from "./components/calculator"

function App() {
  const [count, setCount] = useState(0)

  return (
    <div>
      <p>{add(2, 4)}</p>
      <p>{multiply(2, 4)}</p>
      <p>{subtract(2, 4)}</p>
      <p>{divide(2, 4)}</p>
    </div>
  )
}

export default App
