# Base Equivalence
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a number (<strong style="user-select: auto;">n</strong>)&nbsp;and no. of digits (<strong style="user-select: auto;">m</strong>)&nbsp;to represent the number, we have to check if we can represent <strong style="user-select: auto;">n&nbsp;</strong>using exactly <strong style="user-select: auto;">m</strong> digits in any <strong style="user-select: auto;">base</strong> from <strong style="user-select: auto;">2</strong> to <strong style="user-select: auto;">32</strong>.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: n = 8, m = 2
<strong style="user-select: auto;">Output:</strong>&nbsp;Yes&nbsp;
<strong style="user-select: auto;">Explanation</strong>: Possible in base 3 as 8 in base 3 is 22.  
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>n = 8, m = 3
<strong style="user-select: auto;">Output:&nbsp;</strong>No
<strong style="user-select: auto;">Explanation</strong>: Not possible in any base.</span><span style="font-size: 18px; user-select: auto;"> 
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You dont need to read input or print anything. Complete the function <strong style="user-select: auto;">baseEquiv()&nbsp;</strong>which takes n&nbsp;and m&nbsp;as input parameter and returns "Yes" if its possible to represent the number else "No" without quotes..<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong> O(logN).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n&nbsp;&lt;=10<sup style="user-select: auto;">9</sup><br style="user-select: auto;">
1 &lt;= m&nbsp;&lt;=32</span></p>
</div>