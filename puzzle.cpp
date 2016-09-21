#include "puzzle.h"

Puzzle::Puzzle(){
	for(int i = 0; i < 45; i++)
		board[i] = ' ';
	for(int i = 0; i < 7; i++)
		faces[i] = false;
	pos = 0;
	won = false;
	updateboard();
}

void Puzzle::print(){
	updateboard();

	cout << "                  ** vv" << endl;
	for(int i = 0; i < 45; i++)
		cout << board[i]; 
	cout << endl << "                  ** ^^" << endl;
}

bool Puzzle::move(char c){
	switch(c){
	case 'j': //moving left
		if(pos < 1) //if already all the way left
			return false;
		else
			pos--;
		break;
	case 'k': //moving right
		if(board[21] == 'X') //if blocked because face mad
			return false;
		else
			pos++;
		break;
	case 'f': //changing
		if(board[18] == ' ' or board[21] == ':')
			return false;
		else
			faces[6-pos] = !faces[6-pos];
		break;
	default:
		return false;
	}
	
	return true;
}

void Puzzle::updateboard(){
	if(pos == 8)
		won = true;

	for(int i = 0; i < 45; i++)
		board[i] = ' ';

      	int printpos = pos*3;
	for(int i = 0; i < 7; i++){
		if(faces[i]){ //printing a happy face
			board[printpos] = ':';
			board[printpos+1] = ')';
		}
		else { //printing a sad face
			board[printpos] = 'X';
			board[printpos+1] = '(';
		}
		printpos += 3;
	}
}
