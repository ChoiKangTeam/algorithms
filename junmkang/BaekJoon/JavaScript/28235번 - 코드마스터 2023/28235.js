function cheering() {
	const s = require('fs')
	.readFileSync('/dev/stdin')
	.toString()
	.trim();
	
	if (s === 'SONGDO') console.log("HIGHSCHOOL");
	if (s === 'CODE') console.log("MASTER");
	if (s === '2023') console.log("0611");
	if (s === 'ALGORITHM') console.log("CONTEST");
}

cheering();