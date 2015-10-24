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
		keypad(gamewin, TRUE);
		int a = 0, nowy, nowx; 
		flag = 0;	
		while(a != '\n') {
			a = wgetch(gamewin);
			getyx(gamewin, nowy, nowx);
			if(a == KEY_UP  && nowy == 0) {
				wattron(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 0, 0, "1. Try again");
				wattroff(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 1, 0, "2. Quit");
				wrefresh(gamewin);
				flag = 1;
			}	
			else if(a == KEY_DOWN && nowy == 0) {
				mvwprintw(gamewin, 0, 0, "1. Try again");
				wattron(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 1, 0, "2. Quit");
				wattroff(gamewin, COLOR_PAIR(1));
				wrefresh(gamewin);
				flag = 2;
			}
			else if(a == KEY_UP && nowy == 1) {
				wattron(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 0, 0, "1. Try again");
				wattroff(gamewin, COLOR_PAIR(1));
				mvwprintw(gamewin, 1, 0, "2. Quit");
				wrefresh(gamewin);
				flag = 1;
			}	
			else if(a == KEY_DOWN && nowy == 1) {
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
void drawupblock(int x, int height) {
	int i = 0;
	while(i != height) {
		mvprintw(i, 50 + x, "|");
		i++;
	}
	int j = 1;
	while(j != 10) {
		mvprintw(i - 1, 50 + x + j, "_");
		j++;
	}
	while(i) {
		mvprintw(i - 1, 50 + x + j - 1, "|");
		i--;
	}
}
void drawupblock1(int x, int height) {
	int i = 0;
	while(i != height) {
		mvprintw(i, 130 + x, "|");
		i++;
	}
	int j = 1;
	while(j != 10) {
		mvprintw(i - 1, 130 + x + j, "_");
		j++;
	}
	while(i) {
		mvprintw(i - 1, 130 + x + j - 1, "|");
		i--;
	}
}
void drawdownblock(int x, int height) {
	int x1, y1, i = 1;
	getmaxyx(stdscr, x1, y1);
	while(i <= height) {
		mvprintw(x1 - i, 50 + x, "|");
		i++;
	}
	i--;
	int j = 0;
	while(j != 10) {
		mvprintw(x1 - i - 1, 50 + x + j, "-");
		j++;
	}
	while(i) {
		mvprintw(x1 - i, 50 + x + j - 1, "|");
		i--;
	}
}  
void drawdownblock1(int x,int height) {
	int x1, y1, i = 1;
	getmaxyx(stdscr, x1, y1);
	while(i <= height) {
		mvprintw(x1 - i, 130 + x, "|");
		i++;
	}
	i--;
	int j = 0;
	while(j != 10) {
		mvprintw(x1 - i - 1, 130 + x + j, "-");
		j++;
	}
	while(i) {
		mvprintw(x1 - i, 130 + x + j - 1, "|");
		i--;
	}
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
#define DELAY 70000
int main() {
	int row = 0, column = 0, x, y, rowb = 0, rowbd = 0, rowb1 = 0, rowbd1 = 0;
	initscr();
	noecho();
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_CYAN);		
	curs_set(0);
	getmaxyx(stdscr, y, x);					//x is no. of columns = 150, y is no. of rows = 37 
	WINDOW *startwin = newwin(y, x, 0, 0);
	wbkgd(startwin, COLOR_PAIR(1));
	mvwprintw(startwin, 15, 50, "HAPPY BIRD !!!");
	mvwprintw(startwin, 16, 50, "Instructions : ");
	mvwprintw(startwin, 17, 50, "Press space bar to jump and avoid all the obstacles !");
	mvwprintw(startwin, 18, 50, "Press any key to start");
	mvwprintw(startwin, 19, 50, "(Press 'q' during the game to quit)");
	touchwin(startwin);
	wrefresh(startwin);
	wgetch(startwin);
	gamewin = newwin(y, x, 0, 0);
	drawflappy(&row, &column, &rowbd, &rowbd1, &rowb, &rowb1);
	refresh();
	int max = 24;
	int min = 1;
	int flag = 0;
	int flag1 = 0; 
	int tmp = rand() % (max - min) + min;	
	int tmp1 = rand() % (max - min) + min;	
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
				drawdownblock(rowbd, 22 - tmp);		// upper height is 20 lower is 5 so the remaining is 12 and that is just okay
				drawupblock(rowb, tmp);
				drawupblock1(rowb1, tmp1);
				drawdownblock1(rowbd1, 22 - tmp1);
				drawflappy(&row, &column, &rowb, &rowb1, &rowbd1, &rowbd);
				if(rowb < -59) {
					flag = 1; 
					rowb = x - 50;
				}
				if(rowbd < -59) 
					rowbd = x - 50;
				if(rowb1 < -139) {
					flag1 = 1;
					rowb1 = x - 130;
				}
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
				keypad(gamewin, TRUE);
				int a = 0, nowy, nowx, flag = 0;	
				while(a != '\n') {
					a = wgetch(gamewin);
					getyx(gamewin, nowy, nowx);
					if(a == KEY_UP  && nowy == 0) {
						wattron(gamewin, COLOR_PAIR(1));
						mvwprintw(gamewin, 0, 0, "1. Try again");
						wattroff(gamewin, COLOR_PAIR(1));
						mvwprintw(gamewin, 1, 0, "2. Quit");
						wrefresh(gamewin);
						flag = 1;
					}	
					else if(a == KEY_DOWN && nowy == 0) {
						mvwprintw(gamewin, 0, 0, "1. Try again");
						wattron(gamewin, COLOR_PAIR(1));
						mvwprintw(gamewin, 1, 0, "2. Quit");
						wattroff(gamewin, COLOR_PAIR(1));
						wrefresh(gamewin);
						flag = 2;
					}
					else if(a == KEY_UP && nowy == 1) {
						wattron(gamewin, COLOR_PAIR(1));
						mvwprintw(gamewin, 0, 0, "1. Try again");
						wattroff(gamewin, COLOR_PAIR(1));
						mvwprintw(gamewin, 1, 0, "2. Quit");
						wrefresh(gamewin);
						flag = 1;
					}	
					else if(a == KEY_DOWN && nowy == 1) {
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
				drawdownblock(rowbd, 22 - tmp);
				drawupblock(rowb, tmp);
				drawupblock1(rowb1, tmp1);
				drawdownblock1(rowbd1, 22 - tmp1);
				column++;
				drawflappy(&row, &column, &rowb, &rowbd, &rowbd1, &rowb1);
				if(rowb < -59) {
					flag = 1;
					rowb = x - 50;
				}
				if(rowbd < -59)
					rowbd = x - 50;
				if(rowb1 < -139) {
					flag1 = 1;
					rowb1 = x - 130;
				}
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
			drawdownblock(rowbd, 22 - tmp);
			drawupblock(rowb, tmp);
			drawupblock1(rowb1, tmp1);
			drawdownblock1(rowbd1, 22 - tmp1);
			column--;
			drawflappy(&row, &column, &rowb, &rowbd, &rowbd1, &rowb1);
			column -= 3;
			if(rowb1 < -139) {
				flag1 = 1;
				rowb1 = x - 130;			
			}
			if(rowbd1 < -139)
				rowbd1 = x - 130;
			if(rowb < -57) {
				flag = 1;
				rowb = x - 50;
			}
			if(rowbd < -57)
				rowbd = x - 50;		
		}
		else if(c == 'q') 
			break;
		if(flag) {
			flag = 0;
			tmp = rand() % (max - min) + min;	
		}
		if(flag1) {
			flag1 = 0;
			tmp1 = rand() % (max - min) + min;	
		}
		refresh();
	}
	endwin();
	return 0;
}



	
	

