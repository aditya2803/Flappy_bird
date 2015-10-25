#include<ncurses.h>
#include<stdlib.h>
WINDOW *gamewin;
void deadflappy(int c, int r);
void drawflappy(int *r, int *c, int *rowbd1, int *rowbd, int *rowb, int *rowb1, int *rowb2, int *rowbd2, int *tmp, int *tmp1, int *tmp2) {
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
			mvprintw(1, 47, "GAME OVER :(");
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
			*r = *c = *rowb = *rowb1 = *rowbd = *rowbd1 = *rowb2 = *rowbd2 = 0;
			attroff(COLOR_PAIR(1));
			int max = 24;
			int min = 1;
			*tmp = rand() % (max - min) + min;	
			*tmp1 = rand() % (max - min) + min;	
			*tmp2 = rand() % (max - min) + min;	
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
		mvprintw(i, 100 + x, "|");
		i++;
	}
	int j = 1;
	while(j != 10) {
		mvprintw(i - 1, 100 + x + j, "_");
		j++;
	}
	while(i) {
		mvprintw(i - 1, 100 + x + j - 1, "|");
		i--;
	}
}
void drawupblock2(int x, int height) {
	int i = 0;
	while(i != height) {
		mvprintw(i, 150 + x, "|");
		i++;
	}
	int j = 1;
	while(j != 10) {
		mvprintw(i - 1, 150 + x + j, "_");
		j++;
	}
	while(i) {
		mvprintw(i - 1, 150 + x + j - 1, "|");
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
		mvprintw(x1 - i, 100 + x, "|");
		i++;
	}
	i--;
	int j = 0;
	while(j != 10) {
		mvprintw(x1 - i - 1, 100 + x + j, "-");
		j++;
	}
	while(i) {
		mvprintw(x1 - i, 100 + x + j - 1, "|");
		i--;
	}
}
void drawdownblock2(int x,int height) {
	int x1, y1, i = 1;
	getmaxyx(stdscr, x1, y1);
	while(i <= height) {
		mvprintw(x1 - i, 150 + x, "|");
		i++;
	}
	i--;
	int j = 0;
	while(j != 10) {
		mvprintw(x1 - i - 1, 150 + x + j, "-");
		j++;
	}
	while(i) {
		mvprintw(x1 - i, 150 + x + j - 1, "|");
		i--;
	}
}
void deadflappy(int c, int r) {
	mvprintw(0 + c, 55 + r, "_");
	mvprintw(0 + c, 56 + r, "_");
	mvprintw(0 + c, 57 + r, "_");
	mvprintw(0 + c, 58 + r, "_");
	mvprintw(0 + c, 59 + r, "_");
	mvprintw(0 + c, 60 + r, "_");	//40 = 60
	mvprintw(1 + c, 53 + r, "|");
	mvprintw(1 + c, 54 + r, "|");
	mvprintw(1 + c, 60 + r, "-");
	mvprintw(1 + c, 61 + r, "-");
	mvprintw(1 + c, 62 + r, "-");
	mvprintw(1 + c, 63 + r, "-");
	mvprintw(1 + c, 64 + r, "-");
	mvprintw(2 + c, 51 + r, "|");
	mvprintw(2 + c, 58 + r, "|");
	mvprintw(2 + c, 61 + r, "*");
	mvprintw(2 + c, 63 + r, "*");
	mvprintw(2 + c, 65 + r, "|");
	mvprintw(3 + c, 50 + r, "|");
	mvprintw(3 + c, 55 + r, "|");
	mvprintw(3 + c, 60 + r, "-");
	mvprintw(3 + c, 61 + r, "-");
	mvprintw(3 + c, 62 + r, "-");
	mvprintw(3 + c, 63 + r, "-");
	mvprintw(3 + c, 64 + r, "-");
	mvprintw(3 + c, 65 + r, "-");
	mvprintw(3 + c, 66 + r, "_");
	mvprintw(4 + c, 49 + r, "|");
	mvprintw(4 + c, 56 + r, "|");
	mvprintw(4 + c, 62 + r, "|");
	mvprintw(4 + c, 66 + r, "_");
	mvprintw(4 + c, 67 + r, "\\");
	mvprintw(5 + c, 50 + r, "|");
	mvprintw(5 + c, 51 + r, "_");
	mvprintw(5 + c, 52 + r, "_");
	mvprintw(5 + c, 53 + r, "_");
	mvprintw(5 + c, 54 + r, "|");
	mvprintw(5 + c, 61 + r, "|");
	mvprintw(5 + c, 66 + r, "_");
	mvprintw(5 + c, 67 + r, "/");
	mvprintw(6 + c, 52 + r, "|");
	mvprintw(6 + c, 53 + r, "_");
	mvprintw(6 + c, 54 + r, "_");
	mvprintw(6 + c, 62 + r, "_");
	mvprintw(6 + c, 63 + r, "_");
	mvprintw(6 + c, 64 + r, "|");
	mvprintw(6 + c, 65 + r, "|");
	mvprintw(7 + c, 55 + r, "-");
	mvprintw(7 + c, 56 + r, "-");
	mvprintw(7 + c, 57 + r, "-");
	mvprintw(7 + c, 58 + r, "-");
	mvprintw(7 + c, 59 + r, "-");
	mvprintw(7 + c, 60 + r, "-");
	mvprintw(7 + c, 61 + r, "-");

}
#define DELAY 60000
int main() {
	int row = 0, column = 0, x, y, rowb = 0, rowbd = 0, rowb1 = 0, rowbd1 = 0, rowb2 = 0, rowbd2 = 0;
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
	int max = 24;
	int min = 1;
	int tmp = rand() % (max - min) + min;	
	int tmp1 = rand() % (max - min) + min;	
	int tmp2 = rand() % (max - min) + min;
	drawflappy(&row, &column, &rowbd, &rowbd1, &rowb, &rowb1, &rowbd2, &rowb2, &tmp, &tmp1, &tmp2);
	refresh();
	int flag = 0;
	int flag1 = 0; 
	int flag2 = 0;
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
				rowb2--;
				rowbd2--;
				drawdownblock(rowbd, 22 - tmp);		// upper height is 20 lower is 5 so the remaining is 12 and that is just okay
				drawupblock(rowb, tmp);
				drawupblock1(rowb1, tmp1);
				drawdownblock1(rowbd1, 22 - tmp1);
				drawupblock2(rowb2, tmp2);
				drawdownblock2(rowbd2, 22 - tmp2);
				drawflappy(&row, &column, &rowb, &rowb1, &rowbd1, &rowbd, &rowbd2, &rowb2, &tmp, &tmp1, &tmp2);
				if(rowb < -59) {
					flag = 1; 
					rowb = x - 50;
				}
				if(rowbd < -59) 
					rowbd = x - 50;
				if(rowb1 < -109) {
					flag1 = 1;
					rowb1 = x - 100;
				}
				if(rowbd1 < -109)
					rowbd1 = x - 100;
				if(rowb2 < -159) {
					flag2 = 1;
					rowb2 = x - 150;
				}
				if(rowbd2 < -159)
					rowbd2 = x - 150;
				clear();
				row = 0;
				while(row + 9 < y) {
					clear();
					mvprintw(1, 47, "GAME OVER :/");
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
					row = column = rowb = rowb1 = rowbd = rowbd1 = rowb2 = rowbd2 = 0;
					attroff(COLOR_PAIR(1));
					tmp = rand() % (max - min) + min;	
					tmp1 = rand() % (max - min) + min;	
					tmp2 = rand() % (max - min) + min;	
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
				rowb2--;
				rowbd2--;
				drawdownblock(rowbd, 22 - tmp);
				drawupblock(rowb, tmp);
				drawupblock1(rowb1, tmp1);
				drawdownblock1(rowbd1, 22 - tmp1);
				drawupblock2(rowb2, tmp2);
				drawdownblock2(rowbd2, 22 - tmp2);
				column++;
				drawflappy(&row, &column, &rowb, &rowbd, &rowbd1, &rowb1, &rowb2, &rowbd2, &tmp, &tmp1, &tmp2);
				if(rowb < -59) {
					flag = 1;
					rowb = x - 50;
				}
				if(rowbd < -59)
					rowbd = x - 50;
				if(rowb1 < -109) {
					flag1 = 1;
					rowb1 = x - 100;
				}
				if(rowbd1 < -109)
					rowbd1 = x - 100;
				if(rowb2 < -159) {
					flag2 = 1;
					rowb2 = x - 150;
				}
				if(rowbd2 < -159)
					rowbd2 = x - 150;
			}
		}	
		else if(c == 32) {
			clear();
			rowbd1--;
			rowb1--;
			rowb--;
			rowbd--;
			rowb2--;
			rowbd2--;
			drawdownblock(rowbd, 22 - tmp);
			drawupblock(rowb, tmp);
			drawupblock1(rowb1, tmp1);
			drawdownblock1(rowbd1, 22 - tmp1);
			drawupblock2(rowb2, tmp2);
			drawdownblock2(rowbd2, 22 - tmp2);
			column--;
			drawflappy(&row, &column, &rowb, &rowbd, &rowbd1, &rowb1, &rowb2, &rowbd2, &tmp, &tmp1, &tmp2);
			column -= 3;
			if(rowb1 < -109) {
				flag1 = 1;
				rowb1 = x - 100;			
			}
			if(rowbd1 < -109)
				rowbd1 = x - 100;
			if(rowb < -57) {
				flag = 1;
				rowb = x - 50;
			}
			if(rowbd < -57)
				rowbd = x - 50;		
			if(rowb2 < -159) {
				flag2 = 1;
				rowb2 = x - 150;
			}
			if(rowbd2 < -159)
				rowbd2 = x - 150;
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
		if(flag2) {	
			flag2 = 0;
			tmp2 = rand() % (max - min) + min;
		}
		refresh();
	}
	endwin();
	return 0;
}



	
	

