
# Google Interview Questions

* [Telephonic Round Questions](#quiz)
* [Coding Round Questions](#coding)
* [Technical Interview Questions](#tech)
   * [Data Structures and Algorithms](#dsalg)
   * [DBMS](#dbms)
   * [Operating System](#os)
   * [Design](#design)
* [References](#ref)
____


<b name="quiz">Telephonic Round Questions</b><br/>

- What is the approximate value of 2 to the power of 24?
- The average and worst-case time complexity of Merge Sort and Quick Sort.
- What does the *.find()* function of C++ Collection return when the item is not there in the collection.
- Mention few implementations of Map interface in Java.
- What is the advantage of using Heapsort over Mergesort?
- Assume you're using a program which uses dynamic memory allocation and you're working with a libary which does not have malloc function.How would you implement your own malloc function?
- which data structure is used to implement DFS and which one is used for BFS?
- what is the lookup time for a HashSet?
- Heap is implemented using which data structure?
- which sorting algorithm is best in terms of time complexity?
____


<b name="coding">Coding round questions</b><br/>

- Given (x, y) coordinates, create a function such that each coordinate is uniquely mapped to an integer. Also make sure that given an integer, you should be able to find (x, y) coordinates. So F(x, y) = z and also that inverse F(z) = (x, y).
- You are given an array of million numbers and provided a range of index (say left, right). For multiple queries, each with input left and right indexes, output the maximum in that range.
- Given an expression tree (a tree with mathematical operations as the root and left children, and the numbers as the leaves) calculate and return the value of the whole mathematical expression.
- Given an array of integers arr[], find the number of recycled pairs in the array. A recycled pair of two numbers {a, b} has the following properties :

  A should be smaller than B.
  Several digits should be the same.
  By rotating A any number of times in one direction, we should get B.
  
- We have to paint n boards of length {A1, A2, .. An}. There are k painters available and each takes 1 unit time to paint 1 unit of the board. The problem is to find the minimum time to get this job done under the constraints that any painter will only paint continuous sections of boards, say board {2, 3, 4} or only board {1} or nothing but not board {2, 4, 5}.
- Given a valid sentence without any spaces between the words and a dictionary of valid English words, find all possible ways to break the sentence in individual dictionary words. Sample input-output is as follows: <br/>
  Sample Input:  {i, like, sam, sung, Samsung, mobile, ice, cream, icecream, man, go, mango}, "ilikesamsungmobile"  <br/>
  Sample Output: I like sam sung mobile
                 I like Samsung mobile
                 
- Given two integer arrays A and B of size N.<br>
  There are N gas stations along a circular route, where the amount of gas at station i is A[i].<br>
  You have a car with an unlimited gas tank and it costs B[i] of gas to travel from station i<br>
  to its next station (i+1). You begin the journey with an empty tank at one of the gas stations.<br>
  Return the minimum starting gas station’s index if you can travel around the circuit once, otherwise return -1.<br>
  You can only travel in one direction. i to i+1, i+2, … n-1, 0, 1, 2.. Completing the circuit means starting at i and
  ending up at i again.<br>
  
- Given a string A, partition A such that every substring of the partition is a palindrome.<br>
  Return the minimum cuts needed for a palindrome partitioning of A.<br>
    Sample Input: "aba"
    Sample Output: 0 
- Given a map containing employee to manager mappings, find all employees under each manager who directly or indirectly reports to him.<br>
  For example, consider below employee-manager pairs :<br>
   Sample Input: A->A<br>
		 B->A<br>
 		 C->B<br>
		 D->B<br>
		 E->D<br>
		 F->E<br>
   Sample Output: A-> B, D, C, E, F<br>
		  B-> D, C, E, F<br>
		  C-><br>
		  D-> E, F<br>
		  E-> F<br>
		  F-><br>

_____
<b name="tech">Technical Interview Questions</b>
<br/>
<i><u name="dsalg">Data Structures and Algorithms</u></i>
- Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
- Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).
You may assume that the intervals were initially sorted according to their start times.
- Given a string S and a string T, find the minimum window in S which will contain all the characters in T in complexity O(n).
- Given a rows * cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.
- Similarly the same above question but to find the largest square containing only 1's and return its area.
- Median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value. So the median is the mean of the two middle value.<br>
  For example, <br>
	 [2,3,4], the median is 3.<br>
	 [2,3], the median is (2+3)/2 = 2.5<br>
	Design a data structure that support the following two operations:<br>
	- void addNum(int num)-> Add a integer number from the data stream to the data structure.<br>
	- double findMedian()-> Return the median of all the elements so far.<br>
	
- You are given an integer array nums and you have to return a new counts array. The counts array has the property where counts[i] is the number of smaller elements to the right of nums[i].

- Given an integer matrix, find the length of the longest increasing path.
  From each cell, you can either move to four directions: left, right, up or down. You may NOT move diagonally or move outside of the boundary (i.e. wrap-around is not allowed).

- Given a string you need to print longest possible substring that has exactly M unique characters. If there are more than one substring of longest possible length, then print

- Implement a Generic LRU Cache in java.

- Design a logger system that receive a stream of messages along with its timestamps, each message should be printed if and only if it is not printed in the last 10 seconds.<br>
  Given a message and a timestamp (in seconds granularity), return true if the message should be printed in the given timestamp, otherwise returns false.<br>
  It is possible that several messages arrive roughly at the same time.<br>

<br/><br/>

<i><u name="dbms">DBMS</u></i>



<br/><br/>


<i><u name="os">Operating System & Networking</u></i>
- Explain how congestion control works in the TCP protocol ?
- You are given a chance to rewrite Linux, how will you do that?
- How would you optimize TCP protocol without going on UDP ways?

<br/><br/>


<i><u name="design">Design</u></i>

- You have been given a set of points across the globe as latitudes and longitudes. How will you determine points which are within a particular mile ?
- Can you design data package transfer from London to Tokyo ?
- Design a distributed system for storing a static set of (key, value) pairs which will behave like a hash table, the user will provide you key and system will return value.
- Design Algorithm for Lift to get minimum waiting time on each floor. 

<b name="ref">References</b><br/>

[https://leetcode.com]<br/>
[https://javarevisited.blogspot.com/2012/01/google-interview-questions-answers-top.html]
