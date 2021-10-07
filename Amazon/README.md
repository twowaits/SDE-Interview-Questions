# Amazon Interview Questions

- [Coding Round Questions](#coding)
- [Technical Interview Questions](#tech)
  - [Data Structures and Algorithms](#dsalg)
  - [DBMS](#dbms)
  - [Operating System](#os)
  - [System Design](#design)

---

<b name="coding">Coding round questions</b><br/>

- Given an array of distinct elements and a number x, find if there is a pair with product equal to x.
- Given a string ‘str’ of digits and an integer ‘n’, build the lowest possible number by removing ‘n’ digits from the string and not changing the order of input digits.
- Given a number, find its corresponding Roman numeral.
- Given a linked list, write a function to reverse every k nodes (where k is an input to the function).
- Given phone digits, print all possible words that can be formed from them.
- You are given an array of integers. Return an array of the same size where the element at each index is the product of all the elements in the original array except for the element at that index.
  For example, an input of [1, 2, 3, 4, 5] should return [120, 60, 40, 30, 24].
  You cannot use division in this problem.
- Given a linked list and two integers M and N.
  Traverse the linked list such that you retain M nodes then delete next N nodes, continue the same till the end of the linked list.
  For example, an input of M = 2, N = 2 Linked List: 1->2->3->4->5->6->7->8 should return Linked List: 1->2->5->6

- Given an array consisting many inner arrays, flatten the array into one:
  example: input: [[6,4,7,[9,5,4,[2,4,8]]],[2,2,7],[9,0,7,[9,3,1,8,5]]]
  output: [6,4,7,9,5,4,2,4,8,2,2,7,9,0,7,9,3,1,8,5]

- Given two sorted linked lists, merge them so that the resulting linked list is also sorted.
- Given a set of points find the one with the shortest distance from the origin
- Reverse the bits of an 32 bit unsigned integer A.
- Find if Given number is power of 2 or not.
  More specifically, find if given number can be expressed as 2^k where k >= 1.
- Imagine that an employee tree represents the formal employee heirarchy at Amazon. Manager nodes have child nodes for each employee that reports to them; each of these employees can, in turn, have child nodes representing the number of months the employee has spent at the company. Team tenure is computed as the average tuenure of the manager and all the company employees working below the manager. The oldest team has the highest team tenure. Write an algorithm to find the manager of the team with the highest tenure. An employee must have child nodes to be a manager.
  </br>

- Maximize partitions such that no two substrings have any common character
- Find Square Root of a whole number without using standard functions 
- Priority Inversion
- Detect cycle in a directed graph
- Recursively Reversing a linked list
- Given a binary tree, print it's top view.
- Find whether one binary tree is present in another binary tree.
- Merge k sorted arrays.
- Given a matrix where each row and each column is sorted, check whether the given number is present in the matrix.
- Given a string of parenthesis like {()[{]).Check if it balanced or not.
- Assembly Line Scheduling(Dynamic programming)
- The Celebrity Problem
- Given a string S consisting only of opening and closing parenthesis 'ie '('  and ')', find out the length of the longest valid(well-formed) parentheses substring.
NOTE: Length of the smallest valid substring ( ) is 2.

</br>

<b name="tech">Technical Interview Questions</b>
<br/>
<i><u name="dsalg">Data Structures and Algorithms</u></i>

 - There is an infinite stream of Products. Write a program to print top 10 cheapest products at any given point of time. Do it within fixed amount of memory i.e. you can't consume unknown amount of memory. (Hint: Heaps)
 - Given n fences, WAP to paint them with k colours such that not more than 2 consecutive fences are of same colour.
 - Suppose there are 2 glasses with capacities 5 litres and 3 litres. The glasses can only be completely filled or completely emptied. The water can be transferred from one glass to another, for eg. 5 ltrs glass can transfer all water to 3 ltrs glass and 2 ltrs of water will be left in 5 ltrs of glass. You cannot partially empty or fill any glass. The goal is to get 4 ltrs of water in any one glass. WAP to do this with n number of glasses with given capacities for each and the final capacity to achieve being k in any 1 glass. Print the least number of steps required to do so.
 - Given a large 2D array with numbers increasing as you go right or you go down. Convert this into a sorted 1D array in fixed amount of memory. (Hint: Heaps)
 - Given a large 1D array of 0's and 1's.Find the largest subarray which contains equal numbers of 0's and 1's. (Hint: Similar to largest subarray with zero sum)

<br/>
<i><u name="dbms">DBMS</u></i>

- Difference between different type of Normalisation.
- Difference between SQL and NoSQL
- Define the ACID properties.
- What is Cursor? How to use a Cursor?

<br/>
<i><u name="os">Operating System</u></i>

<br/>
<i><u name="design">System Design</u></i>

- Design a system that controls traffic lights with below assumptions:

  1.  A group of traffic lights has two components: main lights and pedestrian lights.
  1.  Main traffic lights have three colors: red, yellow and green.
  1.  Pedestrian lights have two colors: red and green.
  1.  Pedestrian lights' colors are reversed from main lights:

  - Main: red/yellow - pedestrian's: green
  - Main: green - pedestrian: red

  1.  There is a button for pedestrian lights if the button is pushed in advance, pedestrian's lights change colors according to the main ones if the button isn't pushed, pedestrian's lights remain red.
  1.  A typical junction has 4 groups of lights.
  1.  Additional question: design the system in a way that allows cars which start from one junction after a red light don't have to stop at the next one.

- Design a card game by considering the following assumptions:

  1. There should be more than one method of cards distribution such as even distribution, uneven distribution, etc.
  1. There are multiple situations which could be considered as a winning situation:

  - One who finishes all his cards early.
  - One who earns the maximum points at the last.

- Design a task management system like Trello with the following assumptions: 1. User can move tasks from one lane to the other and move it back. 2. This should have a state diagram with many end states.
  <br/>
  <br/>
  <i><u name="misc">Miscellaneous</u></i>

  - Design a task management system like Trello with the following assumptions:
    1. User can move tasks from one lane to the other and move it back.
    2. This should have a state diagram with many end states.
  - Design a Circular Buffer having the abilty of variable partitioning.
  - Describe the main features of object oriented programming.
