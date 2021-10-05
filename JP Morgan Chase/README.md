
# JPMC QR Interview Questions

* [Telephonic Round Questions](#quiz)
* [Coding Round Questions](#coding)

____


<b name="quiz">Virtual Interview Round Questions</b><br/>

* Interview Round 1
- Return the kth sorted element from an unosrted array, provided that you cannot sort the complete array. 
  Approach : Apply Quicksort, taking elements partially - each time need to check if the pivot (chosen as last element) is on the (n-k-1)th position or not.
- You are given a rectangle with sides of lengths X and Y, given that X and Y are both independent random variables from the same probability distribution. You are also given a square with side length as X. Compare the expected areas of both the figures. 
  Approach : Area of rectangle = XY => expected value = E(XY) = E(X)E(Y) = u^2 (u = mean of distribution)
             Area of square = X^2 => expected value = E(X^2) => apply formula of variance to get a relation and then compare. 
- Given an equation : sinx = 5. solve for x.
  Approach : Apply Euler's Formula.
- Given a graph, find the minimum number of colours using which it can be coloured. 
  Approach : Consider a adjacency matrix representation of the graph, with 1 representing edges between nodes and 0 otherwise. Applying DFS, we can color all the connected components - all the 1s should be colored. So the problem reduces to finding the number of islands of 1s. Important thing to consider - since minimum number is asked, you need to take 'adjacent' 1s in all 8 directions and not just the ones with common edge. 

* Interview Round 2
- What is a friend function in C++?
- What is the difference between references and pointers?
- How to add two integers without using addition operator? (Hint : apply bit manipulation)
- What is the expected value obtained upon rolling a dice?
- Given a dice, what will be the expected payoff for two rolls? (Payoff means the value obtained, you can only take the value of the last roll. You may choose to stop after 1 roll if you so desire.)
- Time complexities of insertion sort, selection sort, counting  sort and when they should be used.

* Interview Round 3 
- Given a sequence, determine whether it is converging or diverging. 
- Given two strings, tell whether they follow a similar pattern or not. 
  example : 'abb' and 'fzz' follow a pattern, but 'abc' and 'fzz' do not. Similarly, 'abca' and 'fggf' do not. 
  Hint : come up with a suitable hashing function.  
____


<b name="coding">Coding round questions</b><br/>

- Given a sorted array find the length of the longest Arithmetic Progression. 
  example : 1 4 5 7 8 10 -> longest AP : 1, 4, 7, 10 => return 4. 

- Longest Increasing Subsequence

- Aptitude Questions -> CS theory, Probability, Linear Algebra

- Given an int, print 1 if the number of occurrences of current index and element at this index is same, else print 0
Ex. 22 -> 0
Ex. 2020 -> 1, because 0: there are 2 zeroes, 1: there is 0 ones, 2: there are 2 twos, 3: there is 0 threes

- Given a string of shuffled numbers (in the string form), print the corresponding integer in a sorted way
Ex. neo -> 1
Ex. rneheetotow -> 123