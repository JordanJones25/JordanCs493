#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/* CS357
Jordan Jones
Ritchie Chen
Project#1
Oct/16/2020*/


void LexmeChart(){
	ifstream infile;
	infile.open("Pizza.dat");
//	string text;
	char text;
	int a;
		cout<<"Lexeme \t"<<"|"<<"Token\n";
		cout<<"--------------------------\n";
		if(!infile){
			cout<<"this is where the chart be, IF I HAD ONE!!! \n";
		}
			while(infile>>text || infile>>a){
			
				if(text=='('){
					infile>>text;		
					cout<<"("<<"\t"<<"open_Par \n";
					}
				if(text==')'){
					infile>>text;		
					cout<<")"<<"\t"<<"closed_Par \n";
				}
				if(text=='='){
					infile>>text;
					cout<<"="<<"\t"<<"Equal_Sign \n";
				}
				if(text=='*'){
					infile>>text;
					cout<<"*"<<"\t"<<"Multi_Sign \n";
					}
				if(text=='+'){
					infile>>text;
					cout<<"+"<<"\t"<<"Add_Sign \n";
				}
				if(text=='-'){
					infile>>text;
					cout<<"-"<<"\t"<<"Sub_Sign \n";
				}
				if(text=='b'){
				cout<<text<<"\t"<<"identifier  \n";
				}
				if(text=='a'){
				cout<<text<<"\t"<<"identifier  \n";
				}
				if(a%2==0){
					cout<<a<<"\t"<<"even_Number \n";
				}
				
				
				
				
				
				
				
				
		}

	cout<<"-------------------------------\n";
		infile.close();
}
void Dictionary(){
			char house;
			string lexeme,Lexeme;
			string token,Token;
			char quit='q';
			
			while(house!='q')
			{
			
			cout<<"---------dictionary----------- \n";
			cout<<"1-Lexeme \n";
			cout<<"2-Token \n";
			cout<<"q-return to main menu \n";
			cin>>house;
				if(house=='1'){
					cout<<"Lexeme"<<endl;
					cout<<"-------------------------------------\n";
					cout<<"a basic lexical unit of a language, \n";
					cout<<"consisting of one word or several words, considered \n";
					cout<<"as an abstract unit, and applied to a family of words related by form or meaning.\n";
				
					}
				if(house=='2'){
					cout<<"Token \n";
					cout<<"-------------------------------------\n";
					cout<<"A token is the smallest element of a C++ program that is meaningful to the compiler \n";
					cout<<"The C++ parser recognizes these kinds of tokens: identifiers, keywords, literals, operators, \n";
					cout<<" punctuators, and other separators. A stream of these tokens makes up a translation unit. \n";
					
					}
			}
	
}

void InputData(){
	ofstream outfile;
	outfile.open("");
	string roof;
	if(!outfile){
		cout<<"strange thought something was suppose to happen \n";
	}
	while(roof!="q"){
	cout<<"Write a operation \n";
	cout<<"q-return to main menu \n";
	cin>>roof;
		if(roof=="("&& roof!=")")
			{
			cout<<"Syntax Error-try again \n";
			}
	
	}
}
void Display(){
	ifstream infile;
	ofstream myfile;
	infile.open("Pizza.dat");
	string mytext;
		if(!infile){
				cout<<"no file found \n";
			}
		while(getline (infile,mytext))
		{
		infile>>mytext;
		cout<<mytext;	
		}
	cout<<"\n";
		infile.close();
	}
int main(int argc, char** argv) {
	int temp;
	char input;
	char ch='q';
	 while(input!=ch){
	 
	  
	 //-----------The menu---------------------//
	cout<<"-----------Lexical Analyzer-----------"<<endl;
	cout<<"-----------Menu-----------"<<endl;
	cout<<"a- Read File \n";
	cout<<"b- Input Data \n";
	cout<<"c-dictionary \n";
	cout<<"q-quit \n";
	cout<<"-------------------------------------\n";
	cin>>input;
	

	
	switch(input){
	
		case 'a': 
		case 'A':
	Display();	
	LexmeChart();
	

break;
	 	case'b':
	 	case 'B':
	InputData();
	 		
break;	 
		case'c':
		case'C':
	Dictionary();
break;
			
		case'q':
		case'Q':
			cout<<"Thank you, this is the end of the program \n ";
			
break;
		default: 
			cin>>input;
			cout<<"error please try again"<<endl; 
		
		

}
}

	return 0;
}






	
