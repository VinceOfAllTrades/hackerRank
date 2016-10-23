# [Angry Professor](https://www.hackerrank.com/challenges/angry-professor)

**By [devuy11](https://hackerrank.com/devuy11)**
**Algorithms > Implementation**

A Discrete Mathematics professor has a class of *N* students. Frustrated with their lack of discipline, he decides to cancel class if fewer than *K* students are present when class starts.

Given the arrival time of each student, determine if the class is canceled.

### Input Format

The first line of input contains *T*, the number of test cases.

Each test case consists of two lines:

1. Two space-separated integers:
 - *N*, the total number of students in the class
 - *K*, the cancelation threshold
2. *N* space-separated integers, *(a<sub>1</sub>, a<sub>2</sub>, ... , a<sub>N</sub>)*, describing the arrival times for each student.

Non-positive arrival times *(a<sub>i</sub> <= 0)* indicate that the student arrived early or on time; positive arrival times *(a<sub>i</sub>)* indicate that the student arrived late.

#### Constraints

- *1 <= T <= 10*
- *1 <= N <= 1000*
- *1 <= K <= N*
- *-100 <= a<sub>i</sub> <= 100*, where *i* is in *[1, N]*

### Output Format

For each test case, print the word `YES` if the class is *cancelled* or `NO` if it is not.

#### Sample Input

```
2
4 3
-1 -3 4 2
4 2
0 -1 2 1
```

#### Sample Output

```
YES
NO
```
