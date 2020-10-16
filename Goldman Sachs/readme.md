
# Goldman Sachs
#### Technical Assessment Round Coding Questions<br/>
_____
 - A binary tree is represented as a series of relationships between each node and the Root node. The relationships are denoted as combinations of "L" and "R", such as L, R, LL, LR... and so on, where each node is left (L) to Root or left-left (LL) or right-left (RL) to the Root node and so on. In this tree, if the sum of digits of the left child node is equal to the sum of digits of the right child node, then their parent is called a Super Node.<br/>
 Write a program to find all the Super Nodes in a given tree, and print the sum of all those Super nodes.<br/>
##### Constraints:
3<=N<=100
##### Sample Input:
8<br/>
21<br/>
L 14<br/>
R 23<br/>
LL 7<br/>
LR 70<br/>
RR 11<br/>
RRL 23<br/>
RRR 32<br/>
##### Sample Output:
46
