#include <ncurses/ncurses.h>
using namespace std;

int main(){
	initscr();
	
	WINDOW * win = newwin(20, 30, 1, 1);
	//window           // menentukan ukuran kotak
	refresh();
	//refresh
	box(win, 0, 0);
	//ukuran garis tepi/bentuk yg ingin dipakai cth '#'
	wrefresh(win);
	//refresh window
	
	getch();
	endwin();
}
 
 
