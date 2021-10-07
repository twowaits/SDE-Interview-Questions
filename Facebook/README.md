# Facebook Interview Questions
* [Telephonic Round Questions](#telephonic)
* [Coding Round Questions](#coding)
* [Technical Interview Questions](#tech)
   * [Data Structures and Algorithms](#dsalg)
   * [DBMS](#dbms)
   * [Operating System](#os)
   * [Miscellaneous](#misc)
* [References](#ref)
____
<b name="telephonic">Telephonic round questions</b><br/>

- You are given the start time and finish time of n intervals. You have to write a a function that returns boolean value indicating if there was any overlapping interval in the set of existing intervals. (Sort and check, time complexity O(nlogn)).
- You have 2 sparse vectors (large number of 0’s). First tell me a way to represent and store them, and then find the dot product.
(To store them, we should store the value and index of those indexes that have a non-zero value, and then finding the dot product is very straight forward).
- You have an array of n elements, and a sum. Check if any 2 elements in the array sum to the given sum.
- Given an array A[] of N numbers and another number x, determine whether or not there exist three elements in A[] whose sum is exactly x.
- Given an array of strings, return the common prefixes, if not found return an empty array.
Ex. ['abcd', 'abb', 'acd'] -> return 'a'
- Given an array of ints, return the kth largest element in the array.
Ex. [-3,5,0,9,4], k = 2 -> return 5


----
<b name="coding">Coding round questions</b><br/>

- Given a string, check if it is a palindrome by ignoring spaces. E.g. race car would be a palindrome.
- Given two very large strings, consisting of only digits, multiply the two strings and return the result as a string.
- There are n trees in a circle. Each tree has a fruit value associated with it. A bird can sit on a tree for 0.5 sec and then he has to move to a neighbouring tree. It takes the bird 0.5 seconds to move from one tree to another. The bird gets the fruit value when she sits on a tree. We are given n and m (the number of seconds the bird has), and the fruit values of the trees. We have to maximise the total fruit value that the bird can gather. The bird can start from any tree.
- You are given the encoding for a base 58 number. You have to convert all the numbers from 1 to n to a base 58 number using the encoding given.


----


<b name="tech">Technical interview questions</b><br/>
<i><u name="dsalg">Data Structures and Algorithms</u></i>

- Converting Decimal Number lying between 1 to 3999 to Roman Numerals.m
- Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.
- Given an array with positive number the task is that we find largest subset from array that contain elements which are Fibonacci numbers.
- Given a string of numbers, the task is to find the maximum value from the string, you can add a ‘+’ or ‘*’ sign between any two numbers.
- Given a string that contains ternary expressions. The expressions may be nested, task is convert the given ternary expression to a binary Tree.
- Given an integer array and a positive integer k, count all distinct pairs with difference equal to k. 
- Given a string, find out if the string is K-Palindrome or not. A K-palindrome string transforms into a palindrome on removing at most k characters from it.
- Given a binary tree, find its minimum depth. The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
- Given an unsorted array of nonnegative integers, find a continuous subarray which adds to a given number.
- Find the n’th term in Look-and-say (Or Count and Say) Sequence. The look-and-say sequence is the sequence of integers:1, 11, 21, 1211, 111221, 312211, 13112221, 1113213211, …
- Given a dictionary, a method to do a lookup in the dictionary and a M x N board where every cell has one character. Find all possible words that can be formed by a sequence of adjacent characters. Note that we can move to any of 8 adjacent characters, but a word should not have multiple instances of the same cell.
- Let 1 represent ‘A’, 2 represents ‘B’, etc. Given a digit sequence, count the number of possible decodings of the given digit sequence.
- Given a square matrix, turn it by 90 degrees in anti-clockwise direction without using any extra space.
- Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have same width and the width is 1 unit.
- Given that integers are read from a data stream. Find median of elements read so for in efficient way. For simplicity assume there are no duplicates. 

<i><u name="dbms">DBMS</u></i>

<br/>
<i><u name="os">Operating System</u></i>

<br/>
<i><u name="misc">Miscellaneous</u></i>

- Design URL Shortener
- Design Messenger
- Design Search Typeahead











# Facebook Interview Questions
* [Coding Round Questions](#coding)
____
<b name="coding">Coding round questions</b><br/>

- There are N trees in a circle. Each tree has a fruit value associated with it. A bird has to sit on a tree for 0.5 sec to gather all the fruits present on the tree and then the   bird can move to a neighboring tree. It takes the bird 0.5 seconds to move from one tree to another. Once all the fruits are picked from a particular tree, she can’t pick any     more fruits from that tree. The maximum number of fruits she can gather is infinite.
  Given N and M (the total number of seconds the bird has), and the fruit values of the trees. We have to maximize the total fruit value that the bird can gather. The bird can       start from any tree.<br>
  
- Given two numbers as stings s1 and s2 your task is to multiply them.<br>

- Find the longest increasing subsequence of a given array of integers, A.
  In other words, find a subsequence of array in which the subsequence’s elements are in strictly increasing order, and in which the subsequence is as long as possible.
  This subsequence is not necessarily contiguous, or unique.
  In this case, we only care about the length of the longest increasing subsequence.<br>
    Sample Input:  A = 1,2,1,5
    Sample Output: 3<br>
  

- A message containing letters from A-Z is being encoded to numbers using the following mapping:
  'A' -> 1
  'B' -> 2
   ...
  'Z' -> 26
  Given an encoded message A containing digits, determine the total number of ways to decode it modulo 10^9+7.<br>
  
