* Possible Enhancements:-
  If you're looking to expand the program, here are some ideas:
1. Difficulty Levels
  Example: Easy (1–10), Medium (1–20), Hard (1–50)
  Let users choose difficulty:

2.Multiple Operations
  Randomly choose operation: +, -, ×, ÷
  Add addition, subtraction, or division:

3. Question Counter
  int score = 0; score ++;
  Track how many questions were asked:

4.High Score System
  Save score to a file and read previous high score
  Store and compare scores using file I/O:

5. Time Challenge Mode
  Limit time per question using <time.h>:
  Measure time taken and penalize slow answers

* Problem Statement: Multiplication Table Game
  Create an interactive console-based multiplication table game in C where the user:
  •	Chooses a custom range for multiplication tables.
  •	Answers randomly generated multiplication questions.
  •	Receives feedback on correctness.
  •	Accumulates a score based on correct answers.
  •	Has the option to replay the game multiple times.
Program Requirements:
  1.	User Input for Table Range:
    o	Prompt the user to enter a number n.
    o	Random numbers for the multiplication question will be generated between 1 and n.
2.	Question Generation:
    o	Generate two random integers num1 and num2 such that:
    	1 ≤ num1 ≤ n
    	1 ≤ num2 ≤ n
    o	Calculate the correct answer: answer = num1 * num2.
3.	User Interaction:
    o	Display the question: What is num1 x num2?
    o	Accept the user's answer and compare it with the correct one.
    o	Display "Correct!" if the answer is right, otherwise show the correct answer.
4.	Score Tracking:
    o	Maintain a score counter that increments for each correct answer.
5.	Replay Option:
    o	After each question, ask: Do you want to play again? (y/n)
    o	Continue the loop if the user enters 'y' or 'Y'.
6.	Final Output:
    o	When the user chooses not to continue, display the final score.
    o	Encourage the user to try again and improve their score.
Constraints:
    o	Input n must be a positive integer.
    o	Input validation is minimal (can be improved).
    o	The game runs in a loop until the user chooses to stop.
