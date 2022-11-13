# Fill up buckets
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given <strong style="user-select: auto;">n</strong>&nbsp;buckets and infinite number of balls. The maximum capacity of each bucket is given in an array <strong style="user-select: auto;">capacity[]</strong>. Find the number of ways to fill the buckets with balls such that each bucket has <strong style="user-select: auto;">atleast 1</strong> ball and all the buckets have <strong style="user-select: auto;">distinct</strong> number of balls in them.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:&nbsp;</strong>Since the answer may be very large, calculate the answer&nbsp;modulo <strong style="user-select: auto;">10^9+7.</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>n = 1
capacity = [6]
<strong style="user-select: auto;">Output: </strong>6
<strong style="user-select: auto;">Explanation: </strong>Since there is only one 
bucket. It may hold any number of balls 
ranging from 1 to 6.
</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>n = 2 
capacity = [5, 8]
<strong style="user-select: auto;">Output: </strong>35
<strong style="user-select: auto;">Explanation: </strong>If the first bucket has 1
ball in it then the second bucket cant have 1 
ball, so the second bucket has 8-1 = 7 choices.
So the first bucket has 5 choices and for each
choice second bucket has 7 choices.
So total there are 35 ways.
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">totalWays()</strong>&nbsp;which takes <strong style="user-select: auto;">n</strong> and <strong style="user-select: auto;">capacity[]</strong>&nbsp;as input parameters and returns the <strong style="user-select: auto;">number of&nbsp;possible ways</strong> to&nbsp;fill&nbsp;the&nbsp;buckets. Since the answer may be very large, calculate the answer&nbsp;modulo <strong style="user-select: auto;">10^9+7.</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n*log(n))&nbsp;<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n&nbsp;&lt;= 100000<br style="user-select: auto;">
1 &lt;= capacity[i] &lt;= 100000</span></p>
</div>