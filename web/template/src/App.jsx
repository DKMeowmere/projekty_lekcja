import { useState } from 'react'

function App() {
  const [count, setCount] = useState(0)

  return (
    <>
    <button className='btn btn-success'>Success</button>
    <button className='btn btn-danger'>Danger</button>
    <button className='btn btn-warning'>Warning</button>
    </>
  )
}

export default App
