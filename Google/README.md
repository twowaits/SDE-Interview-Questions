
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
 
- Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times.<br>
  You may assume that the array is non-empty and the majority element always exist in the array.<br>
      Sample Input: [2, 1, 2]<br>
      Sample Output: 2 which occurs 2 times which is greater than 3/2.<br>

- Given a 2D binary matrix filled with 0’s and 1’s, find the largest rectangle containing all ones and return its area.<br>
  Bonus if you can solve it in O(n^2) or less.<br>
      Sample Input: A = [  1 1 1<br>
                           0 1 1<br>
                           1 0 0 ]<br>
      Sample Output : 4 
    As the max area rectangle is created by the 2x2 rectangle created by (0,1), (0,2), (1,1) and (1,2).<br>

- Given two sequences A, B, count number of unique ways in sequence A, to form a subsequence that is identical to the sequence B.<br>
  Subsequence : A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of<br> the characters without disturbing the relative positions of the remaining characters. (ie, “ACE” is a subsequence of “ABCDE” while<br> “AEC” is not).<br>
      Sample Input Format:<br>
          
      The first argument of input contains a string, A.<br>
      The second argument of input contains a string, B.<br>
      Output Format:<br>
          
       Return an integer representing the answer as described in the problem statement.<br>
      Constraints:<br>
          
       1 <= length(A), length(B) <= 700<br>
      Example :<br>
      
      Input 1:<br>
           A = "abc"<br>
           B = "abc"<br>
      Output 1:<br>
           1

       Explanation 1:<br>
          Both the strings are equal.<br>

      Input 2:<br>
           A = "rabbbit" <br>
           B = "rabbit"<br>

      Output 2:<br>
           3<br>

       Explanation 2:<br>
          These are the possible removals of characters:<br>
           => A = "ra_bbit" <br>
           => A = "rab_bit" <br>
           => A = "rabb_it"<br>
        
     Note: "_" marks the removed character.<br>

  
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
