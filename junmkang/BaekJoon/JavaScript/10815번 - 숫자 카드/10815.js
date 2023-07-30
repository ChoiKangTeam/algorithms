const card = () => {
	const [...arr] = require("fs")
		.readFileSync('/dev/stdin')
		.toString()
		.trim()
		.split('\n');
	let myNumber =  arr[1].split(' ');
	let number = arr[3].split(' ');
	let obj = {};
	let ansNumber = [];

	for (let i = 0; i < myNumber.length; i++) {
		obj[myNumber[i]] = true;
	}

	for (let i = 0; i < number.length; i++) {
		if (obj[number[i]])
			ansNumber.push(1);
		else
			ansNumber.push(0);
	}
	console.log(ansNumber.join(' '));
};

card();