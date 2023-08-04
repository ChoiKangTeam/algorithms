const hours = () => {
	const n = Number(require('fs')
		.readFileSync('/dev/stdin')
		.toString()
		.trim());

	console.log(n * 24);
};

hours();