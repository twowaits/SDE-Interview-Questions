/**
Two strings are anagrams if they are permutations of each other. 
For example, “aaagmnrs” is an anagram of “anagrams”. Given an array of strings, 
remove each string that is an anagram of an earlier string, then return the remaining 
array in sorted order.

Github: https://github.com/twowaits/SDE-Interview-Questions/tree/master/Atlassian#coding

Approach:

Idea is to simply check if the current string in vector is an anagram of the previous
string, if yes. then mark dp[i] (i = current index) as true.
else it will remain false.

this way we have the indexes of strings to be removed.
dp[i] = true; represents that ith location string has to be removed as per our questions demand.

at last we will sort the output and print it all.


Explaining the checkAnagram() function:

here we are just storing the count of all alphabets found in string s1 and s2 
in respective dp1 and dp2 vectors.

next, check if count of alphabets are balanced for both the strings or not.
if the count remains balanced then it's an anagram else it's not.

**/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int getNumValue(char s)
{
    return ((int)s - '0') - 48;
}

// traverse the string
void traverse(string s, vector<int> &dp)
{
    for (int i = 0; i < s.length(); i++)
    {
        int index = getNumValue(s[i]);
        dp[index]++;
    }
}

bool checkAnagram(string s1, string s2)
{

    vector<int> dp1(27, 0);
    vector<int> dp2(27, 0);

    traverse(s1, dp1);
    traverse(s2, dp2);

    for (int i = 1; i <= 26; i++)
    {
        if (dp1[i] != dp2[i])
        {
            return false;
        }
    }
    return true;
}

vector<string> solve(vector<string> input, vector<string> &output, int n)
{

    vector<bool> dp(n, false);

    for (int i = 1; i < dp.size(); i++)
    {
        dp[i] = checkAnagram(input[i - 1], input[i]);
    }

    // index 0 will never be removed. (think why)
    output.push_back(input[0]);

    for (int i = 1; i < dp.size(); i++)
    {
        if (!dp[i])
        {
            output.push_back(input[i]);
        }
    }

    return output;
}

int main()
{
    int n;
    cin >> n;
    vector<string> input(n);
    vector<string> output;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    // returns the unsorted output
    solve(input, output, n);

    // sorting the output here
    sort(output.begin(), output.end());

    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << ", ";
    }
}