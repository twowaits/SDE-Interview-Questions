# Expedia Interview Questions
* [Coding Round Questions](#coding)
* [Technical Interview Questions](#tech)
   * [Data Structures and Algorithms](#dsalg)
   * [DBMS](#dbms)
   * [Operating System](#os)
   * [Miscellaneous](#misc)
* [References](#ref)
____
<b name="coding">Coding round questions</b><br/>
- Given a collection of intervals, merge all overlapping intervals.
   ```
   For example,
   Given [1,3],[2,6],[8,10],[15,18],
   return [1,6],[8,10],[15,18]
   ```
- Given an input string, reverse the string word by word.
    ```
    For example,
    Given s = "the sky is blue",
    return "blue is sky the".
    ```
- Find maximum sum of subarray.

- We define a `k-subsequence` of an array as follows:

 1) it is a subsequence of consecutive elements in the array.

 2) the sum of the subsequence's elements s, is evenly divisible by k`(i.e. s % k == 0)`.  
  Given an integer and input array, find out the number of k-subsequences.
  Example: k=3 and array be `[1 2 3 4 1] `
  Output: 4 `({1 2},{1,2,3},{2,3,4},{3})`.  

- You are given an array with duplicates. You have to sort the array with decreasing frequency of elements. If two elements have the same frequency, sort them by their actual value in increasing order.
e.g: ``[2 3 5 3 7 9 5 3 7]``      
Output: ``[3 3 3 5 5 7 7 2 9]``

- You are given two string (like two statements). You have to remove all the words of second string from first string and print the remaining first string. Please maintain the order of the remaining words from the first string. You will be only removing the first word, not all occurrence of a word.
      Example: Str1 = "A Statement is a Statement"
               Str2 = "Statement a"
      Output: "A is Statement"
- You are given an integer. Print its 4th least significant bit.

- Harry is trying to climb a pole. He climbs the pole in terms of hops. The height of the pole is k. Harry at a time can make a hop of:    
1.) 1 unit    
2.) n units     
Find the minimum number of hops Harry would need to reach the top of the pole.

- Given two positive floating point numbers `(x,y)`, calculate `x/y` to within a specified epsilon without using in-built functions.

- Write a recursive function to generate Pascal triangle.

- Write a program to move all the zeros to the beginning. Input `{1,2,3,0,0,0,4,5}` Output `{0,0,0,1,2,3,4,5}`.

- Given a +ve integer, find the next highest number in the numerical order using the same numbers present in the given integer.
      Example : 218765
      Output : 251678

- Implement atoi to convert a string to an integer.

- There is an infinite integer grid at which N people have their houses on. They decide to unite at
a common meeting place, which is someone's house.
From any given cell, all 8 adjacent cells are reachable in 1 unit of time.
eg: (x,y) can be reached from (x-1,y+1) in a single unit of time.
Find a common meeting place which minimises the sum of the travel times of all the persons.

  Input Format:
  N
  The following N lines will contain two integers saying the x & y coordinate of the i-th person.
  
  Output Format:
  M M = min sum of all travel times;   
- Ashley has a bunch of coins she wants to arrange into staircases. She starts with row of 1 coin which goes on top of a row of 2 coins, then 3 coins and so on. Each row should have exactly 1 more coin than the row above it. Determine the number of complete rows of coins in her finished staircase.

  For example, if she's got 6 coins, she can create a stairase with 1 coin in the top row, 2 in the second and 3 in the third. She can complete 3 rows. It would take atleast 4 more coins, 10 coins total, for her to be able to create a 4th complete row. 
----
<b name="tech">Technical Interview Questions</b>

-  A server can call an API once per second. How would you ensure that it calls 1/sec given that it's a multithreaded environment. If there are multiple servers how would you ensure that the calls still remain 1/sec.

<i><u name="misc">Miscellaneous</u></i>
- What is the __init__.py file in Python?
- What does the double underscore represent in Python? 
- Puzzle: You are given 8 identical looking balls. One of them is heavier than the rest of the 7 (all the others weigh exactly the same). You a provided with a simple mechanical balance and you are restricted to only 2 uses. Find the heavier ball.
