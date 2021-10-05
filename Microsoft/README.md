
# Microsoft Interview Questions
* [Coding Round Questions](#coding)
* [Technical Interview Questions](#tech)
   * [Data Structures and Algorithms](#dsalg)
   * [DBMS](#dbms)
   * [Operating System](#os)
   * [System Design](#design)
   * [Miscellaneous](#misc)
* [References](#ref)

____
<b name="coding">Coding round questions</b><br/>

- Write a program to check if a binary tree is BST or not.
- Write a program to reverse digits of an integer.
- Write a function that calculates the day of the week for any particular date in the past or future.
- Given a binary tree and data value of a node. The task is to find the sum of cousin nodes of a given node. If the given node has no cousins then return -1.
-Given a positive number N. The task is to round N to the nearest multiple of 10. The number can be so big and can contain 1000 of digits.
- At an ATM Machine, you are given an amount to withdraw and some denominations of the Notes available in the ATM Machine. Find the number of ways in which you can withdraw the amount.
- You are given 2 Linked List where each List represents a number, i.e if the linked list of length 3 is represented as 2->4->1 then it represents the number 241. You need to implement a function that computes the sum of these 2 numbers(represented as a linked list) and the resultant number should also be represented as a linked list.
- Implement a function that accepts two integers arrays 'arr1' and 'arr2' of sizes n and m respectively as its argument to find and return the sum of all uncommon elements in two arrays(elements which are present in only one of the array). Return -1 if both arrays are null. If one of the arrays is null then return the sum of all elements of the other array.
- A function accepts 2 int arrays - value array 'valarr' and index array 'indexarr', both of length 'l', as its arguments. Implement the function to permute the given value array according to the index array provided. Return the modified value array from the function.
- Given a string of consecutive digits and a number Y, the task is to find the number of minimum sets such that every set follows the below rule:
    1. Set should contain consecutive numbers
    1. No digit can be used more than once.
    1. The number in the set should not be more than Y.
- Given two numbers n,m find a number closest to n and divisible by m.
- Given a string consisting of only 0,1,A,B,C where A=AND B=OR and C=
XOR. Calculate the value of the string moving from left to right assuming no order of precedence.
- Find length of longest AP in given set of numbers.
- Reverse words in a given string
- Given an array that contains both positive and negative integers, find the product of the maximum product subarray. Expected Time complexity is O(n) and only O(1) extra space can be used.
- Given an array. Values of the array are memory sizes and the memory that is required by the system can only be represented in powers of 2. Return the size of the memory required by the system. Eg: – arr = {2,1,4,5} ,Total = 12. So, memory required =16.
- Given two strings, modify 1st string such that all the common characters of the two strings are removed and the uncommon characters of the 2nd string are concatenated with uncommon characters of the 1st string. Eg: String 1 - 'aacdb' , String 2 – 'gafd' & Output – cbgf.
- Given a linked list, segregate its even and odd position nodes in such a way that odd position nodes before even positioned nodes and even positioned nodes are appended after odd positioned nodes but in a reverse order. Eg: linked list: – 1 -> 2 -> 3 -> 4 -> 5 -> 6 , Output: – 1 -> 3-> 5 -> 6 -> 4-> 2.
- Given a JSON string find the max depth of the string.
- Given n dice and each face has value from 1 to x. Calculate the number of ways a value SUM can be obtained by rolling those dice.
- Evaluate an infix expression in one pass without converting to postfix notation.
</br>

----
<b name="tech">Technical Interview Questions</b>
<br/>

<i><u name="dsalg">Data Structures and Algorithms</u></i>

- Given two expressions in the form of a tree. Where each node is either a token or an operator. Check if the given expressions are same. Tokens can not be compared i.e their value in not defined. And the operator behaves similar to addition having properties like commutative and associative.
- Design a data structure similar to dictionary.
- Given N rectangles in a 2-D and the (x, y) coordinates of the bottom left corner of each rectangle and height and width of each rectangle. Return (x, y) coordinates of the bottom left corner of overlapping rectangle and also give its height and width.
- N flight tickets are given, create the route using these pairs of points from source to the destination.
- N elements are given and N is very large. Print the smallest element.
- Given a rectangle of size AxB, find minimum number of squares that could be formed from that particular rectangle.
- Implement queue (class) and implement Enqueue and Dequeue functions in the class. Make the class thread safe. If this queue is used by N machines and each machine has its own view of the queue, how will you maintain the consistency.
- Boundary Traversal of binary tree to print only alternate nodes.
- Given a number n, find the minimum number of squares that sum to X. A number can always be represented as a sum of squares of other numbers.
- Given an n x n matrix, where every row and column is sorted in increasing order. Given a key, how to decide whether this key is in the matrix.
- Given, a sorted array pivoted (rotated by some number) at some point, find the position of a given element.
- Given, an array of integers what will be the maximum OR value? Find the smallest subset that gives the maximum OR value?
- Given a BST, find the distance between 2 nodes whose values are given.
- How will you delete a node in a doubly-linked list?
- Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
- Implement a DS that supports 3 operations.
    1. Insert
    2. Delete
    3. Get Random Element (Return a uniformly random element from the set of elements)
  It is guaranteed that the elements are unique. Implement the DS such that it supports all these operations in O(1) time.    
- Given a matrix find a submatrix with the maximum sum. 
- Given a row-wise and column-wise sorted matrix find a given element. 
- Find the lowest common ancestor of a binary tree which has links to its parents.
- Partition an array into two disjoit subsets so that they have minimum absolute difference of their sums.
- Calculate Height of a Binary Tree.
- Given an un-directed graph, find if the graph contains any cycle.
- Find if an array is subset of another array.
- Suggest DS for text prediction and spell check. Follow up to this were -
    1. Write the implementation of Trie.
    2. How can you reduce the space complexity of Trie?
<br/>

<i><u name="dbms">DBMS</u></i>

- Difference between Vertical and Horizontal Scaling.
- Sharding
- Indexing in DBMS.
- Joins in DBMS
<br/>
<i><u name="os">Operating System</u></i>

- Deadlock in OS
- Difference between Process and thread
- Thrashing in OS
- Difference between virtual addressing and translation lookaside buffer(TLB)
- As a developer how would you make your programs knowing the fact that the system implements paging.
- How is deadlock created?
- Talk about Semaphores and Critical Section.
- Different types of Job Scheduling algorithms? What is starvation?
<br/>

<i><u name="design">System Design</u></i>

- How is a URL shortened?  
- Define the LRU cache and what data structure would you use to implement it?
- Questions based on locked transactions in the banking sector. What will happen if 2 transactions are being made from the same account exactly at the same time? What are the different checks made by the bank to keep a check on frauds?
- Design an elevator system
- Design a service or tool that monitor the number of requests per a window time a service agrees to allow. If the number of request exceeds the rate limiter blocks all the excess calls.
- Design a Restaurant Management System.
- You are in charge of writing a software for a slot machine. On press of a button, the slot machine should output the roll of 2 dice. Constraints: Do not use the random library and secondly the probability of the dice rolls should be equal.
- Design a T9 Keypad predictor. i.e, you just write the numbers and it shows at most 5 suggestions of words that can be formed , or words having this as a prefix.
- Design 'Ride Now' feature in Ola Ride App.
- Low level design of employee-manager "out-of-office" status provider that returns details of an employee if working on a given day otherwise keep going up the heirarchy of their managers until one is available.
- Design camera class present in smartphones in such a way that multiple instances of that object are not created everytime camera is accessed.
- Design a class that returns correct payment object when one of different types of payment methods (credit card, debit card, netbanking, UPI...etc) is given as input.
<br/>

<i><u name="misc">Miscellaneous</u></i>

- Projects and Internship
- Challenges faced in the college life
- Extra-curricular activities
- Given two very big numbers (each more than 500 digits), multiply them.
- Three Qualities why we should hire you?
</br>

----
<b name="ref">References</b><br/>

- [Geeksforgeeks](http://www.geeksforgeeks.org/)
- [Leetcode](https://leetcode.com/)

