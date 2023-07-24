const school = () => {
	const name = require('fs')
		.readFileSync('/dev/stdin')
		.toString()
		.trim();
	if (name === "NLCS")
		console.log("North London Collegiate School");
	if (name === "BHA")
		console.log("Branksome Hall Asia");
	if (name === "KIS")
		console.log("Korea International School");
	if (name === "SJA")
		console.log("St. Johnsbury Academy");
};

school();