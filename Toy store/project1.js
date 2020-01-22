// JavaScript source code

let btn1=document.getElementById("btn");
let numbr=document.getElementById("street").value;
let code=document.getElementById("zip").value;
let acity= document.getElementById("city").value;
let astate=document.getElementById("state").value;


	btn1.onclick=function(){
		if( numbr.length==0 || acity.length==0 || code.length==0|| astate.length==0 ){
			document.getElementById("alertmsg").innerHTML="<div class='alert alert-danger'>invalid Information Given</div>";
		}
			document.body.innerHTML="<div class='font-weight-bold'>Thank You For Shopping with ";
		}
		
	