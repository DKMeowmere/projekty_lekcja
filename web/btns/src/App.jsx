import { useState } from "react"

export default function MyApp() {
  const [count, setCount] = useState(0)

  function handleIncrementation() {
    setCount(count + 1)
  }

  function handleDecrementation() {
    setCount(count - 1)
  }

  return (
    <div>
      <h1>Counters that update together</h1>
      <MyButton text="Increment" onClick={handleIncrementation} />
      <MyButton text="Decrement" onClick={handleDecrementation} />
      <MyLabel text={count} />
    </div>
  )
}

function MyButton({ text, onClick }) {
  return <button onClick={onClick}>{text}</button>
}

function MyLabel({ text }) {
  return <p>{text}</p>
}
