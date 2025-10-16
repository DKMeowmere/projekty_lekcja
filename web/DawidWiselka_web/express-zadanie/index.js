// index.js
const express = require("express")
const mongoose = require("mongoose")
const userRouter = require('./user.route.js');
const app = express()
const PORT = 3000

const mongoURI = "mongodb://localhost:27017/express-app-1"

function createServer() {
	const app = express()
app.use(userRouter);
	app.use(express.json())
	app.use(userRouter)

	return app
}

async function start() {
	try {
		const app = createServer()

		mongoose.set("strictQuery", false)
		await mongoose.connect(mongoURI)
		console.log("Connected to db")

		app.listen(PORT, () => {
			console.log(`Listening on port: ${PORT}`)
		})
	} catch (err) {
		console.error("Error starting server:", err)
	}
}
start()
