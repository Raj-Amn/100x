const fs = require('fs');


function promisifiedSetTimeout(time){
	return new Promise((resolve,reject)=>{
		setTimeout(()=>console.log("promise world"),time);
	});
}


promisifiedSetTimeout(1000)
	.then((data)=>console.log(dat))

