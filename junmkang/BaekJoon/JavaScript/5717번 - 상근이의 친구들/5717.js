const friends = () => {
	const [...arr] = require('fs')
		.readFileSync('/dev/stdin')
		.toString()
		.trim()
		.split('\n');

	for (let i = 0; i < arr.length - 1; i++) {
		const [a, b] = arr[i].split(' ').map(Number);
		console.log(a + b);
	}
};

friends();