const transport = () => {
	const [n, a, b] = require("fs")
		.readFileSync('/dev/stdin')
		.toString()
		.trim()
		.split(' ')
		.map(Number);

	if (a < b) console.log("Bus");
	else if (a > b) console.log("Subway");
	else console.log("Anything");
};

transport();