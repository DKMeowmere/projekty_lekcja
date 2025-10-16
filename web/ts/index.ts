console.log(
	navigator.geolocation.watchPosition(
		position => {
			const lat = position.coords.latitude
			const lng = position.coords.longitude

			console.log(`Latitude: ${lat}, longitude: ${lng}`)
		},
		() => {},
		{ enableHighAccuracy: true }
	)
)
