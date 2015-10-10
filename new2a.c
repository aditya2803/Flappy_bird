#include<ncurses.h>
#include<stdlib.h>
void drawflappy(int r, int c) {
/*	start_color();
	init_pair(1, COLOR_BLACK, COLOR_CYAN);
	bkgd(COLOR_PAIR(1));
*/	if(mvinch(0 + c, 15 + r) == '-' || mvinch(0 + c, 15 + r) == '|') {
		endwin();
		exit(0);
	}
	mvprintw(0 + c, 15 + r, "-");
	mvprintw(0 + c, 16 + r, "-");
	mvprintw(0 + c, 17 + r, "-");
	mvprintw(0 + c, 18 + r, "-");
	mvprintw(0 + c, 19 + r, "-");
	mvprintw(0 + c, 20 + r, "-");
	mvprintw(0 + c, 21 + r, "-");
	mvprintw(0 + c, 22 + r, "-");
	mvprintw(0 + c, 23 + r, "-");
	mvprintw(0 + c, 24 + r, "-");
	mvprintw(0 + c, 25 + r, "-");
	mvprintw(0 + c, 26 + r, "-");
	mvprintw(0 + c, 27 + r, "-");
	mvprintw(0 + c, 28 + r, "-");
	mvprintw(0 + c, 29 + r, "-");
	mvprintw(0 + c, 30 + r, "-");
	mvprintw(0 + c, 31 + r, "-");
	mvprintw(1 + c, 14 + r, "|");
	mvprintw(1 + c, 25 + r, "_");
	mvprintw(1 + c, 26 + r, "_");
	mvprintw(1 + c, 27 + r, "_");
	mvprintw(1 + c, 28 + r, "_");
	mvprintw(1 + c, 32 + r, "|");
	mvprintw(2 + c, 11 + r, "-");
	mvprintw(2 + c, 12 + r, "-");
	mvprintw(2 + c, 13 + r, "-");
	mvprintw(2 + c, 14 + r, "-");
	mvprintw(2 + c, 15 + r, "_");
	mvprintw(2 + c, 16 + r, "_");
	mvprintw(2 + c, 17 + r, "_");
	mvprintw(2 + c, 18 + r, "_");
	mvprintw(2 + c, 19 + r, "_");
	mvprintw(2 + c, 25 + r, "|");
	mvprintw(2 + c, 28 + r, "|");
	mvprintw(2 + c, 32 + r, "-");
	mvprintw(2 + c, 33 + r, "-");
	mvprintw(2 + c, 34 + r, "-");
	mvprintw(2 + c, 35 + r, "-");
	mvprintw(2 + c, 36 + r, "-");
	mvprintw(2 + c, 37 + r, "-");
	mvprintw(3 + c, 11 + r, "|");
	mvprintw(3 + c, 20 + r, "|");
	mvprintw(3 + c, 25 + r, "|");
	mvprintw(3 + c, 28 + r, "|");
	mvprintw(3 + c, 37 + r, "|");
	mvprintw(4 + c, 10 + r, "|");
	mvprintw(4 + c, 20 + r, "-");
	mvprintw(4 + c, 21 + r, "-");
	mvprintw(4 + c, 25 + r, "|");
	mvprintw(4 + c, 26 + r, "_");
	mvprintw(4 + c, 27 + r, "_");
	mvprintw(4 + c, 28 + r, "|");
	mvprintw(4 + c, 37 + r, "|");
	mvprintw(5 + c, 10 + r, "|");
	mvprintw(5 + c, 22 + r, "|");
	mvprintw(5 + c, 37 + r, "|");
	mvprintw(6 + c, 11 + r, "|");
	mvprintw(6 + c, 12 + r, "_");
	mvprintw(6 + c, 13 + r, "_");
	mvprintw(6 + c, 20 + r, "-");
	mvprintw(6 + c, 21 + r, "-");
	mvprintw(6 + c, 22 + r, "|");
	mvprintw(6 + c, 27 + r, "_");
	mvprintw(6 + c, 28 + r, "_");
	mvprintw(6 + c, 29 + r, "_");
	mvprintw(6 + c, 30 + r, "_");
	mvprintw(6 + c, 31 + r, "_");
	mvprintw(6 + c, 32 + r, "_");
	mvprintw(6 + c, 33 + r, "_");
	mvprintw(6 + c, 34 + r, "_");
	mvprintw(6 + c, 35 + r, "_");
	mvprintw(6 + c, 36 + r, "_");
	mvprintw(6 + c, 37 + r, "|");
	mvprintw(6 + c, 38 + r, "_");
	mvprintw(6 + c, 39 + r, "_");
	mvprintw(7 + c, 14 + r, "|");
	mvprintw(7 + c, 20 + r, "|");
	mvprintw(7 + c, 28 + r, "|");
	mvprintw(7 + c, 29 + r, "_");
	mvprintw(7 + c, 30 + r, "_");
	mvprintw(7 + c, 31 + r, "_");
	mvprintw(7 + c, 32 + r, "_");
	mvprintw(7 + c, 33 + r, "_");
	mvprintw(7 + c, 34 + r, "_");
	mvprintw(7 + c, 35 + r, "_");
	mvprintw(7 + c, 36 + r, "_");
	mvprintw(7 + c, 37 + r, "_");
	mvprintw(7 + c, 38 + r, "|");
	mvprintw(7 + c, 39 + r, "|");
	mvprintw(8 + c, 14 + r, "|");
	mvprintw(8 + c, 15 + r, "-");
	mvprintw(8 + c, 16 + r, "-");
	mvprintw(8 + c, 17 + r, "-");
	mvprintw(8 + c, 18 + r, "-");
	mvprintw(8 + c, 19 + r, "-");
	mvprintw(8 + c, 20 + r, "|");
	mvprintw(8 + c, 29 + r, "|");
	mvprintw(8 + c, 30 + r, "_");
	mvprintw(8 + c, 31 + r, "_");
	mvprintw(8 + c, 32 + r, "_");
	mvprintw(8 + c, 33 + r, "_");
	mvprintw(8 + c, 34 + r, "_");
	mvprintw(8 + c, 35 + r, "_");
	mvprintw(8 + c, 36 + r, "_");
	mvprintw(8 + c, 37 + r, "_");
	mvprintw(8 + c, 38 + r, "_");
	mvprintw(8 + c, 39 + r, "|");
	mvprintw(9 + c, 14 + r, "|");
	mvprintw(9 + c, 30 + r, "|");
	mvprintw(9 + c, 31 + r, "_");
	mvprintw(9 + c, 32 + r, "_");
	mvprintw(9 + c, 33 + r, "_");
	mvprintw(9 + c, 34 + r, "_");
	mvprintw(9 + c, 35 + r, "_");
	mvprintw(9 + c, 36 + r, "_");
	mvprintw(9 + c, 37 + r, "|");
	mvprintw(10 + c, 14 + r, "-");
	mvprintw(10 + c, 15 + r, "-");
	mvprintw(10 + c, 30 + r, "|");
	mvprintw(11 + c, 16 + r, "|");
	mvprintw(11 + c, 17 + r, "_");
	mvprintw(11 + c, 18 + r, "_");
	mvprintw(11 + c, 19 + r, "_");
	mvprintw(11 + c, 20 + r, "_");
	mvprintw(11 + c, 21 + r, "_");
	mvprintw(11 + c, 22 + r, "_");
	mvprintw(11 + c, 23 + r, "_");
	mvprintw(11 + c, 24 + r, "_");
	mvprintw(11 + c, 25 + r, "_");
	mvprintw(11 + c, 26 + r, "_");
	mvprintw(11 + c, 27 + r, "_");
	mvprintw(11 + c, 28 + r, "_");
	mvprintw(11 + c, 29 + r, "_");
	mvprintw(11 + c, 30 + r, "|");
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
	mvprintw(13, 50 + x, "|");
	mvprintw(14, 50 + x, "|");
	mvprintw(15, 50 + x, "|");	
	mvprintw(15, 51 + x, "_");
	mvprintw(15, 52 + x, "_");
	mvprintw(15, 53 + x, "_");
	mvprintw(15, 54 + x, "_");
	mvprintw(15, 55 + x, "_");
	mvprintw(15, 56 + x, "_");
	mvprintw(15, 57 + x, "_");
	mvprintw(15, 58 + x, "_");
	mvprintw(15, 59 + x, "|");
	mvprintw(14, 59 + x, "|");
	mvprintw(13, 59 + x, "|");
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
	mvprintw(13, 130 + x, "|");
	mvprintw(14, 130 + x, "|");
	mvprintw(15, 130 + x, "|");	
	mvprintw(15, 131 + x, "_");
	mvprintw(15, 132 + x, "_");
	mvprintw(15, 133 + x, "_");
	mvprintw(15, 134 + x, "_");
	mvprintw(15, 135 + x, "_");
	mvprintw(15, 136 + x, "_");
	mvprintw(15, 137 + x, "_");
	mvprintw(15, 138 + x, "_");
	mvprintw(15, 139 + x, "|");
	mvprintw(14, 139 + x, "|");
	mvprintw(13, 139 + x, "|");
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
	mvprintw(x1 - 1, 90 + x, "|");
	mvprintw(x1 - 2, 90 + x, "|");
	mvprintw(x1 - 3, 90 + x, "|");
	mvprintw(x1 - 4, 90 + x, "|");
	mvprintw(x1 - 5, 90 + x, "|");
	mvprintw(x1 - 6, 90 + x, "|");
	mvprintw(x1 - 7, 90 + x, "|");
	mvprintw(x1 - 8, 90 + x, "|");
	mvprintw(x1 - 9, 90 + x, "|");
	mvprintw(x1 - 10, 90 + x, "|");
	mvprintw(x1 - 11, 90 + x, "|");
	mvprintw(x1 - 12, 90 + x, "|");
	mvprintw(x1 - 13, 90 + x, "|");
	mvprintw(x1 - 14, 90 + x, "|");
	mvprintw(x1 - 15, 90 + x, "|");
	mvprintw(x1 - 16, 90 + x, "|");
	mvprintw(x1 - 16, 90 + x, "-");
	mvprintw(x1 - 16, 91 + x, "-");
	mvprintw(x1 - 16, 92 + x, "-");
	mvprintw(x1 - 16, 93 + x, "-");
	mvprintw(x1 - 16, 94 + x, "-");
	mvprintw(x1 - 16, 95 + x, "-");
	mvprintw(x1 - 16, 96 + x, "-");
	mvprintw(x1 - 16, 97 + x, "-");
	mvprintw(x1 - 16, 98 + x, "-");
	mvprintw(x1 - 16, 99 + x, "-");
	mvprintw(x1 - 15, 99 + x, "|");
	mvprintw(x1 - 15, 99 + x, "|");
	mvprintw(x1 - 14, 99 + x, "|");
	mvprintw(x1 - 13, 99 + x, "|");
	mvprintw(x1 - 12, 99 + x, "|");
	mvprintw(x1 - 11, 99 + x, "|");
	mvprintw(x1 - 10, 99 + x, "|");
	mvprintw(x1 - 9, 99 + x, "|");
	mvprintw(x1 - 8, 99 + x, "|");
	mvprintw(x1 - 7, 99 + x, "|");
	mvprintw(x1 - 6, 99 + x, "|");
	mvprintw(x1 - 5, 99 + x, "|");
	mvprintw(x1 - 4, 99 + x, "|");
	mvprintw(x1 - 3, 99 + x, "|");
	mvprintw(x1 - 2, 99 + x, "|");
	mvprintw(x1 - 1, 99 + x, "|");
}  
void drawdownblock1(int x) {
	int x1, y1;
	getmaxyx(stdscr, x1, y1);
	mvprintw(x1 - 1, 170 + x, "|");
	mvprintw(x1 - 2, 170 + x, "|");
	mvprintw(x1 - 3, 170 + x, "|");
	mvprintw(x1 - 4, 170 + x, "|");
	mvprintw(x1 - 5, 170 + x, "|");
	mvprintw(x1 - 6, 170 + x, "|");
	mvprintw(x1 - 7, 170 + x, "|");
	mvprintw(x1 - 8, 170 + x, "|");
	mvprintw(x1 - 9, 170 + x, "|");
	mvprintw(x1 - 10, 170 + x, "|");
	mvprintw(x1 - 11, 170 + x, "|");
	mvprintw(x1 - 12, 170 + x, "|");
	mvprintw(x1 - 13, 170 + x, "|");
	mvprintw(x1 - 14, 170 + x, "|");
	mvprintw(x1 - 15, 170 + x, "|");
	mvprintw(x1 - 16, 170 + x, "|");
	mvprintw(x1 - 16, 170 + x, "-");
	mvprintw(x1 - 16, 171 + x, "-");
	mvprintw(x1 - 16, 172 + x, "-");
	mvprintw(x1 - 16, 173 + x, "-");
	mvprintw(x1 - 16, 174 + x, "-");
	mvprintw(x1 - 16, 175 + x, "-");
	mvprintw(x1 - 16, 176 + x, "-");
	mvprintw(x1 - 16, 177 + x, "-");
	mvprintw(x1 - 16, 178 + x, "-");
	mvprintw(x1 - 16, 179 + x, "-");
	mvprintw(x1 - 15, 179 + x, "|");
	mvprintw(x1 - 15, 179 + x, "|");
	mvprintw(x1 - 14, 179 + x, "|");
	mvprintw(x1 - 13, 179 + x, "|");
	mvprintw(x1 - 12, 179 + x, "|");
	mvprintw(x1 - 11, 179 + x, "|");
	mvprintw(x1 - 10, 179 + x, "|");
	mvprintw(x1 - 9, 179 + x, "|");
	mvprintw(x1 - 8, 179 + x, "|");
	mvprintw(x1 - 7, 179 + x, "|");
	mvprintw(x1 - 6, 179 + x, "|");
	mvprintw(x1 - 5, 179 + x, "|");
	mvprintw(x1 - 4, 179 + x, "|");
	mvprintw(x1 - 3, 179 + x, "|");
	mvprintw(x1 - 2, 179 + x, "|");
	mvprintw(x1 - 1, 179 + x, "|");
}
#define DELAY 90000
int main() {
	initscr();
	noecho();
	curs_set(0);
	int row = 0, column = 0, x, y, rowb = 0, rowbd = 0, rowb1 = 0, rowbd1 = 0;
	getmaxyx(stdscr, y, x);
	drawflappy(row, column);
	refresh();
	while(1) {	
		nodelay(stdscr, TRUE);	
		usleep(DELAY);	
		refresh();
		int c = getch();
		flushinp();
		if(c == ERR) {
			if(column + 13 > y) {
				clear();
				drawdownblock(rowbd - 1);
				drawupblock(rowb - 1);
				drawupblock1(rowb1 - 1);
				drawdownblock1(rowbd1 - 1);
				drawflappy(row, column);
				rowbd1--;
				rowb1--;
				rowb--;
				rowbd--;
				if(rowb + 59 == 0)
					rowb = x - 50;
				if(rowbd + 99 == 0)
					rowbd= x - 90;
				if(rowb1 + 139 == 0)
					rowb1 = x - 130;
				if(rowbd1 + 179 == 0)
					rowbd1 = x - 170;
				endwin();
				exit(0);
			}
			else {
				clear();
				column++;
				drawdownblock(rowbd - 1);
				drawupblock(rowb - 1);
				drawupblock1(rowb1 - 1);
				drawdownblock1(rowbd1 - 1);
				drawflappy(row, column + 1);
				rowbd1--;
				rowb--;
				rowbd--;
				rowb1--;
				if(rowb + 59 == 0)
					rowb = x - 50;
				if(rowbd + 99 == 0)
					rowbd = x - 90;
				if(rowb1 + 139 == 0)
					rowb1 = x - 130;
				if(rowbd1 + 179 == 0)
					rowbd1 = x - 170;
			}
		}	
		else if(c == 'x') {
			if(column + 13 > y) {
				clear();
				drawdownblock(rowbd - 1);
				drawupblock(rowb - 1);
				drawupblock1(rowb1 - 1);
				drawdownblock1(rowbd1 - 1);
				drawflappy(row, column);
				rowb--;
				rowbd--;
				rowb1--;
				rowbd1--;
				if(rowb + 57 == 0)
					rowb = x - 50;
				if(rowbd + 107 == 0)
					rowbd = x - 100;
				if(rowb1 + 139 == 0)
					rowb1 = x - 130;
				if(rowbd1 + 179 == 0)
					rowbd1 = x - 170;
				endwin();
				exit(0);
			}
			else {
				clear();
				column++;
				drawupblock(rowb - 1);
				drawdownblock(rowbd - 1);
				drawupblock1(rowb1 - 1);
				drawdownblock1(rowbd1 - 1);
				drawflappy(row, column + 1);
				rowbd1--;
				rowb1--;
				rowb--;
				rowbd--;
				if(rowb + 57 == 0)
					rowb = x - 50;
				if(rowbd + 107 == 0)
					rowbd = x - 100;
				if(rowb1 + 139 == 0)
					rowb1 = x - 130;
				if(rowbd1 + 179 == 0)
					rowbd1 = x - 170;
			}
		}
		else if(c == 'w') {
			if(column == 0) {
				clear();
				drawupblock(rowb - 1);
				drawdownblock(rowbd - 1);
				drawupblock1(rowb1 - 1);
				drawdownblock1(rowbd1 - 1);
				drawflappy(row, column);
				rowb--;
				rowbd--;
				rowbd1--;
				rowb1--;
				if(rowb + 57 == 0)
					rowb = x - 50;
				if(rowbd + 107 == 0)
					rowbd = x - 100;
				if(rowb1 + 139 == 0)
					rowb1 = x - 130;
				if(rowbd1 + 179 == 0)
					rowbd1 = x - 170;
				endwin();
				exit(0);
			}
			else {
				clear();
				column--;
				drawdownblock(rowbd - 1);
				drawupblock(rowb - 1);
				drawupblock1(rowb1 - 1);
				drawdownblock1(rowbd1 - 1);
				drawflappy(row, column - 1);
				rowbd1--;
				rowb1--;
				rowb--;
				rowbd--;
				if(rowb1 + 139 == 0)
					rowb1 = x - 130;
				if(rowbd1 + 179 == 0)
					rowbd1 = x - 170;
				if(rowb + 57 == 0)
					rowb = x - 50;
				if(rowbd + 107 == 0)
					rowbd = x - 100;		
			}
		}
/*		else if(c == 'a') {
			if(row + 10 == 0) {
				clear();
				drawflappy(row, column);
				drawdownblock(rowbd - 1);
				drawupblock(rowb - 1);
				rowb--;
				rowbd--;
				if(rowb + 57 == 0)
					rowb = x - 50;
				if(rowbd + 107 == 0)
					rowbd = x - 100;
				beep();
			}
			else {
				clear();
				drawflappy(row - 1, column);
				row--;
				drawupblock(rowb - 1);
				drawdownblock(rowbd - 1);
				rowb--;
				rowbd--;
				if(rowb + 57 == 0)
					rowb = x - 50;
				if(rowbd + 107 == 0)
					rowbd = x - 100;	
			}
		}
		else if(c == 'd') {
			if(row + 41 > x) {
				clear();
				drawflappy(row, column);
				drawupblock(rowb - 1);
				drawdownblock(rowbd - 1);
				rowb--;
				rowbd--;
				if(rowb + 57 == 0)
					rowb = x - 50;
				if(rowbd + 107 == 0)
					rowbd = x - 100;
				beep();
			}
			else { 
				clear();
				drawflappy(row + 1, column);
				row++;
				drawdownblock(rowbd - 1);
				drawupblock(rowb - 1);
				rowb--;
				rowbd--;
				if(rowb + 57 == 0)
					rowb = x - 50;
				if(rowbd + 107 == 0)
					rowbd = x - 100;	
			}
		}
*/		else if(c == 'q') 
			break;
		refresh();
	}
	endwin();
	return 0;
}



	
	

