function find() {
	const [...arr] = require('fs')
	.readFileSync('/dev/stdin')
	.toString()
	.trim()
	.split('\n');

	let document = arr[0];
	let word = arr[1];
	let count = 0, num = 0, i = 0;
	while (i < document.length) {
		num = document.indexOf(word, i);
		if (num !== -1) {
			count++;
			i = num + word.length - 1;
		}
		i++;
	}
	console.log(count);
}

find();