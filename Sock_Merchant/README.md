# [Sock Merchant](https://www.hackerrank.com/challenges/sock-merchant)

**By [Shafaet](https://www.hackerrank.com/shafaet)**    
**Algorithms > Implementation**

John's clothing store has a pile of *n* loose socks where each sock *i* is labeled with an integer, *c<sub>i</sub>*, denoting its color. He wants to sell as many socks as possible, but his customers will only buy them in matching pairs. Two socks, *i* and *j*, are a single matching pair if *c<sub>i</sub> = c<sub>j</sub>*.

Given *n* and the color of each sock, how many pairs of socks can John sell?

### Input Format

The first line contains an integer, *n*, denoting the number of socks.
The second line contains *n* space-separated integers describing the respective values of *(c<sub>0</sub>, c<sub>1</sub>, ... , c<sub>n-1</sub>)*.

#### Contraints

- *1 <= n <= 100*
- *1 <= c<sub>i</sub> <= 100*

### Output Format

Print the total number of matching *pairs* of socks that John can sell.

#### Sample Input

```
9
10 20 20 10 10 30 50 10 20
```

#### Sample Output

```
3
```
 
