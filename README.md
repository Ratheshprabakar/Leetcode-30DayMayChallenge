# Leetcode-30DayMayChallenge
This repository will contains the solutions for Leetcode-30DayMayChallenge


---

***Day 1 (First Bad Version)*** :You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1,2,....,n] and you want to find out the first bad one, which causes all the following ones to be bad.

You are given a function to int isBadVersion(Version) which will return whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the function.

Given n = 5, and version = 4 is the first bad version.

call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true

Then 4 is the first bad version

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayMayChallenge/blob/master/Day1.c)

---
***Day 2(Jewels and Stones)*** :You are given strings J representing the types of stones that are jewels, and S representing the stones you have. Each character in S is a type of stone you have. Each character in S is a type of stone you have. You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:
Input : J="aA", S="aAAbbbb"
Output : 3

Example 2:
Input : J="z", S="ZZ"
Output : 0

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayMayChallenge/blob/master/Day2.c)

---
***Day 3(Ransom Note)*** :Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines, otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Input : ransomNote = "a", magazine ="b"
Ouput : false

Input : ransomNote = "aa", magazine = "ab"
Output : false

Input : ransomeNote = "aa", magazine = "aab"
Output : true

You may assume that both strings contain only lowercase letters.

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayMayChallenge/blob/master/Day3.c)

---
***Day 4(Number Complement)*** :Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

Input : 5
Output : 2
Explanation : The binary representation of 5 is 101(no leading zero bits), and its complement is 010. So you need to output 2.

Input : 1
Output : 0
Explanation : The binary representation of 1 is 1 (no leeding zero bits), and its complement is 0. So you need to output 0.

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayMayChallenge/blob/master/Day4.c)

---
***Day 5(First Unique Character in a String)*** :Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1

s="leetcode"
return 0

s="loveleetcode"
return 2.

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayMayChallenge/blob/master/Day5.c)

---
***Day 6( Majority Element)*** :Given an array of size n, find the majority element. The majority element is the element that appears more than floor of n/2 times.

You may assume that the array is non-empty and the majority element always exists in the array.

Input : [3,2,3]
Output : 3

Input : [2,2,1,1,1,2,2]
Output : 2

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayMayChallenge/blob/master/Day6.c)

---
***Day 9(Valid Perfect Square)*** :Given a positive integer num, write a function which returns True if num is a perfect square else false

Note : Do not use any built-in library function such as sqrt.

Input : 16
Output : true

Input : 14
Output : false

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayMayChallenge/blob/master/Day9.c)

---
***Day 12(Single Element in a Sorted Array)*** :You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.

Example 1:

Input: [1,1,2,3,3,4,4,8,8]
Output: 2

Example 2:

Input: [3,3,7,7,10,11,11]
Output: 10
 

Note: Your solution should run in O(log n) time and O(1) space.

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayMayChallenge/blob/master/Day12.c)

---
***Day 13(Remove K digits)*** :Given a non-negative integer num represented as a string, remove k digits from the number so that the new number is the smallest possible.

Note : The length of num is less than 10002 and will be >=k.
The given num does not contain any leading zero.

Input : num ="1432219", k=3
Output : "1219"
Explanation : Remove the threee digits 4,3, and 2 to form the new number 1219 which is the smallest.

Input : num="10200", k=1
Output : "200"
Explanation : Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.

Input : num="10", k="2"
Output : "0"
Explanation : Remove all the digits from the number and it is left with nothing which is 0.


[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayMayChallenge/blob/master/Day13.c)

---



```
Feel free to make PR :)
```
