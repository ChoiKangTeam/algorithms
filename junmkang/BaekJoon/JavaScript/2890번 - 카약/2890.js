function kayak() {
	const [n, ...arr] = require('fs')
	.readFileSync('/dev/stdin')
	.toString()
	.trim()
	.split('\n');

	let count = 0;
	let number = [];
	let flag = false;
	// r 세로, c 가로
	const [c, r] = n.split(' ').map(Number);
	for (let i = r - 1; i >= 0; i--) {
		flag = false;
		for (let j = 0; j < c; j++) {
			if ('1' <= arr[j][i] && arr[j][i] <= '9')
				if (arr[j][i + 1] === '.' || arr[j][i + 1] === 'F') {
					if (!flag) {
						count++;
						flag = true;
					}
					number[arr[j][i]] = count;
				}
		}
	}
	// console.log(number);
	for (let i = 1; i < 10; i++) {
		console.log(number[i]);
	}
};

kayak();