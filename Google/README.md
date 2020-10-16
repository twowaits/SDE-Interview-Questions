
# Google Interview Questions

* [Telephonic Round Questions](#quiz)
* [Coding Round Questions](#coding)

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
---
### Google 2020-21 Intern Coding Round
#### a) Array Queries -
- You are given an array of integers whose length is N, you must perform the following five types of query on the given array : 
	1. Left: Perform one cyclic left rotation.
	2. Right: Perform one cyclic right rotation.
	3. Update Pos Value: Update the value at index Pos of the array by Val.
	4. Increment Pos: Increment value at index Pos of the array by 1.
	5. Pos: Print the current value at index Pos.

- All the queries are performed considering 1-based indexing.

	###### Input format 
The first line contains an integer N denoting the length of the array.
The second line contains N space-separated integers denoting the elements of the array.
The third line contains an integer Q denoting the number of queries.
Next, Q lines contain the described type of query.
Output format: For each query of type 5, print the output in a new line.

	Constraints

	2 ≤ N ≤ 5 x 105
	2 ≤ Q ≤ 5 x 105
	1 ≤ Pos ≤ N
	0 ≤ arri , Val ≤ 105
	It is guaranteed that at least one query is of type 5.

	Sample Input 1

	10
	0 3 3 8 0 6 9 3 2 8
	10
	Increment 3
	Increment 1
	Left
	Increment 5
	Left
	? 9
	Right

	Sample Output 1
	1
	9

Hint for solution-  Cyclic Rotation can be done in O(1).
#### b) Match Count -

- There are N-words in a dictionary such that each word is of fixed length M and consists of only lowercase English letters that are ('a', 'b', ……. ‘z’).

	A query word denoted by Q. The length of query word in M. These words contain lowercase English letters but at some places instead of a letter between ‘a’, ‘b’, ……. ‘z’ 	there is ‘?’ .Refer to the Sample input section to understand this case.
	A match count of Q, denoted by match_count(Q), is the count of words that are is the dictionary and contain the same English letters (excluding a letter that can be in 	the position of ?) in the same position as the letters are there are in the query word Q.
	In other words, a word in the dictionary can contain any letters at the position ‘?’ but the remaining alphabets must match with the query word.
	You are given a query word Q and you are required to compute match_count(Q).

	Input format

	 First-line contains two space-separated integers M and  N denoting the number of words in the dictionary and length of each word respectively.
	The next N lines contain one word each from the dictionary.
	The next line contains an integer Q denoting the number of query words for which u have to compute match_count()
	The next Q lines contain one query word each.
	Output format

	For each query word, print match_count for specific words in a new line.

	Constraints

	1 ≤ N ≤ 5 x 104
	1 ≤ M ≤ 7
	1 ≤ Q ≤ 105

	Sample Input 

	5 3
	cat
	map
	bat
	man
	pen
	4
	?at
	ma?
	?a?
	
	Sample Output
	
	2
	2
	4
	2
---
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
