09/02/2020
Josh Mullin 2067221
Thomas Hunt 4646221

To compile our program in terminal navigate to file location and enter command
gcc *.c -o counting.out
To run our program enter 
./counting.out
The program will wait for you to type two integers then press enter.
If you wish to input a file containing numbers to use for calculation, make sure there are two integers per line and enter command

./counting.out < test.txt

or alternatively

cat test.txt | ./counting.out

Both commands work the same
The program will calculate the n choose k of every two integers it encounters

We used this website for testing by comparing our program's results to the website's results.
https://www.hackmath.net/en/calculator/n-choose-k?n=10&k=4&order=0&repeat=0
