# Yatra.com Interview Questions

* [Coding Round Questions](#coding)
* [Technical Interview Questions](#tech)
   * [Data Structures and Algorithms](#dsalg)
   * [DBMS](#dbms)
   * [Operating System](#os)
   * [Miscellaneous](#misc)
* [References](#ref)
____
<b name="coding">Coding round questions</b><br/>

- Two arrays are provided. The second array is to be traversed and number(count) of values smaller/equal than each element of the second array in the first array are to be printed as output.

- One integer array is provided, and a value ‘k’ is given. You have to print the number(count)
of sub-arrays whose product is less than ‘k’.

- Given three sorted array, find the numbers which are common in all three arrays.

- Find bitonic point in given bitonic sequence.

- A 2-D matrix is provided consisting of values 0,1 and 2 only. 0 Represents blocked path, 1 represents open path and 2 represents cheese & open path. Now, Tom stands at (0,0) and location of Jerry is given .Tom needs to collect all the cheese and catch Jerry optimally.
- Given two strings s1 and s2, we need to find the minimum number of manipulations required to make two strings anagram without deleting any character.
- Given a list of strings, where each string is composed of different combinations of (, ), {, }, [, ]. Verify the validity of the arrangement. ()[]{} Is valid, ())({} is not valid.

- Given a string return all possible subsequences which start with vowel and end with consonant.
For input abc – ab, ac, abc
For input aab – ab, aab

- An array is given which contains the age of your friends , if the age of the friend is greater than any neighbor then he will get more chocolate than him. You have to find the number of chocolates for distributing each one.(Birthday Problem)

- Given an array A[] consisting 0s, 1s and 2s, write a function that sorts A[]. The functions should put all 0s first, then all 1s and all 2s in last.

- Given an array of integers, find the nearest smaller number for every element such that smaller element is on left side.

- Write a program to reverse words in a given string.

- Given a Matrix with 0’s and 1’s in sorted order. design an algorithm to return row index with maximum number of 1’s. after That he modified the ques that some rows are sorted in increasing order and some in decreasing order.

- Given two arrays of n+m and n size. n+m size array only have m elements and n size array have n elements. Design an algorithm to shift smaller array element in larger array also larger array should be sorted.

- There are 2 ^ n sorted arrays of size k . Merge them to  form a single sorted array.

- Given an array and integer.Find whether b is present in a[] or not.If present,then double the value of b and search again. We repeat these steps until b is not found. Finally we return value of b.

- Given an array that is sorted and then rotated around an unknown point. Find if array has a pair with given sum.It may be assumed that all elements in array are distinct.

- Given a string which contains vowels and consonants. Find the number of substrings which start with vowel and ends with consonant.

- Given a 2d grid map of 'Y's <b>(Grass)</b> and 'N's <b>(no Grass)</b> where connected grass blocks forms a <b>field</b>. Two fields are separated field by 'no grass' and is formed by connecting grass blocks horizontally or vertically. Only a cow or sheep can graze in one field. Find the count of all the combinations where the number of sheep is even. 
 ```
e.g. Grid is YYYN
             NNYN
             NYNY
             NNNY
       Here the number of fields is 3. 
``` 
- Given an array of distinct integers and a sum value. Find count of triplets with sum smaller than given sum value. Expected Time Complexity is O(n<sup>2</sup>).

- Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

- Given two strings in lowercase, the task is to make them anagram. The only allowed operation is to modify a character from any string. Find minimum number of characters to be modified to make both the strings anagram?
  If they cannot be modified to anagrams return -1 (viz. when strings are unequal in length.).
  
----
<b name="tech">Technical Interview Questions</b>
<br/>
<i><u name="dsalg">Data Structures and Algorithms</u></i>
- Write a code to reverse a linked list.

- You are given a list of songs and you have to select a random song and play it, but the condition was that you can not play a song twice.Consider there is a function play() which takes song as parameter and plays it.

- Rotate a 2D-matrix by 90 degree without using extra space.

- Given a binary tree, Do the reverse level order traversal.

- Given coordinates of points find closest pair points distance.

- Given an array find two elements whose sum equal to zero.

- Reverse the elements of stack without using another stack, queue and array.

- Implement Manacher's algorithm.

- Find a pair of elements swapping which makes sum of two arrays same. If not possible, return -1. Time complexity should be less than O(n^2).

- Perform reverse level order traversal using TreeMap(Java).

- Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree

- In a binary tree, find the left facing elements with recursion and without recursion.

- Given 2D array horizontally and vertically sorted find a given element.

- Compress a given string "aabbbccc" to "a2b3c3";no extra space to be used .

- Rotation of the sorted array through some pivot.

- Find the number in an array which is appearing odd number of times.

- Find whether two strings are anagrams of each other or not.What would happen if strings are very large.

- Level Order traversal of a binary tree.

- Given a binary tree, find whether all leaves are at same level or not.

- Check whether given linked list is palindrome or not.Write optimized code handling all edge cases.

- Reverse K blocks of nodes in linked list.

- Find min element in stack in O(1).

- Implement counting sort.

- Given a set of start date and end date, design a data structure to return the set given date falls in.

- Find second non-repeating element in an array.

- Clone a binary tree. Node object is immutable.  

- Implement Kadane's Algorithm.

- Implement Trie with insert, search, and startsWith methods.

- Find the median of unsorted array in linear time.

- Write code for Dutch National Flag problem.

- Minimum value in a max heap.  

- Design and implement a data structure for Least Recently Used (LRU) cache.

- Delete the odd elements from a linked list.  

- Find the minimum difference between two elements. But the difference must be calculated between the current element and the elements on the right hand side of the element.  

- Implement a compression algorithm e.g. if data is 10GB in size and my storage is only 1 GB

- Find the last repeating element in integer array O(n).

- Check whether a binary tree is binary search tree.
<br/><br/>
<i><u name="dbms">DBMS</u></i>
-  Given a table with (empId, deptId, Salary ) make a sql query which list the maximum salary for each department.

- Given a table (EmpID, Salary) make a generic sql query so that i can get the nth highest salary.

- Design tables for getting all employees under manager.

- What is database normalization? What are its advantages and disadvantages?

- Write SQL commands to create a table appropriate for representing students as well
as SQL commands that illustrate how to add, delete, and update students, as well as
search for students by GPA with results sorted by GPA.

- What is a SQL join? Suppose you have a table of courses and a table of
students. How might a SQL join arise naturally in such a database?
<br/>
<br/>
<i><u name="os">Operating System</u></i>

- What is deadlock ?What are the necessary conditions for deadlock?

- Algo for Readers-Writers problem.

- What is a process and process table? What are different states of process?

- What is Virtual Memory? How is it implemented?

- Differences between mutex and semphore?

- What is difference between micro kernel and macro kernel?
<br/>
<br/>
<i><u name="misc">Miscellaneous</u></i>

- Difference between HashMap & LinkedHashMap.

- What is Hashing, Hash table ?

- Algorithm for Level order traversal of BST without using Queue Data structure.

- Cloning a linked list with random pointers.

- Given a base string, find whether the input string is rotation of base string.

- Draw Class diagram of Training and Placement Cell of your college.
---


## Feel free to show your love :heart: by putting a star :star: on this project :v: .

<b name="ref">References</b>
- [Geeksforgeeks](http://www.geeksforgeeks.org/)
- [Career Cup](https://www.careercup.com/)
- [Glassdoor](https://www.glassdoor.co.in/index.htm)


