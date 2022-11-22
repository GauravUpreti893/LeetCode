# Magic Triplets
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of size n, a triplet (a[i], a[j], a[k]) is called a Magic Triplet if a[i] &lt; a[j] &lt; a[k] and i &lt; j &lt; k. &nbsp;Count the number of magic triplets in a given array.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr = [3, 2, 1]
<strong style="user-select: auto;">Output: </strong>0
<strong style="user-select: auto;">Explanation: </strong>There is no magic triplet.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr = [1, 2, 3, 4]
<strong style="user-select: auto;">Output: </strong>4
<strong style="user-select: auto;">Explanation: </strong>Fours magic triplets are 
(1, 2, 3), (1, 2, 4), (1, 3, 4) and 
(2, 3, 4).</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">countTriplets()</strong>&nbsp;which takes the array nums[] as input parameter and returns the number&nbsp;of magic triplets in the array.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N<sup style="user-select: auto;">2</sup>)&nbsp;<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(1)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= length of array &lt;= 1000<br style="user-select: auto;">
1 &lt;= arr[i] &lt;= 100000</span></p>
</div>