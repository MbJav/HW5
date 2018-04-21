Maria Javier: mj2729
Design With C++
Prof. Bjarne Stroustrep
HW5

I have two directories. The generic folder contains the code with a palindrome implemented while the
second directory non-generic contains code with nongeneric palindrome functions. I ran the same test cases with each. The files can be run by simly going into the directories and typing make and then 
./palindrome. 
I decided to overload the palindrome function int he generic case to deal with geting an integer as a sepaarte case. You can also choose to inpus a vector of integers to get a different ouput.
For conatainers and strings the first template is used. I highly depend on the reverse() template from the standard library which doesn't always consider palindromes with spaces. If the user desires to take this into account, they should input a vector of strings instead. 

