import { useState } from "react"

//napisz aplikacje zapisu wizyty do fryzjera
//ma zawierac formularz z polami
//imie plec data i godzina wizyty
// po nacisnieciu przycisku formularz sie czysci i wyswietla sie napis dane wyslano a przycisk zmienia napis z wyslij na edit
//po nacisniciu edit dane sa wczytywane do formularza a na przycisku pojawia sie napis wyslij

function App() {
	const [name, setName] = useState("")
	const [gender, setGender] = useState("")
	const [date, setDate] = useState("")
	const [time, setTime] = useState("")
	const [hasUserSubmitted, setHasUserSubmitted] = useState(false)
	const [submittedName, setSubmittedName] = useState("")
	const [submittedGender, setSubmittedGender] = useState("")
	const [submittedDate, setSubmittedDate] = useState("")
	const [submittedTime, setSubmittedTime] = useState("")

	function handleSend(e) {
		e.preventDefault()
		setHasUserSubmitted(true)

		setSubmittedName(name)
		setSubmittedGender(gender)
		setSubmittedDate(date)
		setSubmittedTime(time)

		setName("")
		setGender("")
		setDate("")
		setTime("")
	}

	function handleEdit(e) {
		e.preventDefault()
		setHasUserSubmitted(false)

		setName(submittedName)
		setGender(submittedGender)
		setDate(submittedDate)
		setTime(submittedTime)

		setSubmittedName("")
		setSubmittedGender("")
		setSubmittedDate("")
		setSubmittedTime("")
	}
  
	return (
		<>
			<h1 style={{ textAlign: "center" }}>Zapisz sie do fryzjera</h1>
			<form style={{ maxWidth: "500px", margin: "auto" }}>
				<div className="form-group">
					<label htmlFor="userName">Imie:</label>
					<input
						className="form-control"
						type="text"
						id="userName"
						value={name}
						onChange={e => setName(e.target.value)}
						disabled={hasUserSubmitted}
					/>
				</div>
				<div className="form-group">
					<label htmlFor="gender">Płeć:</label>
					<input
						className="form-control"
						type="text"
						id="gender"
						value={gender}
						onChange={e => setGender(e.target.value)}
						disabled={hasUserSubmitted}
					/>
				</div>
				<div className="form-group">
					<label htmlFor="date">Data:</label>
					<input
						className="form-control"
						type="date"
						id="userName"
						value={date}
						onChange={e => setDate(e.target.value)}
						disabled={hasUserSubmitted}
					/>
				</div>
				<div className="form-group">
					<label htmlFor="time">Czas:</label>
					<input
						className="form-control"
						type="time"
						id="time"
						value={time}
						onChange={e => setTime(e.target.value)}
						disabled={hasUserSubmitted}
					/>
				</div>
				<button
					type="submit"
					className="btn btn-primary my-2"
					onClick={hasUserSubmitted ? handleEdit : handleSend}
				>
					{hasUserSubmitted ? "Edytuj" : "Wyślij"}
				</button>
			</form>
			{hasUserSubmitted && (
				<>
					<h2 style={{ textAlign: "center" }}>Dane Wysłano!</h2>
					<p style={{ textAlign: "center" }}>Imie: {submittedName}</p>
					<p style={{ textAlign: "center" }}>Płeć: {submittedGender}</p>
					<p style={{ textAlign: "center" }}>Data: {submittedDate}</p>
					<p style={{ textAlign: "center" }}>Czas: {submittedTime}</p>
				</>
			)}
		</>
	)
}

export default App
