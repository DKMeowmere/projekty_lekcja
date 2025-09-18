import { useState } from "react"

function App() {
	const [count, setCount] = useState(0)
	const [step, setStep] = useState(1)

	return (
		<div className="container d-flex align-items-center justify-content-center">
			<div
				className="mt-5 p-3 mx-auto d-flex flex-column align-items-center justify-content-center"
				style={{ border: "1px solid purple" }}
			>
				<h2>
					Licznik: <span className="text-danger">{count}</span>
				</h2>
				<div className="flex">
					<div
						className="btn btn-primary m-2"
						onClick={() => setCount(count + step)}
					>
						Dodaj
					</div>
					<div className="btn btn-primary m-2" onClick={() => setCount(0)}>
						Reset licznika
					</div>
					<div className="btn btn-primary m-2" onClick={() => setStep(1)}>
						Reset kroku
					</div>
				</div>
				<div className="input-group">
					<div className="input-group-prepend">
						<span className="input-group-text" style={{color: "purple"}}>Krok:</span>
					</div>
					<input
						type="number"
						className="form-control"
						value={step}
						onChange={e => setStep(Number(e.target.value))}
					/>
				</div>
			</div>
		</div>
	)
}

export default App
