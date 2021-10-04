# Flipkart Interview Questions

- [Coding Round Questions](#coding)
- [Technical Interview Questions](#tech)
  - [Data Structures and Algorithms](#dsalg)
  - [DBMS](#dbms)
  - [Operating System](#os)
  - [Miscellaneous](#misc)
- [References](#ref)

---

<b name="coding">Coding round questions</b><br/>

- Paths requiring minimum number of jumps to reach end of array
- Find the row having a maximum number of 1s in a binary matrix where each row is sorted.
- Clone a stack without using extra space.
- Design a stack with push pop and find min operations in o(1) time.
- Explain external merge sorting. And try to optimize it if possible.
- Given a string s1 and another string s2, what is the smallest substring in s1 that contains all the characters of s2 ? (most efficient solution)
- Given two list of strings, do the following operations of each pair of strings with same index.
  Operation: compute the minimum no. of changes required to make them anagram(rearrange characters of the first string to make another string).
  ```
    Eg: (abc,def) = 3
        (abc,cde) = 2
        (aab,bba) = 1
        (aaa,bbb) = 3
  ```

---

<b name="tech">Technical Interview Questions</b>
<br/>
<i><u name="dsalg">Data Structures and Algorithms</u></i>

- Given set of words which I have to treat as dictionary as new lexicographic order. I have to learn from set of string as print lexicographic order of each character.
- Generate n numbers in ascending order which are having given k factors. Discuss various approaches. Discussed on various approaches.
- Simple dp question that a frog can take 1 or 2 step. Number of ways to reach nth position.
- Given a string s1 from a dictionary and a string s2 from a dictionary, find the minimum number of steps to transform s1 to s2 under the following conditions:
  You can change the implementaion of dictionary
  Every transformation should belong to the dictionary
  You are given a O(1) library function F(s1,s2) which returns True or False for the query ‘can s2 be obtained from s1 with a single transformation’
- Convert a BST to sorted doubly linked list without any extra space.
- Given an array of integers, for each element find the smallest element bigger than it and is present to its right. (Expected time complexity O(nlogn)
- Given a complete binary tree, such that level order traversal is sorted. Find an element K in this tree efficiently. (Obviously better than O(n))
- Given an array of sorted integers(both positive and negative), you have to find the square array, which contains a square of each element of the given array in sorted order.
  (Expected time complexity O(n))
- Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.
- You are given three sorted arrays A,B,C. You have to count number of tuples (a,b,c) satisfying a>b>c. a is taken from A, b is taken from B and c is taken from C
- Given NxN matrix. Each cell contains a symbol which is the direction to which you can move from that position. Like if ‘->’ then you can move the left adjacent cell, ‘<-‘ then move to the right adjacent cell and so on for moving upwards and downwards.
  Now you would be given start and a end point. You have to find if there is path from start to the end.
- Given an integer array nums, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order.
  Return the shortest such subarray and output its length
- Given an n-ary tree, you have to burn all the leaves first. Now, some new leaves will form so you burn them too. Repeat this process until you burn the root node. Your task is to print all the leaves which burn at a time in one line.

  ```
  Eg :              1
                  /   \
                2      3
              /  \    /  \
             4    5  6    7
           /  \
          8    9

  O/P:	8 9 5 6 7
        4 3
        2
        1
  ```

- Given an array of integers(both positive and negative), you have to compute the minimum value of abs(sum of all numbers)
  You can change the sign of any element any number of times.
  
- Given the start and end coordinates of a knight in a chess board, return the minimum number of moves required by the knight to go from the start to the end position. (Knight's movement: move two squares vertically and one square horizontally, or two squares horizontally and one square vertically). If it is impossible to reach the end position, return -1.

<i><u name="dbms">DBMS</u></i>

- what tables would you like to used for online shopping like flipkart. He asked the the primary keys for every table and foreign key if there are any.
- He then asked me about mapping of these keys and what type of mapping to be used here(one to one, many to many or many to one).

<i><u name="os">Operating System</u></i>

- Multithreading and its examples
  <br>

<i><u name="misc">Miscellaneous</u></i>

- Projects and Internship
- There are billions of URL given. Come up with a efficient data structure that returns ip address of these urls.
- Print the boundary of a tree.
- Database Mgt System
- Given a large stream of strings, return the top 10 most frequently occurring string . (Hash map + min heap of size 10 is the solution.)
- Trie data structure
