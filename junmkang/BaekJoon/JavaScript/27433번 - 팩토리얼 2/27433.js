let n = Number(require("fs")
	.readFileSync('/dev/stdin')
	.toString()
	.trim());
let count = 1;
for (let i = 1; i <= n; i++) {
	count = count * i;
}
console.log(count);