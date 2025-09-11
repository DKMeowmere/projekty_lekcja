import { useState } from "react"

function App() {
	const kursy = [
		"Programowanie w C#",
		"Angular dla początkujących",
		"Kurs Django",
	]
	const [nazwa, setNazwa] = useState("")
	const [numer, setNumer] = useState("")

	function handleSubmit(e) {
		e.preventDefault()

		console.log(nazwa)
		!kursy[numer - 1]
			? console.log("Nieprawidłowy numer kursu")
			: console.log(kursy[numer - 1])
	}

	return (
		<>
			<h2>Liczba kursów: {kursy.length}</h2>
			<ol>
				{kursy.map((kurs, index) => {
					return <li key={index}>{kurs}</li>
				})}
			</ol>
			<label htmlFor="name">Imię i nazwisko:</label>
			<input
				id="name"
				type="text"
				value={nazwa}
				onChange={e => setNazwa(e.target.value)}
			/>
			<br />
			<form>
				<label htmlFor="number">Numer kursu:</label>
				<input
					id="number"
					type="number"
					value={numer}
					onChange={e => setNumer(e.target.value)}
				/>
				<br />
				<button type="submit" onClick={handleSubmit}>
					Zapisz do kursu
				</button>
			</form>
		</>
	)
}

export default App
