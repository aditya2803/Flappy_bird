#include<ncurses.h>
#include<stdlib.h>
WINDOW *gamewin;
void deadflappy(int c, int r);
void drawflappy(int *r, int *c, int *rowbd1, int *rowbd, int *rowb, int *rowb1) {
	int flag = 0;
	if(mvinch(0 + *c, 15 + *r) == '|' || mvinch(0 + *c, 15 + *r) == '-' || mvinch(0 + *c, 15 + *r) == '_') 
		flag = 1;
	if(mvinch(0 + *c, 16 + *r) == '|' || mvinch(0 + *c, 16 + *r) == '-' || mvinch(0 + *c, 16 + *r) == '_') 
		flag = 1;
	if(mvinch(0 + *c, 17 + *r) == '|' || mvinch(0 + *c, 17 + *r) == '-' || mvinch(0 + *c, 17 + *r) == '_') 
		flag = 1;
	if(mvinch(0 + *c, 18 + *r) == '|' || mvinch(0 + *c, 18 + *r) == '-' || mvinch(0 + *c, 18 + *r) == '_') 
		flag = 1;
	if(mvinch(0 + *c, 19 + *r) == '|' || mvinch(0 + *c, 19 + *r) == '-' || mvinch(0 + *c, 19 + *r) == '_') 
		flag = 1;
	if(mvinch(0 + *c, 20 + *r) == '|' || mvinch(0 + *c, 20 + *r) == '-' || mvinch(0 + *c, 20 + *r) == '_') 
		flag = 1;
	if(mvinch(1 + *c, 13 + *r) == '|' || mvinch(1 + *c, 13 + *r) == '-' || mvinch(1 + *c, 13 + *r) == '_') 
		flag = 1;
	if(mvinch(1 + *c, 14 + *r) == '|' || mvinch(1 + *c, 14 + *r) == '-' || mvinch(1 + *c, 14 + *r) == '_') 
		flag = 1;
	if(mvinch(1 + *c, 22 + *r) == '|' || mvinch(1 + *c, 22 + *r) == '-' || mvinch(1 + *c, 22 + *r) == '_') 
		flag = 1;
	if(mvinch(1 + *c, 23 + *r) == '|' || mvinch(1 + *c, 23 + *r) == '-' || mvinch(1 + *c, 23 + *r) == '_') 
		flag = 1;
	if(mvinch(1 + *c, 24 + *r) == '|' || mvinch(1 + *c, 24 + *r) == '-' || mvinch(1 + *c, 24 + *r) == '_') 
		flag = 1;
	if(mvinch(2 + *c, 11 + *r) == '|' || mvinch(2 + *c, 11 + *r) == '-' || mvinch(2 + *c, 11 + *r) == '_') 
		flag = 1;
	if(mvinch(2 + *c, 25 + *r) == '|' || mvinch(2 + *c, 25 + *r) == '-' || mvinch(2 + *c, 25 + *r) == '_') 
		flag = 1;
	if(mvinch(3 + *c, 10 + *r) == '|' || mvinch(3 + *c, 10 + *r) == '-' || mvinch(3 + *c, 10 + *r) == '_')  
		flag = 1;
	if(mvinch(3 + *c, 26 + *r) == '|' || mvinch(3 + *c, 26 + *r) == '-' || mvinch(3 + *c, 26 + *r) == '_') 
		flag = 1;
	if(mvinch(4 + *c, 9 + *r) == '|' || mvinch(4 + *c, 9 + *r) == '-' || mvinch(4 + *c, 9 + *r) == '_') 
		flag = 1;
	if(mvinch(4 + *c, 27 + *r) == '|' || mvinch(4 + *c, 27 + *r) == '-' || mvinch(4 + *c, 27 + *r) == '_') 
		flag = 1;
	if(mvinch(5 + *c, 10 + *r) == '|' || mvinch(5 + *c, 10 + *r) == '-' || mvinch(5 + *c, 10 + *r) == '_') 
		flag = 1;
	if(mvinch(5 + *c, 11 + *r) == '|' || mvinch(5 + *c, 11 + *r) == '-' || mvinch(5 + *c, 11 + *r) == '_') 
		flag = 1;
	if(mvinch(6 + *c, 13 + *r) == '|' || mvinch(6 + *c, 13 + *r) == '-' || mvinch(6 + *c, 13 + *r) == '_') 
		flag = 1;
	if(mvinch(6 + *c, 14 + *r) == '|' || mvinch(6 + *c, 14 + *r) == '-' || mvinch(6 + *c, 14 + *r) == '_')  
		flag = 1;
	if(mvinch(6 + *c, 25 + *r) == '|' || mvinch(6 + *c, 25 + *r) == '-' || mvinch(6 + *c, 15 + *r) == '_') 
		flag = 1;
	if(mvinch(7 + *c, 15 + *r) == '|' || mvinch(7 + *c, 15 + *r) == '-' || mvinch(7 + *c, 15 + *r) == '_') 
		flag = 1;
	if(mvinch(7 + *c, 16 + *r) == '|' || mvinch(7 + *c, 16 + *r) == '-' || mvinch(7 + *c, 16 + *r) == '_') 
		flag = 1;
	if(mvinch(7 + *c, 17 + *r) == '|' || mvinch(7 + *c, 17 + *r) == '-' || mvinch(7 + *c, 17 + *r) == '_') 
		flag = 1;
	if(mvinch(7 + *c, 18 + *r) == '|' || mvinch(7 + *c, 18 + *r) == '-' || mvinch(7 + *c, 18 + *r) == '_') 
		flag = 1;
	if(mvinch(7 + *c, 19 + *r) == '|' || mvinch(7 + *c, 19 + *r) == '-' || mvinch(7 + *c, 19 + *r) == '_') 
		flag = 1;
	if(mvinch(7 + *c, 20 + *r) == '|' || mvinch(7 + *c, 20 + *r) == '-' || mvinch(7 + *c, 20 + *r) == '_')  
		flag = 1;
	if(mvinch(7 + *c, 21 + *r) == '|' || mvinch(7 + *c, 21 + *r) == '-' || mvinch(7 + *c, 21 + *r) == '_') 
		flag = 1;
	mvprintw(0 + *c, 15 + *r, "_");
	mvprintw(0 + *c, 16 + *r, "_");
	mvprintw(0 + *c, 17 + *r, "_");
	mvprintw(0 + *c, 18 + *r, "_");
	mvprintw(0 + *c, 19 + *r, "_");
	mvprintw(0 + *c, 20 + *r, "_");
	mvprintw(1 + *c, 13 + *r, "|");
	mvprintw(1 + *c, 14 + *r, "|");
	mvprintw(1 + *c, 20 + *r, "-");
	mvprintw(1 + *c, 21 + *r, "-");
	mvprintw(1 + *c, 22 + *r, "-");
	mvprintw(1 + *c, 23 + *r, "-");
	mvprintw(1 + *c, 24 + *r, "-");
	mvprintw(2 + *c, 11 + *r, "|");
	mvprintw(2 + *c, 18 + *r, "|");
	mvprintw(2 + *c, 21 + *r, "^");
	mvprintw(2 + *c, 23 + *r, "^");
	mvprintw(2 + *c, 25 + *r, "|");
	mvprintw(3 + *c, 10 + *r, "|");
	mvprintw(3 + *c, 15 + *r, "|");
	mvprintw(3 + *c, 20 + *r, "-");
	mvprintw(3 + *c, 21 + *r, "-");
	mvprintw(3 + *c, 22 + *r, "-");
	mvprintw(3 + *c, 23 + *r, "-");
	mvprintw(3 + *c, 24 + *r, "-");
	mvprintw(3 + *c, 25 + *r, "-");
	mvprintw(3 + *c, 26 + *r, "_");
	mvprintw(4 + *c, 9 + *r, "|");
	mvprintw(4 + *c, 16 + *r, "|");
	mvprintw(4 + *c, 22 + *r, "|");
	mvprintw(4 + *c, 26 + *r, "_");
	mvprintw(4 + *c, 27 + *r, "\\");
	mvprintw(5 + *c, 10 + *r, "|");
	mvprintw(5 + *c, 11 + *r, "_");
	mvprintw(5 + *c, 12 + *r, "_");
	mvprintw(5 + *c, 13 + *r, "_");
	mvprintw(5 + *c, 14 + *r, "|");
	mvprintw(5 + *c, 21 + *r, "|");
	mvprintw(5 + *c, 26 + *r, "_");
	mvprintw(5 + *c, 27 + *r, "/");
	mvprintw(6 + *c, 12 + *r, "|");
	mvprintw(6 + *c, 13 + *r, "_");
	mvprintw(6 + *c, 14 + *r, "_");
	mvprintw(6 + *c, 22 + *r, "_");
	mvprintw(6 + *c, 23 + *r, "_");
	mvprintw(6 + *c, 24 + *r, "|");
	mvprintw(6 + *c, 25 + *r, "|");
	mvprintw(7 + *c, 15 + *r, "-");
	mvprintw(7 + *c, 16 + *r, "-");
	mvprintw(7 + *c, 17 + *r, "-");
	mvprintw(7 + *c, 18 + *r, "-");
	mvprintw(7 + *c, 19 + *r, "-");
	mvprintw(7 + *c, 20 + *r, "-");
	mvprintw(7 + *c, 21 + *r, "-");
	if(flag) {
		nodelay(stdscr, FALSE);
		getch();
		nodelay(stdscr, TRUE);
		*c = 0;
		int x, y;
		getmaxyx(stdscr, y, x);
		while(*c + 9 < y) {
			clear();
			mvprintw(1, 50, "GAME OVER :/");
			deadflappy(*c, *r);
			(*c)++;
			refresh();
			usleep(50000);
		}
		wclear(gamewin);
		wattron(gamewin, COLOR_PAIR(1));
		mvwprintw(gamewin, 0, 0, "1. Try again");
		wattroff(gamewin, COLOR_PAIR(1));
		mvwprintw(gamewin, 1, 0, "2. Quit");
		wrefresh(gamewin);
		int a = 0, nowy, nowx; 
		flag = 0;	
		while(a != '\n') {
			a = wgetch(gamewin);
			getyx(gamewin, nowy, nowx);
			if(a == 'w'  && nowy == 0) {
				wattron(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 0, 0, "1. Try again");
				wattroff(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 1, 0, "2. Quit");
				wrefresh(gamewin);
				flag = 1;
			}	
			else if(a == 'x' && nowy == 0) {
				mvwprintw(gamewin, 0, 0, "1. Try again");
				wattron(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 1, 0, "2. Quit");
				wattroff(gamewin, COLOR_PAIR(1));
				wrefresh(gamewin);
				flag = 2;
			}
			else if(a == 'w' && nowy == 1) {
				wattron(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 0, 0, "1. Try again");
				wattroff(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 1, 0, "2. Quit");
				wrefresh(gamewin);
				flag = 1;
			}	
			else if(a == 'x' && nowy == 1) {
				mvwprintw(gamewin, 0, 0, "1. Try again");
				wattron(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 1, 0, "2. Quit");
				wattroff(gamewin, COLOR_PAIR(1));
				wrefresh(gamewin);
				flag = 2;
			}
		}
		if(flag == 1 || flag == 0) {
			*r = *c = *rowb = *rowb1 = *rowbd = *rowbd1 = 0;
			attroff(COLOR_PAIR(1));
			clear();
			refresh();
		}
		else if(flag == 2) {
			endwin();
			exit(0);
		}
	}	
}
void drawupblock(int x) {
	mvprintw(0, 50 + x, "|");
	mvprintw(1, 50 + x, "|");
	mvprintw(2, 50 + x, "|");
	mvprintw(3, 50 + x, "|");
	mvprintw(4, 50 + x, "|");
	mvprintw(5, 50 + x, "|");
	mvprintw(6, 50 + x, "|");
	mvprintw(7, 50 + x, "|");
	mvprintw(8, 50 + x, "|");
	mvprintw(9, 50 + x, "|");
	mvprintw(10, 50 + x, "|");
	mvprintw(11, 50 + x, "|");
	mvprintw(12, 50 + x, "|");
	mvprintw(12, 51 + x, "_");
	mvprintw(12, 52 + x, "_");
	mvprintw(12, 53 + x, "_");
	mvprintw(12, 54 + x, "_");
	mvprintw(12, 55 + x, "_");
	mvprintw(12, 56 + x, "_");
	mvprintw(12, 57 + x, "_");
	mvprintw(12, 58 + x, "_");
	mvprintw(12, 58 + x, "_");
	mvprintw(12, 59 + x, "|");
	mvprintw(11, 59 + x, "|");
	mvprintw(10, 59 + x, "|");
	mvprintw(9, 59 + x, "|");
	mvprintw(8, 59 + x, "|");
	mvprintw(7, 59 + x, "|");
	mvprintw(6, 59 + x, "|");
	mvprintw(5, 59 + x, "|");
	mvprintw(4, 59 + x, "|");
	mvprintw(3, 59 + x, "|");
	mvprintw(2, 59 + x, "|");
	mvprintw(1, 59 + x, "|");
	mvprintw(0, 59 + x, "|");
}
void drawupblock1(int x) {
	mvprintw(0, 130 + x, "|");
	mvprintw(1, 130 + x, "|");
	mvprintw(2, 130 + x, "|");
	mvprintw(3, 130 + x, "|");
	mvprintw(4, 130 + x, "|");
	mvprintw(5, 130 + x, "|");
	mvprintw(6, 130 + x, "|");
	mvprintw(7, 130 + x, "|");
	mvprintw(8, 130 + x, "|");
	mvprintw(9, 130 + x, "|");
	mvprintw(10, 130 + x, "|");
	mvprintw(11, 130 + x, "|");
	mvprintw(12, 130 + x, "|");
	mvprintw(12, 131 + x, "_");
	mvprintw(12, 132 + x, "_");
	mvprintw(12, 133 + x, "_");
	mvprintw(12, 134 + x, "_");
	mvprintw(12, 135 + x, "_");
	mvprintw(12, 136 + x, "_");
	mvprintw(12, 137 + x, "_");
	mvprintw(12, 138 + x, "_");
	mvprintw(12, 139 + x, "|");
	mvprintw(11, 139 + x, "|");
	mvprintw(10, 139 + x, "|");
	mvprintw(9, 139 + x, "|");
	mvprintw(8, 139 + x, "|");
	mvprintw(7, 139 + x, "|");
	mvprintw(6, 139 + x, "|");
	mvprintw(5, 139 + x, "|");
	mvprintw(4, 139 + x, "|");
	mvprintw(3, 139 + x, "|");
	mvprintw(2, 139 + x, "|");
	mvprintw(1, 139 + x, "|");
	mvprintw(0, 139 + x, "|");
}
void drawdownblock(int x) {
	int x1, y1;
	getmaxyx(stdscr, x1, y1);
	mvprintw(x1 - 1, 50 + x, "|");
	mvprintw(x1 - 2, 50 + x, "|");      //       90 = 50
	mvprintw(x1 - 3, 50 + x, "|");
	mvprintw(x1 - 4, 50 + x, "|");
	mvprintw(x1 - 5, 50 + x, "|");
	mvprintw(x1 - 6, 50 + x, "|");
	mvprintw(x1 - 7, 50 + x, "|");
	mvprintw(x1 - 8, 50 + x, "|");
	mvprintw(x1 - 9, 50 + x, "|");
	mvprintw(x1 - 10, 50 + x, "|");
	mvprintw(x1 - 11, 50 + x, "|");
	mvprintw(x1 - 12, 50 + x, "|");
	mvprintw(x1 - 13, 50 + x, "|");
	mvprintw(x1 - 13, 50 + x, "-");
	mvprintw(x1 - 13, 51 + x, "-");
	mvprintw(x1 - 13, 52 + x, "-");
	mvprintw(x1 - 13, 53 + x, "-");
	mvprintw(x1 - 13, 54 + x, "-");
	mvprintw(x1 - 13, 55 + x, "-");
	mvprintw(x1 - 13, 56 + x, "-");
	mvprintw(x1 - 13, 57 + x, "-");
	mvprintw(x1 - 13, 58 + x, "-");
	mvprintw(x1 - 13, 59 + x, "-");
	mvprintw(x1 - 12, 59 + x, "|");
	mvprintw(x1 - 11, 59 + x, "|");
	mvprintw(x1 - 10, 59 + x, "|");
	mvprintw(x1 - 9, 59 + x, "|");
	mvprintw(x1 - 8, 59 + x, "|");
	mvprintw(x1 - 7, 59 + x, "|");
	mvprintw(x1 - 6, 59 + x, "|");
	mvprintw(x1 - 5, 59 + x, "|");
	mvprintw(x1 - 4, 59 + x, "|");
	mvprintw(x1 - 3, 59 + x, "|");
	mvprintw(x1 - 2, 59 + x, "|");
	mvprintw(x1 - 1, 59 + x, "|");
}  
void drawdownblock1(int x) {
	int x1, y1;
	getmaxyx(stdscr, x1, y1);
	mvprintw(x1 - 1, 130 + x, "|");
	mvprintw(x1 - 2, 130 + x, "|");
	mvprintw(x1 - 3, 130 + x, "|");
	mvprintw(x1 - 4, 130 + x, "|");
	mvprintw(x1 - 5, 130 + x, "|");
	mvprintw(x1 - 6, 130 + x, "|");
	mvprintw(x1 - 7, 130 + x, "|");
	mvprintw(x1 - 8, 130 + x, "|");
	mvprintw(x1 - 9, 130 + x, "|");
	mvprintw(x1 - 10, 130 + x, "|");
	mvprintw(x1 - 11, 130 + x, "|");
	mvprintw(x1 - 12, 130 + x, "|");
	mvprintw(x1 - 13, 130 + x, "|");
	mvprintw(x1 - 13, 130 + x, "-");
	mvprintw(x1 - 13, 131 + x, "-");
	mvprintw(x1 - 13, 132 + x, "-");
	mvprintw(x1 - 13, 133 + x, "-");
	mvprintw(x1 - 13, 134 + x, "-");
	mvprintw(x1 - 13, 135 + x, "-");
	mvprintw(x1 - 13, 136 + x, "-");
	mvprintw(x1 - 13, 137 + x, "-");
	mvprintw(x1 - 13, 138 + x, "-");
	mvprintw(x1 - 13, 139 + x, "-");
	mvprintw(x1 - 12, 139 + x, "|");
	mvprintw(x1 - 11, 139 + x, "|");
	mvprintw(x1 - 10, 139 + x, "|");
	mvprintw(x1 - 9, 139 + x, "|");
	mvprintw(x1 - 8, 139 + x, "|");
	mvprintw(x1 - 7, 139 + x, "|");
	mvprintw(x1 - 6, 139 + x, "|");
	mvprintw(x1 - 5, 139 + x, "|");
	mvprintw(x1 - 4, 139 + x, "|");
	mvprintw(x1 - 3, 139 + x, "|");
	mvprintw(x1 - 2, 139 + x, "|");
	mvprintw(x1 - 1, 139 + x, "|");
}
void deadflappy(int c, int r) {
	mvprintw(0 + c, 35 + r, "_");
	mvprintw(0 + c, 36 + r, "_");
	mvprintw(0 + c, 37 + r, "_");
	mvprintw(0 + c, 38 + r, "_");
	mvprintw(0 + c, 39 + r, "_");
	mvprintw(0 + c, 40 + r, "_");	//20 = 40
	mvprintw(1 + c, 33 + r, "|");
	mvprintw(1 + c, 34 + r, "|");
	mvprintw(1 + c, 40 + r, "-");
	mvprintw(1 + c, 41 + r, "-");
	mvprintw(1 + c, 42 + r, "-");
	mvprintw(1 + c, 43 + r, "-");
	mvprintw(1 + c, 44 + r, "-");
	mvprintw(2 + c, 31 + r, "|");
	mvprintw(2 + c, 38 + r, "|");
	mvprintw(2 + c, 41 + r, "*");
	mvprintw(2 + c, 43 + r, "*");
	mvprintw(2 + c, 45 + r, "|");
	mvprintw(3 + c, 30 + r, "|");
	mvprintw(3 + c, 35 + r, "|");
	mvprintw(3 + c, 40 + r, "-");
	mvprintw(3 + c, 41 + r, "-");
	mvprintw(3 + c, 42 + r, "-");
	mvprintw(3 + c, 43 + r, "-");
	mvprintw(3 + c, 44 + r, "-");
	mvprintw(3 + c, 45 + r, "-");
	mvprintw(3 + c, 46 + r, "_");
	mvprintw(4 + c, 29 + r, "|");
	mvprintw(4 + c, 36 + r, "|");
	mvprintw(4 + c, 42 + r, "|");
	mvprintw(4 + c, 46 + r, "_");
	mvprintw(4 + c, 47 + r, "\\");
	mvprintw(5 + c, 30 + r, "|");
	mvprintw(5 + c, 31 + r, "_");
	mvprintw(5 + c, 32 + r, "_");
	mvprintw(5 + c, 33 + r, "_");
	mvprintw(5 + c, 34 + r, "|");
	mvprintw(5 + c, 41 + r, "|");
	mvprintw(5 + c, 46 + r, "_");
	mvprintw(5 + c, 47 + r, "/");
	mvprintw(6 + c, 32 + r, "|");
	mvprintw(6 + c, 33 + r, "_");
	mvprintw(6 + c, 34 + r, "_");
	mvprintw(6 + c, 42 + r, "_");
	mvprintw(6 + c, 43 + r, "_");
	mvprintw(6 + c, 44 + r, "|");
	mvprintw(6 + c, 45 + r, "|");
	mvprintw(7 + c, 35 + r, "-");
	mvprintw(7 + c, 36 + r, "-");
	mvprintw(7 + c, 37 + r, "-");
	mvprintw(7 + c, 38 + r, "-");
	mvprintw(7 + c, 39 + r, "-");
	mvprintw(7 + c, 40 + r, "-");
	mvprintw(7 + c, 41 + r, "-");

}
#define DELAY 80000
int main() {
	int row = 0, column = 0, x, y, rowb = 0, rowbd = 0, rowb1 = 0, rowbd1 = 0;
	initscr();
	noecho();
	start_color();
	init_pair(1, COLOR_RED, COLOR_YELLOW);		
	curs_set(0);
	getmaxyx(stdscr, y, x);					//x is no. of columns = 150, y is no. of rows = 37 
	gamewin = newwin(y, x, 0, 0);
	drawflappy(&row, &column, &rowbd, &rowbd1, &rowb, &rowb1);
	refresh();
	while(1) {	
		nodelay(stdscr, TRUE);	
		usleep(DELAY);	
		refresh();
		int c = getch();
		flushinp();
		if(c != 32 && c != 'q') {
			if(column + 9 > y) {
				clear();
				rowbd1--;
				rowb1--;
				rowb--;
				rowbd--;
				drawdownblock(rowbd);
				drawupblock(rowb);
				drawupblock1(rowb1);
				drawdownblock1(rowbd1);
				drawflappy(&row, &column, &rowb, &rowb1, &rowbd1, &rowbd);
				if(rowb < -59)
					rowb = x - 50;
				if(rowbd < -59)
					rowbd = x - 50;
				if(rowb1 < -139)
					rowb1 = x - 130;
				if(rowbd1 < -139)
					rowbd1 = x - 130;
				clear();
				row = 0;
				while(row + 9 < y) {
					clear();
					mvprintw(1, 50, "GAME OVER :/");
					deadflappy(row, column);
					row++;
					refresh();
					usleep(50000);
				}
				wclear(gamewin);
				wattron(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 0, 0, "1. Try again");
				wattroff(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 1, 0, "2. Quit");
				wrefresh(gamewin);
				int a = 0, nowy, nowx, flag = 0;	
				while(a != '\n') {
					a = wgetch(gamewin);
					getyx(gamewin, nowy, nowx);
					if(a == 'w'  && nowy == 0) {
						wattron(gamewin, COLOR_PAIR(1));
						mvwprintw(gamewin, 0, 0, "1. Try again");
						wattroff(gamewin, COLOR_PAIR(1));
						mvwprintw(gamewin, 1, 0, "2. Quit");
						wrefresh(gamewin);
						flag = 1;
					}	
					else if(a == 'x' && nowy == 0) {
						mvwprintw(gamewin, 0, 0, "1. Try again");
						wattron(gamewin, COLOR_PAIR(1));
						mvwprintw(gamewin, 1, 0, "2. Quit");
						wattroff(gamewin, COLOR_PAIR(1));
						wrefresh(gamewin);
						flag = 2;
					}
					else if(a == 'w' && nowy == 1) {
						wattron(gamewin, COLOR_PAIR(1));
						mvwprintw(gamewin, 0, 0, "1. Try again");
						wattroff(gamewin, COLOR_PAIR(1));
						mvwprintw(gamewin, 1, 0, "2. Quit");
						wrefresh(gamewin);
						flag = 1;
					}	
					else if(a == 'x' && nowy == 1) {
						mvwprintw(gamewin, 0, 0, "1. Try again");
						wattron(gamewin, COLOR_PAIR(1));
						mvwprintw(gamewin, 1, 0, "2. Quit");
						wattroff(gamewin, COLOR_PAIR(1));
						wrefresh(gamewin);
						flag = 2;
					}
				}
				if(flag == 1 || flag == 0) {
					row = column = rowb = rowb1 = rowbd = rowbd1 = 0;
					attroff(COLOR_PAIR(1));
					clear();
					refresh();
				}
				else if(flag == 2) {
					endwin();
					exit(0);
				}	
			}
			else {
				clear();
				rowbd1--;
				rowb--;
				rowbd--;
				rowb1--;
				drawdownblock(rowbd);
				drawupblock(rowb);
				drawupblock1(rowb1);
				drawdownblock1(rowbd1);
				column++;
				drawflappy(&row, &column, &rowb, &rowbd, &rowbd1, &rowb1);
				if(rowb < -59)
					rowb = x - 50;
				if(rowbd < -59)
					rowbd = x - 50;
				if(rowb1 < -139)
					rowb1 = x - 130;
				if(rowbd1 < -139)
					rowbd1 = x - 130;
			}
		}	
		else if(c == 32) {
			clear();
			rowbd1--;
			rowb1--;
			rowb--;
			rowbd--;
			drawdownblock(rowbd);
			drawupblock(rowb);
			drawupblock1(rowb1);
			drawdownblock1(rowbd1);
			column--;
			drawflappy(&row, &column, &rowb, &rowbd, &rowbd1, &rowb1);
			column -= 3;
			if(rowb1 < -139)
				rowb1 = x - 130;
			if(rowbd1 < -139)
				rowbd1 = x - 130;
			if(rowb < -57)
				rowb = x - 50;
			if(rowbd < -57)
				rowbd = x - 50;		
		}
		else if(c == 'q') 
			break;
		refresh();
	}
	endwin();
	return 0;
}



	
	

