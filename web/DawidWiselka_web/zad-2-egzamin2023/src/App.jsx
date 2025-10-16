import { useState } from "react"
// import "bootstrap/dist/css/bootstrap.min.css"

function App() {
	const [title, setTitle] = useState("")
	const [type, setType] = useState("")
	const handleClick = e => {
		e.preventDefault()
		console.log("tytuł:", title, "rodzaj:", type)
	}
	return (
		<form>
			<div className="form-group">
				<label htmlFor="movie">Tytuł filmu</label>
				<input
					className="form-control"
					type="text"
					id="movie"
					onChange={e => setTitle(e.target.value)}
				/>
			</div>
			<div className="form-group">
				<label htmlFor="type">Rodzaj</label>
				<select id="type" name="type" onChange={e => setType(e.target.value)} className="form-control">
					<option defaultValue={""}></option>
					<option value="1">Komedia</option>
					<option value="2">Obyczajowy</option>
					<option value="3">Sensacyjny</option>
					<option value="4">Horror</option>
				</select>
			</div>
			<button type="submit" className="btn btn-primary my-2" onClick={handleClick}>
				Dodaj
			</button>
		</form>
	)
}

export default App
