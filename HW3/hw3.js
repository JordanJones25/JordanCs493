// JavaScript source code
let btn1= document.getElementById("btn-add");
let btn2=document.getElementById("btn-clear");

count=1;

btn1.onclick=function(){
	
	
		let para1 =document.getElementById("name").value;
		let para2=document.getElementById("last-name").value;
		let tablelist=document.getElementById("table-body");
		//let listitem=document.getElementsByClassName("table")[0]; 
		
		
		

		
			if(para1.length.oninput== 0 || para2.length== 0){
		
				document.getElementById("alertmsg").innerHTML="<div class='alert alert-success'>Need a First and Lastname</div>";

				return false;
			}else{
				document.getElementById("alertmsg").innerHTML="";
			}
		
		
	
			let a=document.createElement("TR");
			let b=document.createElement("TD");
			let c=document.createElement("TD");
			let d=document.createElement("TD");
				tablelist.appendChild(a);
				tablelist.appendChild(b).innerHTML=count++;
				tablelist.appendChild(c).innerHTML=para1;
				tablelist.appendChild(d).innerHTML=para2;
				
				document.getElementById("name").value="";
				document.getElementById("last-name").value="";
				//listitem.appendChild(table);

				return true;
}

btn2.onclick= function(){
	let paraentNode= document.getElementById("table-body").innerHTML=" ";
	document.getElementById("name").value="";
	document.getElementById("last-name").value="";
}
words=document.getElementById("txtInput");
document.getElementById("txtCursive").style.fontFamily ="Sofia";

words.oninput= function (){
	
	document.getElementById("txtUC").innerHTML= words.value.toUpperCase();
	document.getElementById("txtLC").innerHTML= words.value.toLowerCase();
	document.getElementById("txtRed").innerHTML= words.value.fontcolor( "red");
	;
	document.getElementById("txtCursive").innerHTML= words.value;
}

console.log ("help");