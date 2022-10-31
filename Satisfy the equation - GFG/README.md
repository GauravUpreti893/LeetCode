# Satisfy the equation
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">A[ ]</strong> of <strong style="user-select: auto;">N</strong> of&nbsp; integers, find the index of values that satisfy<strong style="user-select: auto;"> A + B = C + D</strong> where <strong style="user-select: auto;">A,B,C</strong> &amp; <strong style="user-select: auto;">D</strong> are integers values in the array.<br style="user-select: auto;">
<strong style="user-select: auto;">Note: </strong>As there may be multiple pairs satisfying the equation return lexicographically smallest order of&nbsp;&nbsp;A, B, C and D and return&nbsp;all as -1 if there are no pairs satisfying the equation.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">N = </strong>7</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">A[] = </strong>{3, 4, 7, 1, 2, 9, 8}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">0 2 3 5</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">A[0] + A[2] = 3+7 = 10
A[3] + A[5] = 1+9 = 10</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">N = </strong>4</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">A[] = </strong>{424, 12, 31, 7}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">-1 -1 -1 -1</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">There are no pairs satisfying the equation.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">satisfyEqn()</strong> which takes an Integer N and an array A[] of size N as input and returns a vector of 4 integers denoting A, B, C, and D respectively.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N<sup style="user-select: auto;">2</sup>*logN<sup style="user-select: auto;">2</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N<sup style="user-select: auto;">2</sup>)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 500<br style="user-select: auto;">
1 &lt;= A[i] &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
</div>