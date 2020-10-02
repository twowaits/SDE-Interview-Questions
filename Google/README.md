
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
                
- You are given a string S ( having lowercase English letters only). In one operation, you can remove the substring “pr” from the string S and get amount X or you can remove the substring “rp” and get the amount Y. 
Find the maximum amount you can get if you perform zero or more such operations optimally. 

    Note : 

    - Substring of a string S is defined as a continuous sequence of characters in S.
    - After removing “pr” or “rp”, the order of remaining letters should remain the same.
- Given an array A of N integers and another array B of M integers (not necessarily distinct). The task is to find the minimum number of elements to be added in B so that A becomes subsequence of B. Note that you can add elements at any position in B. 
A subsequence is a sequence that can be derived by deleting some or no elements from the sequence without changing the order of remaining elements. 
