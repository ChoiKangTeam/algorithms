const histogram = () => {
	const [...arr] = require('fs')
		.readFileSync('/dev/stdin')
		.toString()
		.trim()
		.split('\n')
		.map(Number);

	for (let i = 1; i < arr.length; i++) {
		console.log('='.repeat(arr[i]));
	}
};

histogram();