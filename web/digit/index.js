const btn = document.querySelector("#btn")
const digitCountSpan = document.querySelector("#digit-count")
const numberList = document.querySelector("#numbers-list")
const arr = []

for (let i = 1000; i < 10000; i++) {
	const set = new Set()
	const str = i.toString()

	for (let i = 0; i < str.length; i++) {
		set.add(str[i])
	}

	if (set.size < 3) {
		arr.push(i)
	}
}

btn.addEventListener("click", write)

function write() {
	digitCountSpan.textContent = arr.length
	arr.forEach(number => {
		const li = document.createElement("li")
		li.textContent = number
		numberList.append(li)
	})
}
