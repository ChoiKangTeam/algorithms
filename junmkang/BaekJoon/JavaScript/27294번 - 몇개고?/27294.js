let [t, s] = require("fs")
	.readFileSync('/dev/stdin')
	.toString()
	.trim()
	.split(' ')
	.map(Number);
if (12 <= t && t <= 16 && s === 0) 
	console.log(320);
else 
	console.log(280);