/*
HAPPY BIRD : A GAME JUST FOR ENTERTAINMENT
Copyright (C) 2015 Aditya Ravishankar

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include<ncurses.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include "recordings.h"
WINDOW *gamewin;
record rec[100000000];					//STRUCTURE TO DTORE THE DATA
int recindex = 0;					//INDEX OF THE REC ARRAY
int recordedflag = 0;					
#define DELAY 60000					//SPEED
clock_t start_t, end_t;
double time_taken;
double timeextra = 0.0;
void deadflappy(int c, int r);				//DRAWS THE DEAD BIRD
void drawupblock(int, int);				//DRAWS THE FIRST UP BLOCK
void drawdownblock(int, int);				//DRAWS THE FIRST DOWN BLOCK
void drawupblock1(int, int);				//DRAWS THE SECOND UP BLOCK
void drawupblock2(int, int);				//DRAWS THE THIRD UP BLOCK
void drawdownblock1(int, int);				//DRAWS THE SECOND DOWN BLOCK 
void drawdownblock2(int, int);				//DRAWS THE THIRD DOWN BLOCK
void drawflappy(int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int);
void check(int *r, int *c, int *rowbd1, int *rowbd, int *rowb, int *rowb1, int *rowb2, int *rowbd2, int *tmp, int *tmp1, int *tmp2) {
	/*THIS FUNCTION TELLS US IF THERE IS AN OBSTACLE AT THE POSITION OF THE BIRD*/
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
	if(7 + *c < 0)
		flag = 1;
	if(flag)					//FLAG = 1 IMPLIES THAT THE GAME IS OVER AND SO CLOCK IS STOPPED
		end_t = clock();
	if(flag) {					
		nodelay(stdscr, FALSE);
		deadflappy(*c, *r - 40);
		getch();
		nodelay(stdscr, TRUE);
		rec[recindex].recr = *r;
                rec[recindex].recc = *c;
                rec[recindex].rb = *rowb;
                rec[recindex].rbd = *rowbd;
                rec[recindex].rb1 = *rowb1;
                rec[recindex].rbd1 = *rowbd1;
                rec[recindex].rb2 = *rowb2;
                rec[recindex].rbd2 = *rowbd2;
                rec[recindex].rtmp = *tmp;
                rec[recindex].rtmp1 = *tmp1;
                rec[recindex].rtmp2 = *tmp2;
                recindex++;
		*c = 0;
		int x, y;
		time_taken = (double)(end_t - start_t) / CLOCKS_PER_SEC;		//SCORE IS CALCULATED BASED ON THE TIME SURVIVED
		time_taken -= timeextra;
		time_taken *= 100;							
		getmaxyx(stdscr, y, x);
		int tmphs = 0;
		tmphs = (int)time_taken;
		FILE *fp;
		fp = fopen("HS", "a");
		fwrite(&tmphs, sizeof(tmphs), 1, fp);
		fclose(fp);
		fp = fopen("HS", "r");
		int hs = 0;
		flag = 0;
		while(fread(&tmphs, sizeof(tmphs), 1, fp))				//CHECKING IF THIS SCORE IS MORE THAN THE HIGHSCORE
			if(hs < tmphs) 
				hs = tmphs;
		fclose(fp);
		while(*c + 9 < y) {
			clear();
			mvprintw(1, 47, "SCORE : %d", tmphs);
			mvprintw(2, 47, "High Score is : %d", hs);
			if(tmphs == hs)
				mvprintw(3, 47, "CONGRATS !! YOU MADE A NEW HIGH SCORE !!");
			mvprintw(4, 47, "GAME OVER :(");
			deadflappy(*c, *r);
			(*c)++;
			refresh();
			usleep(60000);
		}
		if(recordedflag) {							//IF THE USER WANTED A REPLAY, SHOW IT
			clear();
                        mvprintw(1, 47, "REPLAY : ");
                        mvprintw(2, 47, "Press any key to continue");
                        refresh();
                        nodelay(stdscr, FALSE);
                        getch();
                        nodelay(stdscr, TRUE);
                        clear();
                        refresh();
                        int rect = 0;
                        while(rect < recindex) {					//REPLAY ie; SHOWING ALL THE POSITIONS
                        	clear();
                                usleep(DELAY);
                                drawdownblock(rec[rect].rbd, 22 - rec[rect].rtmp);
                                drawupblock(rec[rect].rb, rec[rect].rtmp);
                                drawupblock1(rec[rect].rb1, rec[rect].rtmp1);
                                drawdownblock1(rec[rect].rbd1, 22 - rec[rect].rtmp1);
                                drawupblock2(rec[rect].rb2, rec[rect].rtmp2);
                                drawdownblock2(rec[rect].rbd2, 22 - rec[rect].rtmp2);
                                drawflappy(&(rec[rect].recr), &(rec[rect].recc), &(rec[rect].rb), &(rec[rect].rb1), &(rec[rect].rbd1), &(rec[rect].rbd), &(rec[rect].rbd2), &(rec[rect].rb2), &(rec[rect].rtmp), &(rec[rect].rtmp1), &(rec[rect].rtmp2), 0);
                                rect++;
                                refresh();
			}
			usleep(DELAY);
                        recindex = 0;
                        usleep(DELAY);
		}
		wclear(gamewin);
		wattron(gamewin, COLOR_PAIR(1));
		box(gamewin, 0, 0);
		mvwprintw(gamewin, 0, 0, "1. Try again");
		wattroff(gamewin, COLOR_PAIR(1));
		mvwprintw(gamewin, 1, 0, "2. Quit");
		wrefresh(gamewin);
		keypad(gamewin, TRUE);
		int a = 0, nowy, nowx; 
		flag = 0;	
		/*CHOOSING IF THE USER WANTS TO TRY AGAIN, OR WANTS TO QUIT*/
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
		/*IF FLAG IS 1 OR 2, TRY AGAIN*/
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
			start_t = clock();
			timeextra = 0.0;
			recordedflag = 0;
		}
		/*OTHERWISE, QUIT*/
		else if(flag == 2) {
			endwin();
			exit(0);
		}
	}	
}
void drawflappy(int *r, int *c, int *rowbd1, int *rowbd, int *rowb, int *rowb1, int *rowb2, int *rowbd2, int *tmp, int *tmp1, int *tmp2, int is) {
	if(is)
		check(r, c, rowbd1, rowbd, rowb, rowb1, rowb2, rowbd2, tmp, tmp1, tmp2);
	/*PRINTING THE BIRD*/
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
}
/*DRAW THE FIRST UP BLOCK*/
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
/*DRAW THE SECOND UP BLOCK*/
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
/*DRAW THE THIRD UP BLOCK*/
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
/*DRAW THE FIRST DOWN BLOCK*/
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
/*DRAW THE SECOND DOWN BLOCK*/
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
/*DRAW THE THIRD DOWN BLOCK*/
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
/*DRAWING THE DEAD BIRD (EYES :- * *)*/
void deadflappy(int c, int r) {
	mvprintw(0 + c, 55 + r, "_");
	mvprintw(0 + c, 56 + r, "_");
	mvprintw(0 + c, 57 + r, "_");
	mvprintw(0 + c, 58 + r, "_");
	mvprintw(0 + c, 59 + r, "_");
	mvprintw(0 + c, 60 + r, "_");
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
int main() {
	int row = 0, column = 0, x, y, rowb = 0, rowbd = 0, rowb1 = 0, rowbd1 = 0, rowb2 = 0, rowbd2 = 0;
	initscr();
	noecho();
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_CYAN);		
	curs_set(0);
	getmaxyx(stdscr, y, x);					//X IS THE NUMBER OF COUMNS = 150, Y IS NUMBER OF ROWS = 37 
	WINDOW *startwin = newwin(y, x, 0, 0);			//startwin IS THE OPENING WINDOW, IT APPEARS ONLY ONCE
	wbkgd(startwin, COLOR_PAIR(1));
	box(startwin, 0, 0);					//MAKE A BOX IN THE START WINDOW
	/*PRINT THE INSTRUCTIONS IN THE startwin*/
	mvwprintw(startwin, 15, 50, "HAPPY BIRD !!!");
	mvwprintw(startwin, 16, 50, "Instructions : ");
	mvwprintw(startwin, 17, 50, "->Press space bar to jump and avoid all the obstacles !");
	mvwprintw(startwin, 18, 50, "Press any key to start (press Enter to record)");
	mvwprintw(startwin, 19, 50, "Press 'p' to pause and 'r' to resume");
	mvwprintw(startwin, 20, 50, "(Press 'q' during the game to quit)");
	touchwin(startwin);
	wrefresh(startwin);
	int recget;
	recget = wgetch(startwin);
	//GETTING TO KNOW IF THE USER WANTS TO RECORD OR NOT
	if(recget == '\n')
		recordedflag = 1;
	gamewin = newwin(y, x, 0, 0);				//GAMEWIN IS THE WINDOW WITH THE OPTIONS : TRY AGAIN AND QUIT
	int max = 24;
	int min = 1;
	int tmp = rand() % (max - min) + min;			/*RANDOM HEIGHTS OF THE BLOCKS*/
	int tmp1 = rand() % (max - min) + min;	
	int tmp2 = rand() % (max - min) + min;
	drawflappy(&row, &column, &rowb, &rowbd, &rowb1, &rowbd1, &rowb2, &rowbd2, &tmp, &tmp1, &tmp2, 1);	
	refresh();						//stdscr IS THE WINDOW IN WHICH THE GAME IS BEING PLAYED
	int flag = 0;
	int flag1 = 0; 
	int flag2 = 0;
	start_t = clock();					//START THE TIMER (FOR NOTING THE SCORE)
	clock_t time1, time2;
	recindex = 0;
	while(1) {
		/*RECORDING ALL DETAILS*/
		rec[recindex].recr = row;
                rec[recindex].recc = column;
                rec[recindex].rb = rowb;
                rec[recindex].rbd = rowbd;
                rec[recindex].rb1 = rowb1;
                rec[recindex].rbd1 = rowbd1;
                rec[recindex].rb2 = rowb2;
                rec[recindex].rbd2 = rowbd2;
                rec[recindex].rtmp = tmp;
                rec[recindex].rtmp1 = tmp1;
                rec[recindex].rtmp2 = tmp2;
                recindex++;					//STORE ALL DETAILS OF THE CO-ORDINATES
		nodelay(stdscr, TRUE);				
		usleep(DELAY);	
		refresh();
		int c = getch();				//GET INPUT FROM USER (IF ANY)
		flushinp();
		if(c == 'p') {
			/*PAUSE TILL 'r' IS PRESSED*/
			time1 = clock();
			nodelay(stdscr, FALSE);
			while(c != 'r') 
				c = getch();
			nodelay(stdscr, TRUE);
			time2 = clock();
			timeextra += (double)(time2 - time1) / CLOCKS_PER_SEC;
		}
		if(c != 32 && c != 'q') {
			if(column + 9 > y) {
				end_t = clock();						//BIRD HAS CROSSED THE UPPER LIMIT OF THE SCREEN
				time_taken = (double)(end_t - start_t) / CLOCKS_PER_SEC;	//CALCULATING THE SCORE
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
				drawflappy(&row, &column, &rowb, &rowbd, &rowb1, &rowbd1, &rowb2, &rowbd2, &tmp, &tmp1, &tmp2, 1);
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
				time_taken -= timeextra;
				time_taken *= 100;
				int tmphs = 0;
        		        tmphs = (int)time_taken;
	           		FILE *fp;
		                fp = fopen("HS", "a");
		                fwrite(&tmphs, sizeof(tmphs), 1, fp);
       			        fclose(fp);
		                fp = fopen("HS", "r");
                                int hs = 0;  
                                flag = 0;
                                while(fread(&tmphs, sizeof(tmphs), 1, fp))		//CHECK IF HIGHSCORE IS MADE
        	                        if(hs < tmphs)
		                                hs = tmphs;
    			        fclose(fp);
				while(row + 9 < y) {
					clear();
					mvprintw(1, 47, "SCORE : %d", tmphs);
					mvprintw(2, 47, "High score is : %d", hs);
					if(hs == tmphs)
						mvprintw(3, 47, "CONGRATS !! YOU MADE A NEW HIGH SCORE !!");
					mvprintw(4, 47, "GAME OVER :(");
					deadflappy(row, column);
					row++;
					refresh();
					usleep(60000);
				}
				if(recordedflag) {					//REPLAY IF USER WANTED IT
					clear();
                                        mvprintw(1, 47, "REPLAY : ");
                                        mvprintw(2, 47, "Press any key to continue");
                                        refresh();
                                        nodelay(stdscr, FALSE);
                                        getch();
                                        nodelay(stdscr, TRUE);
                                        clear();
                                        refresh();
                                        int rect = 0;
                                        while(rect < recindex) {
                                                clear();
                                                usleep(DELAY);
                                                drawdownblock(rec[rect].rbd, 22 - rec[rect].rtmp);
                                                drawupblock(rec[rect].rb, rec[rect].rtmp);
                                                drawupblock1(rec[rect].rb1, rec[rect].rtmp1);
                                                drawdownblock1(rec[rect].rbd1, 22 - rec[rect].rtmp1);
                                                drawupblock2(rec[rect].rb2, rec[rect].rtmp2);
                                                drawdownblock2(rec[rect].rbd2, 22 - rec[rect].rtmp2);
                                                drawflappy(&(rec[rect].recr), &(rec[rect].recc), &(rec[rect].rb), &(rec[rect].rb1), &(rec[rect].rbd1), &(rec[rect].rbd), &(rec[rect].rbd2), &(rec[rect].rb2), &(rec[rect].rtmp), &(rec[rect].rtmp1), &(rec[rect].rtmp2), 0);
                                                rect++;
                                                refresh();
                                        }
                                        recindex = 0;
                                        usleep(DELAY);
                                }
				wclear(gamewin);
				wattron(gamewin, COLOR_PAIR(1));
				/*ASK THE USER IF HE WANTS TOPLAY AGAIN OR QUIT*/ 
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
					start_t = clock();
					timeextra = 0.0;
					recordedflag = 0;
				}
				else if(flag == 2) {
					endwin();
					exit(0);
				}	
			}
			else {
				/*THE CASE WHEN NO INPUT IS GIVEN BY THE USER (SO, THE BIRD MOVES DOWNWARD BY DEFAULT)*/
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
				drawflappy(&row, &column, &rowb, &rowbd, &rowb1, &rowbd1, &rowb2, &rowbd2, &tmp, &tmp1, &tmp2, 1);
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
		/*IF USER PRESSES SPACE, BIRD GOES UP*/
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
			drawflappy(&row, &column, &rowb, &rowbd, &rowb1, &rowbd1, &rowb2, &rowbd2, &tmp, &tmp1, &tmp2, 1);
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
		/*IF 'q' IS PRESSED, QUIT*/
		else if(c == 'q') 
			break;
		/*NEW RANDOM VALUES ARE GENERATED*/
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
