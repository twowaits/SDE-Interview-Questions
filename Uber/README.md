# Uber Interview Questions
* [Coding Round Questions](#coding)
* [Technical Interview Questions](#tech)
   * [Data Structures and Algorithms](#dsalg)
   * [DBMS](#dbms)
   * [Operating System](#os)
   * [Miscellaneous](#misc)
* [References](#ref)
____
<b name="coding">Coding round questions</b><br/>

- Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[]. (O(Log(N)))
- A text file contains {candidateID,voterID} details of an ongoing voting.
Read this file in real time and report top 5 candidates.
Also report a fraud if a Voter tries to vote twice or try to vote more then one candidate.
Assume that the database is offline.
- Write a program to check whether Sudoku is valid or not.
- Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.
- Given an array of words, print the count of all anagrams together in sorted order (increasing order of counts).
For example, if the given array is {“cat”, “dog”, “tac”, “god”, “act”}, then grouped anagrams are “(dog, god) (cat, tac, act)”. So the output will be 2 3.
- Given a roman numeral, convert it to an integer.
- Given a set of candidate numbers (C) (without duplicates) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.
The same repeated number may be chosen from C unlimited number of times.
- Given a digit string, return all possible letter combinations that the number could represent in a T9 keypad.
   ```
   Input:Digit string "23"
  Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
  ```
- Given two list of unsorted intervals V1 and V2 write 2 functions 'OR ' and 'AND' to return a new list

  OR Function (union of list ): Input V1 = (2,4) (6,8) (1,3) V2 = (7,9) (2,5)
  Output = (1,5) (6,9)

  AND function : This will be intersection function and will return intersection of the lists.
- Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
Your algorithm should run in O(n) complexity.
- Generate all possible matched parenthesis, given n left parenthesis and right parenthesis needs to be matched.
- There is a notepad which accepts only four operations:
  1. Character X
  2. select all
  3. copy
  4. paste
  
  Given n number of operations, provide the sequence of choices that gives maximum characters in the notepad.  
- Given a non-empty array containing only positive integers, find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.
- Given a list of system packages, some packages cannot be installed until the other packages are installed. Provide a valid sequence to install all of the packages.

  e.g.
  a relies on b

  b relies on c

  then a valid sequence is [c, b, a].  
- Given a string s, partition s such that every substring of the partition is a palindrome.
   Return all possible palindrome partitioning of s.  
- Given a string s, return all the palindromic permutations ( without duplicates), of it. Return an empty array if no palindromic combinations can be formed.
- Given an input string and ordering string, need to return true if the ordering string is present in Input string.
- Given a sorted dictionary (array of words) of an alien language, find order of characters in the language.
- Given an array of words and a length L, format the text such that each line has exactly L characters and is fully (left and right) justified.
- Given an api which returns an array of chemical names and an array of chemical symbols, display the chemical names with their symbol surrounded by square brackets:

  ```
  Ex:
  Chemicals array: ['Amazon', 'Microsoft', 'Google']
  Symbols: ['I', 'Am', 'cro', 'Na', 'le', 'abc']

  Output:
  [Am]azon, Mi[cro]soft, Goog[le]

  ```
- WAP to take one element from each of the array add it to the target sum. Print all those three-element combinations.   

- Given two numbers represented by two linked lists, write a function that returns sum list.
- Write an efficient method that takes stockPricesYesterday and returns the best profit I could have made from 1 purchase and 1 sale of 1 Apple stock yesterday.
- Given a string s and a dictionary of words dict, determine if s can be segmented into a space-separated sequence of one or more dictionary words.

  For example, given
  s = "leetcode",
  dict = ["leet", "code"].

  Return true because "leetcode" can be segmented as "leet code".
- Given an array of Ints find a maximum sum of non adjacent elements.
for ex. arr = [1,0,3,9,2] then ans would be 10 = 1 + 9 (non adjacent element)  .  
- Given an input string of numbers like 121, find all permutations of that number in the same order for the corresponding letters for each number so 121 => 1 2 1, 12 1, and 1 21 which is ABA, LA, and AT .
- For a given string and dictionary, how many sentences can you make from the string, such that all the words are contained in the dictionary.
- Given string a and b, with b containing all distinct characters, find the longest common subsequence's length.
- Given a 4\*n block, find number of different ways of filling it with 1*2 smaller blocks. Rotation of smaller blocks is allowed.
- You have a dictionary of words. Create a matrix of letters such that each row of the matrix is a word and each column of the matrix is a word.
- You have a sorted array of integers. Find the element where the array index is equal to the value of the corresponding element. Or return that no such element exists.
- Given an array of numbers, for every index i, find nearest index j such that a[j] > a[i].If such an index doesn’t exist for i, ­1 should be printed.
- Given a string A and B, find the smallest substring of A that contains all the characters from B. (implement solution in O(n), keep in mind chars in B can repeat).
- Given a character limit and a message, split the message up into annotated chunks without cutting words as,

 For example when sending the SMS

 "Hi Sivasrinivas, your Uber is arriving now!"

  with char limit 25,

 you should get

 ["Hi Sivasrinivas,(1/3)", "your Uber is arriving(2/3)", "now!(3/3)"].
- Write a function to tell us if a full deck of cards shuffledDeck is a single riffle of two other halves half1 and half2.
- Given a number N. print in how many ways it can be represented as N = a+b+c+d , 1< =a< =b< =c< = d; 1<=N< = 5000
- Given two number l and r (l<=r<=10^6) find most frequent digit among all prime numbers between l and r inclusive. if frequency is same print highest digit.


----
<b name="tech">Technical Interview Questions</b>
<br/>
<i><u name="dsalg">Data Structures and Algorithms</u></i>
- WAP to return mirror of a binary tree.
- Implement dictionary.
- Sparse vector product. Given two very large sparse vectors,
    1. find the data structure to store them
    2. calculate the product of them
- Design a HashMap in Java. Implement put, get, remove, resize methods.
- Implement LRU Cache.
- Program to check whether a given graph is Bipartite or not.
- Given a list of number, return all subsets of the list.  
- Serialize & Deserialize a binary tree.
- Design a data structure that supports insert, delete, search and getRandom in constant time.
- Design a data structure that supports 3 below operations:
  1. GetNextId() : It returns the auto incremental next id. i.e 1 then 2 then 3 then 4
  2. Acknolwdge(int i) : receives the acknowledgement of the id that was sent by GetNextId
  3. GetIdLevel() : It returns the minimum id that has not been acknowledged.
- Given input which is vector of log entries of some online system each entry is something like (user_name, login_time, logout_time), come up with an algorithm with outputs number of users logged in the system at each time slot in the input, output should contain only the time slot which are in the input.
- Given a string, determine if a permutation of a string can form a palindrome.
- Implement a timer using queue.
- Implement boggle(Find all possible words in a board of characters).
- Implement a map data structure using a binary search tree. It should have the functions Get, Set, and Size.  
- Implement the substring method.
- Create a data structure that stores integers, let then add, delete. It also should be be able to return the minimum diff value of the current integers.
- Given a 2D array of either '\' or '/', find out how many pieces this rectangle is divided into graphically.
For a 2X2 matrix with
```
/\
\/
```
The matrix split into 5 pieces - the diamond in middle and the four corners. Return 5 as the answer.
- Find if a set of meetings overlap. Meeting has a starttime and an endtime with accuracy to minute. All meetings take place in the same day. Do this in O(n) time.
- Design classes to represent the following problem and solve the questions 1,2,3
A user might have some outstanding auto loan amount and you have 3 types of offers: personal loan, credit card and auto loan offers. You need to provide the user
with the following details:
  1. Send user all the offers to the user
  2. Send user all eligible offers (where minCreditScore < userCreditScore < maxCreditScore)
  3. Send user all offers which satisfied 2) and where the (userOutStandingLoanAmount < maxOfferedAutoLoanAmount)
- Add a third dimension of time to a hashmap , so ur hashmap will look something like this - HashMap<K, t, V> where t is a float value. Implement the get and put methods to this map. The get method should be something like - map.get(K,t) which should give us the value. If t does not exists then map should return the closest t' such that t' is smaller than t.

  For example, if map contains (K,1,V1) and (K,2,V2) and the user does a get(k,1.5) then the output should be v1 as 1 is the next smallest number to 1.5
- Implement search in contacts list when the keyboard type is T9 (predictive text).
- Given a picture of square with a bunch of horizontal and vertical lines in it (lines are not necessarily spanning the full square length, in other words think of a fine grid with many holes in it), design data structure(s) representing the data and a function that returns a number of squares pictured. (actual implementation expected).
- Write a function to check that a binary tree  is a valid binary search tree.
- Write a method getProductsOfAllIntsExceptAtIndex() that takes an array of integers and returns an array of the products. i.e,find the product of every integer except the integer at that index.
- Implement queue with two stacks.
- You have a homogeneous  fixed-size data structure ("arena") to house structs that should do X (vague description). Define the struct, a function that stores it in the arena, and a function that retrieves it from the arena.
- WAP to find the k smallest values in a binary search tree.
- Program to find the distance between two keys in a binary tree, no parent pointers are given.
<br/><br/>
<i><u name="misc">Miscellaneous</u></i>

- There is a primary machine and a secondary(backup machine). Write a program to sync files from primary to backup machine.
- Design an alarm system for a driverless car.
- Design an algorithm to operate elevators to pick up people on different floors of a building.
- Given a restaurant menu and a budget, output all the possible ways to use up the budget.
- How would you find the words that became obsolete in English language between 16th and 17th century? You may use a search engine.
- Design a price surge system, both at a high level and the architecture
- Design a distributed system for sorting of large files.  
- Design Netflix
- Design Online Spreadsheets
- Design Twitter


## Feel free to show your love :heart: by putting a star :star: on this project :v: .
