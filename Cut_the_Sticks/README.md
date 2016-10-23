# [Cut the Sticks](https://hackerrank.com/challenges/cut-the-sticks)

**By [shashank21j](https://hackerrank.com/shashank21j)**    
**Algorithms > Implementation**

You are given *N* sticks, where the *length* of each stick is a positive integer. A cut operation is performed on the sticks such that all of them are reduced by the length of the smallest stick.

Given the length of *N* sticks, prints the number of sticks that are left before each subsequent *cut operation*.

### Input Format

The first line contains a single integer *N*.    
The next line contains *N* space-separated integers, *(a<sub>1</sub>, a<sub>2</sub>, ... , a<sub>N</sub>)*, where *a<sub>i</sub>* represents the length of the *i<sup>th</sup>* stick.

#### Constraints

- *1 <= N <= 1000*
- *1 <= a<sub>i</sub> <= 1000*

### Output Format

For each operation, print the number of sticks that are cut on separate lines.

#### Sample Input

```
6
5 4 4 2 2 8
```

#### Sample Output

```
6
4
2
1
```
