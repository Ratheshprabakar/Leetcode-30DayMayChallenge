# Leetcode-30DayMayChallenge
This repository will contains the solutions for Leetcode-30DayMayChallenge


---

***Day 1*** :You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1,2,....,n] and you want to find out the first bad one, which causes all the following ones to be bad.

You are given a function to int isBadVersion(Version) which will return whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the function.

Given n = 5, and version = 4 is the first bad version.

call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true

Then 4 is the first bad version

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayMayChallenge/blob/master/Day1.c)

---
***Day 2*** :You are given strings J representing the types of stones that are jewels, and S representing the stones you have. Each character in S is a type of stone you have. Each character in S is a type of stone you have. You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:
Input : J="aA", S="aAAbbbb"
Output : 3

Example 2:
Input : J="z", S="ZZ"
Output : 0

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayMayChallenge/blob/master/Day2.c)

---
***Day 3*** :Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines, otherwise, it will return false.

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
***Day 4*** :Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

Input : 5
Output : 2
Explanation : The binary representation of 5 is 101(no leading zero bits), and its complement is 010. So you need to output 2.

Input : 1
Output : 0
Explanation : The binary representation of 1 is 1 (no leeding zero bits), and its complement is 0. So you need to output 0.

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayMayChallenge/blob/master/Day4.c)

---

