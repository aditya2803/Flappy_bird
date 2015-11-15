TITLE : HAPPY BIRD (GAME)
Aditya Ravishankar
111403054
This is a game inspired from the very popular game 'Flappy bird', which became very famous in the apple store.
This game however, uses the ncurses library for designing the user interface.
The instructions are very simple :
The user can press only 1 key, which is the 'Space bar'.
Upon pressing this, the bird moves upwards. If no key is pressed, the bird moves downward automatically. (As an effect of gravity)
The obstacles in the game are blocks, which approach the bird.
Our main aim is to avoid these obstacles and survive for as long as possible.
The blocks that approach us, come in different shapes. The position of the hole in between, through which we have to pass, also varies randomly.
I used the randomise function to generate these random sizes of the block holes.
Also, the bird can't move above the limit of the screen. If it does so, it will die.
The new feature that I have added is the record feature.
When the game starts, the system asks the user if he/she wants to record the game which he/she is about to play.
If the user does want to record the game, the game starts recording.
The recording continues until the user gets out. ie; until the bird hits one of these blocks or the bird crosses the upper limit of the screen.
When the user gets out, the replay of his game is shown.
This is the exact game which the user just played.
I added this feature by making a structure which keeps on noting the co-ordinates of the positions of the birds as well as the bricks.
Once the user gets out, it simply reads the co-ordinates from the structure of arrays created and hence we can see the recording.
Also, the score feature is also present.
The scoring depends on the time duration of our survival.
The longer we survive, more is our score.
For this, I used the time() function.
The time starts when we enter the while loop.
The time ends when we get out.
The difference of these two times gives us the time of our survival. 
Also, just for an entertainment purpose, when we get out, a dead flappy bird drops dead from the top of the screen to the bottom. 
