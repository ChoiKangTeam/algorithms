function bar() {
	const [n, m] = require('fs')
	.readFileSync('/dev/stdin')
	.toString()
	.trim()
	.split(' ')
	.map(Number);

	if (n * 100 >= m) console.log("Yes");
	else console.log("No");
};

bar();