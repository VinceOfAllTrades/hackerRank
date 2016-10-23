# [Circular Array Rotation](https://www.hackerrank.com/challenges/circular-array-rotation)

**By [darkshadows](https://www.hackerrank.com/darkshadows)**    
**Algorithms > Warmup**

John Watson performs an operation called a *right circular rotation* on an array of integers, *(a<sub>0</sub>, a<sub>1</sub>, a<sub>2</sub>, ... , a<sub>n-1</sub>)*. After performing one right circular rotation operation, the array is transformed to *(a<sub>n-1</sub>, a<sub>0</sub>, a<sub>1</sub>, ... , a<sub>n-2</sub>)*.

Watson performs this operation *k* times. To test Sherlock's ability to identify the current element at a particular position in the rotated array, Watson asks *q* queries, where each query consists of a single integer, *m* , for which you must print the element at index *m* in the rotated array (*a<sub>m</sub>*).

### Input Format

The first line contains 3 space-separated integers, *n*, *k*, and *q*, respectively. The second line contains *n* space-separated integers, where each integer *i* describes array element *a<sub>i</sub>*.
Each of the *q* subsequent lines contains a single integer denoting *m*.

### Constraints

- *1 <= n <= 10<sup>5</sup>*
- *1 <= a<sub>i</sub> <= 10<sup>5</sup>*
- *1 <= k <= 10<sup>5</sup>*
- *1 <= q <= 500*
- *0 <= m <= n-1*

### Output Format

For each query, print the value of the element at index *m* of the rotated array on the new line.

#### Sample Input

    3 2 3
    1 2 3
    0
    1
    2

#### Sample Output
    2
    3
    1
