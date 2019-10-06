# Grab Interview Questions
* [Coding Round Questions](#coding)
* [Technical Interview Questions](#tech)
   * [Data Structures and Algorithms](#dsalg)
   * [DBMS](#dbms)
   * [Operating System](#os)
   * [Miscellaneous](#misc)
* [References](#ref)
____
<b name="coding">Coding round questions</b><br/>
- In an integer array, find a pair of numbers which add up to a given number.
- Write a function that add 1 to LinkedList number
  ```
  [2]->[4]->[5]->[7]->[3]->[6]
  after plus 1
  [2]->[4]->[5]->[7]->[3]->[7]
  ```
- Find the count of all perfect squares between two numbers a and b.
- Given an array of N integers, find the longest leading fragment of array which contains equal no. of X and Y. Expected time complexity is O(n).
- There're 3 kinds of bus ticket.
      1: ticket 1 cost 2 and can be used for a day.
      2: ticket 2 cost 7 and can be used for a consecutive 7 days.
      3: ticket 3 cost 25 can be used for a month. Assume month here means 30 consecutive days.

  Now there's a array filled with elements. Each element value is a date for a person to travel. This array has already been sorted in ascending order, like {1,3,4,5,11,12,23,24,30}.
  Obviously the final day is 30th and first day is 1st.

  So for any given array from a person to travel, how can this person cost least ?
- Given N rows of seats in a movie theater, each row with seats labeled A to K some seats are reserved. A 3 person family want seats next to each other (seats across aisle is not allowed), return all available options.

     Reserved seat will be given like "1A 2B 40G".
- Design a class to calculate moving average of last N numbers in a stream of real numbers.
- Format a string of numbers to display a currency - example" "1234.678" to "1,234.68".
- Given an array find the next greater element.
- Find the distance between any two nodes of the tree.
- There is NPM JSON API for getting NPM packages info. For example the following URL allows for getting information about the latest version of "forever" package:
  http://registry.npmjs.org/forever/latest
  This request will result in a JSON, containing many fields, including dependencies field:
  ```dependencies: {
    cliff: "~0.1.9",
    clone: "^1.0.2",
    colors: "~0.6.2",
    flatiron: "~0.4.2",
    forever-monitor: "~1.7.0",
    ...
    }
    ```

  This is a list of direct dependencies of an NPM package.

  Write a function getAllDependencies(packageName) which takes in packageName parameter as a string and returns an array of strings of both direct and all indirect (recursive) dependencies of the given package, fetched from the API described above. For example, if A depends on B, and B depends on C and D, getAllDependencies('A') should return ['B', 'C', 'D']. The result should not contain duplicates.

  In a correct implementation, getAllDependencies("forever") should return an array with length about 200+ (as of the time we wrote this question and might be different in the future).

  Include a list of tools that needs to be installed to run your code and instructions on how to run your program.
  
  <i><u>NOTE:</u></i>
  
  1. Don’t try to code your solution in browser environment, response from NPM API will not pass CORS checks in browser.
  2. You should not care about package versions (only need the latest).
  3. You should not care about development dependencies.
  4. The function should return the array (or a promise of the array if your function is async), instead of just printing the result.
  
  <i><u>Base level expectations:</u></i>
  
  Code correctness
  Code readability
  Error-handling: do not assume your calls to the endpoint will always succeed
  
  <i><u>Bonus points for:</u></i>
  
  Use of concurrency
- Find the total number of heaps that could be formed with n distinct integers. It has a dynamic programming approach.


----
<b name="tech">Technical Interview Questions</b>
<br/>
<i><u name="dsalg">Data Structures and Algorithms</u></i>
- Minimum Element in Stack.
- Top view of tree.
- Flip the ith bit without using ~.
- Queue using two stacks.
-  Right view of a binary search tree.
-  Find out the last nth node in a linked list.
- Write code for column wise tree traversal.
- Reverse a sentence of words.
- How do you check that a given binary tree is a valid balanced binary search tree?  
- You receive a bit stream (0 and 1). Continuously receive a stream of bit, each time, you have to determine whether the current value is divisibility by 3 and print True or False.
- Given an array of unsorted positive integers, find the length of maximum subarray containing consecutive integers.

<br/>
<i><u name="dbms">DBMS</u></i>

- DB Concurrency.
<br/>
<i><u name="misc">Miscellaneous</u></i>

- What is the use of join() and yield() in Thread.
- What is a singleton class and how to protect it from reflection?
- Explain JVM architecture.
- What is Stack Frame ?
- What are dockers and containers?


----
<b name="refer">References</b>
<br/>
- Reference for: the number of heaps from n-distinct integer: https://www.geeksforgeeks.org/number-ways-form-heap-n-distinct-integers/