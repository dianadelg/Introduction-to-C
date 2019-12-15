# Introduction-to-C, fall 2018 class

1.1 gcd: Reading arguments
Write a program gcd that computes the greatest common divisor (GCD) of two integers. gcd takes
two arguments, both integers, and prints the largest integer that evenly divides both arguments.
Usage
$ ./gcd 12 20
4
$ ./gcd 1011 51
3
Notes You may assume that the arguments are positive integers that can be represented as (signed)
int values.

1.2 rot13: String operations I
Write a program rot13 that encodes a string using the ROT-13 encoding. ROT-13, or “rotate 13”
is a simple cipher that maps each letter to a letter thirteen places later or earlier in the alphabet.
Thus, ‘A’ (letter 1) maps to ‘N’ (letter 14), and vice versa.
rot13 takes one argument, a string, and prints the result of encoding that string in ROT-13.
Usage
$ ./rot13 Uryyb
Hello
$ ./rot13 ’Awesome Power!’
Njrfbzr Cbjre!

1.3 rle: String operations II
Write a program rle that uses a simple method to compress strings. rle takes a single argument
and looks for repeated characters. Each repeated sequence of a letter or punctuation mark is reduced
to a single character plus an integer indicating the number of times it occurs. Thus, “aaa” becomes
“a3” and “ab” becomes “a1b1”.
If the compressed string is longer than the original string, rle must print the original string
instead.
If the input string contains digits, rle must print “error” and nothing else.
Usage
$ ./rle aaaaaa
a6
$ ./rle aaabcccc..a
a3b1c4.2a1
$ ./rle aaabab
aaabab
$ ./rle a1b2
error
