# Stepping Numbers
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A number is called a stepping number if all adjacent digits have an absolute difference of 1, e.g. '321' is a Stepping Number while 421 is not. Given two integers<strong style="user-select: auto;"> n&nbsp;</strong>and <strong style="user-select: auto;">m</strong>, find the count of all the stepping numbers in the range [n, m].<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 0, m = 21
<strong style="user-select: auto;">Output:</strong> 13
<strong style="user-select: auto;">Explanation: </strong>Stepping no's are 0 1 2 3 4 5
6 7 8 9 10 12 21</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 10, m = 15
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation: </strong>Stepping no's are 10, 12</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">steppingNumbers()</strong>&nbsp;which takes the integer <strong style="user-select: auto;">n</strong>&nbsp;and integer <strong style="user-select: auto;">m</strong>&nbsp;as input parameters and returns the number of stepping numbers in the range between <strong style="user-select: auto;">n</strong> and <strong style="user-select: auto;">m</strong>.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong> O(log(M))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(SN) where SN is the number of stepping numbers in the range</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
0 ≤ N &lt; M ≤ 10</span><sup style="user-select: auto;"><span style="font-size: 15px; user-select: auto;">7</span></sup></p>
</div>