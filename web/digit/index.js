const btn = document.querySelector("#btn")
const digitCountSpan = document.querySelector("#digit-count")
const numberList = document.querySelector("#numbers-list")
const arr = []

for (let i = 1000; i < 10000; i++) {
	const set = new Set()
	const str = i.toString()

	for (let j = 0; j < str.length; j++) {
		set.add(str[j])
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
