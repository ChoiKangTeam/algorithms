const hello = () => {
	const n = require('fs')
		.readFileSync('/dev/stdin')
		.toString()
		.trim()
		.split('\n')
		.map(Number);

	for (let i = 1; i <= n; i++) {
		console.log(`Hello World, Judge ${i}!`);
	}
};

hello();