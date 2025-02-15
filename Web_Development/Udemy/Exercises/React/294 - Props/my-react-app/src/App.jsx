import { useState } from 'react'
// import './App.css'
import ContactsFun, { contacts } from "./components/Contacts";

function App(props) {
  const [count, setCount] = useState(0)

  return (
    <div>
      <h1 className="heading">My Contacts</h1>
      <ContactsFun
        name={contacts[0].name}
        img={contacts[0].imgURL}
        phone={contacts[0].phone}
        email={contacts[0].email}
      />
      <ContactsFun
        name={contacts[1].name}
        img={contacts[1].imgURL}
        phone={contacts[1].phone}
        email={contacts[1].email}
      />
      <ContactsFun
        name={contacts[2].name}
        img={contacts[2].imgURL}
        phone={contacts[2].phone}
        email={contacts[2].email}
      />

    </div>
  )
}

export default App
