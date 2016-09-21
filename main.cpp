#include "termfuncs.h"
#include "puzzle.h"

int main(){
	Puzzle p;
	char c;
	
	screen_clear();
	screen_home();
	p.print();

	while(!p.won){
		do{
			c = getachar();
		}while(!p.move(c));
		screen_clear();
		screen_home();
		p.print();
	}
	
	screen_clear();
	screen_home();
	cout << "Congrats!" << endl;

	return 0;
}
