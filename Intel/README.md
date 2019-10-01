# Intel Interview Questions:

- What is the output of the following code:

    #include<stdio.h><br/>
    int main(){<br/>
        char x;<br/>
        for(x = 0; x < 128; x++)<br/>
            printf("%d", x);<br/>
        return 0;<br/>
    }

- Write a C program to print the following:

    5 4 3 2 1<br/>
    4 3 2 1<br/>
    3 2 1<br/>
    2 1<br/>
    1

- Write a C program to print the fibbonaci series using recursion, which part of memory does your program uses.

- How the floating points numbers are stored in memory, explain little and big endian.

- Explain in detail with examples the practicle usecase of structure, enum and union.

# Coding Question

Ellen had huge fight with her wife Portia, she stromed out of her house and wanted to spend outside as long as possible. So, she decided to take a walk to her neighbour, she want to visit her neighbour's houses and tell them what a b*tch her wife is and cry about it.
<br/>
She can visit a house only once, because if she get to visit again the neighbours get annoyed and kick her off.
<br/>
She can only visit house 'B' from 'A', only if its an adjacent neighbour of house 'A'.
If t is the time taken by Ellen on each house, find the longest duration she can stay away from her wife.
<br/>
Figure:<br/>
In  graph G, 2 and 3 are neighbours of 1, and 1, 4 and 5 are neighbours of 2 and so on.

Input format:<br/>
The first line contain two space-separated integes n and t<br/>
Each of the n line contains house i and its neighbours where i ranges from 1 to n

Constraints:<br/>
1 <= n <= 10^5<br/>
1 <= t <= 30

Output format:<br/>
A single integer denoting the time spend by Ellen away form her wife.

Sample Input 0<br/>
8 1<br/>
1 2 3<br/>
2 1 4 5<br/>
3 1 6 7<br/>
4 2 8<br/>
5 2 8<br/>
6 3 8<br/>
7 3 8<br/>
8 4 5 6 7<br/>

Sample Output 0<br/>
5

Sample Input 1<br/>
5 10<br/>
1 2<br/>
2 3<br/>
3 4 <br/>
4 5<br/>
5 0

Sample Output 1<br/>
40