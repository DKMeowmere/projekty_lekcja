import { useState } from "react"

function App() {
	const [images, setImages] = useState([
		{ id: 0, alt: "Mak", filename: "obraz1.jpg", category: 1, downloads: 35 },
		{
			id: 1,
			alt: "Bukiet",
			filename: "obraz2.jpg",
			category: 1,
			downloads: 43,
		},
		{
			id: 2,
			alt: "Dalmatyńczyk",
			filename: "obraz3.jpg",
			category: 2,
			downloads: 2,
		},
		{
			id: 3,
			alt: "Świnka morska",
			filename: "obraz4.jpg",
			category: 2,
			downloads: 53,
		},
		{
			id: 4,
			alt: "Rotwailer",
			filename: "obraz5.jpg",
			category: 2,
			downloads: 43,
		},
		{ id: 5, alt: "Audi", filename: "obraz6.jpg", category: 3, downloads: 11 },
		{ id: 6, alt: "kotki", filename: "obraz7.jpg", category: 2, downloads: 22 },
		{ id: 7, alt: "Róża", filename: "obraz8.jpg", category: 1, downloads: 33 },
		{
			id: 8,
			alt: "Świnka morska",
			filename: "obraz9.jpg",
			category: 2,
			downloads: 123,
		},
		{
			id: 9,
			alt: "Foksterier",
			filename: "obraz10.jpg",
			category: 2,
			downloads: 22,
		},
		{
			id: 10,
			alt: "Szczeniak",
			filename: "obraz11.jpg",
			category: 2,
			downloads: 12,
		},
		{
			id: 11,
			alt: "Garbus",
			filename: "obraz12.jpg",
			category: 3,
			downloads: 321,
		},
	])
	const [isFlowersActive, setIsFlowersActive] = useState(true)
	const [isAnimalsActive, setIsAnimalsActive] = useState(true)
	const [isCarsActive, setIsCarsActive] = useState(true)

	return (
		<>
			<h1>Kategorie zdjęć</h1>
			<form>
				<div className="form-check  form-switch form-check-inline">
					<input
						type="checkbox"
						className="form-check-input"
						id="kwiaty-checkbox"
						role="switch"
						checked={isFlowersActive}
						value={isFlowersActive}
						onChange={() => setIsFlowersActive(!isFlowersActive)}
					/>
					<label className="form-check-label" htmlFor="kwiaty-checkbox">
						Kwiaty
					</label>
				</div>
				<div className="form-check form-switch form-check-inline">
					<input
						type="checkbox"
						className="form-check-input"
						id="zwierzeta-checkbox"
						checked={isAnimalsActive}
						role="switch"
						value={isAnimalsActive}
						onChange={() => setIsAnimalsActive(!isAnimalsActive)}
					/>
					<label className="form-check-label" htmlFor="zwierzeta-checkbox">
						Zwierzęta
					</label>
				</div>
				<div className="form-check form-switch form-check-inline">
					<input
						type="checkbox"
						className="form-check-input"
						id="samochody-checkbox"
						role="switch"
						checked={isCarsActive}
						value={isCarsActive}
						onChange={() => setIsCarsActive(!isCarsActive)}
					/>
					<label className="form-check-label" htmlFor="samochody-checkbox">
						Samochody
					</label>
				</div>
			</form>
			{images.map(image => {
				if (image.category === 1 && !isFlowersActive) return null
				if (image.category === 2 && !isAnimalsActive) return null
				if (image.category === 3 && !isCarsActive) return null
				return (
					<>
						<img
							style={{ borderRadius: "8px", margin: "10px" }}
							key={image.id}
							src={`/src/assets/${image.filename}`}
							alt={image.alt}
						/>
						<button className="btn btn-success" onClick={() => setImages(images.map())}>Pobierz</button>
					</>
				)
			})}
		</>
	)
}

export default App
