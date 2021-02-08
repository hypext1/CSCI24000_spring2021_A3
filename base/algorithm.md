Goals: entertain the user by presenting them with a fictional horse race
Input: user presses enter key each time they want the horses to go forward
Output: horses advance towards a finish line
Steps:
the 5 horses will be defined by an array. this will make it easier to compare values, and see
whos won the race.
the function "makeSeed" will ask the user to input a seed, and set the seed for the rand() to said input.
the function "advance" will create a random value for each horse, check if it is even, and then advance the horse if the random value was even.
the function "detectWin" will check if the race has been won, and who won it.
the function "display" will create a text-based gui for the user to see, based off of values in the array.
the "main" function will run "advance" and "raceWon" every time the enter key is pressed
