import { useState } from "react"

function App() {
	const [users, setUsers] = useState([])
	const [name, setName] = useState("")

	function addUser() {
		if (!name) return

		setUsers([...users, { id: crypto.randomUUID(), name }])
		setName("")
	}

	function deleteUser(id) {
		setUsers(users.filter(user => user.id !== id))
	}

	return (
		<div
			style={{
				maxWidth: 400,
				margin: "auto",
				padding: "1rem",
			}}
		>
			<h1 style={{color: '#00008b'}}>User's List</h1>
			<div className="input-group">
				<input
					type="text"
					className="form-control"
					value={name}
					onChange={e => setName(e.target.value)}
				/>
				<div className="input-group-append">
					<button onClick={addUser} className="btn btn-primary">
						Add User
					</button>
				</div>
			</div>
			<ul className="list-group mt-3">
				{users.map(user => (
					<li
						key={user.id}
						className="list-group-item"
						style={{ position: "relative" , backgroundColor: '##b3e6ff', borderRadius: '5px', marginBottom: '5px'}}
					>
						{user.name}
						<span
							className="remove-btn"
							onClick={() => deleteUser(user.id)}
							style={{
								position: "absolute",
								right: 10,
								cursor: "pointer",
								color: "red",
							}}
						>
							X
						</span>
					</li>
				))}
			</ul>
		</div>
	)
}

export default App
