const arr: number[][] = []
let a = 0
let b = 1

for (let i = 0; i <= 36; i++) {
	let temp = b
	b += a
	a = temp
	arr.push([a, b])
}

console.log(arr)
