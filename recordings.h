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
//THIS IS THE STRUCTURE WHICH STORES THE CO-ORDINATES OF THE BIRD AS WELL AS THE BRICKS
//IT IS USED FOR REDORDING
typedef struct record {
        int recr;			//BIRD ROW
        int recc;			//BIRD COLUMN
        int rb;				//BLOCK ROW
        int rbd;			//DOWN BLOCK ROW
        int rb1;			//BLOCK 1 ROW
        int rbd1;			//DOWN BLOCK 1 ROW
        int rb2;			//BLOCK 2 ROW
        int rbd2;			//DOWN BLOCK 2 ROW
        int rtmp;			//TMP
        int rtmp1;			//TMP1
        int rtmp2;			//TMP2
}record;
//TMP's ARE FOR THE RANDOMNESS
