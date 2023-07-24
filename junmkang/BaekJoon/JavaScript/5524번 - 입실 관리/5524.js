const manage = () => {
	const [n, ...arr] = require("fs")
		.readFileSync('/dev/stdin')
		.toString()
		.trim()
		.split('\n');

	for (let i = 0; i < arr.length; i++) {
		const str = arr[i].toLowerCase();
		console.log(str);
	}
};

manage();