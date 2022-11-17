# Pascal Triangle
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a positive integer <strong style="user-select: auto;">N</strong>, return the <strong style="user-select: auto;">N<sup style="user-select: auto;">th</sup> row&nbsp;of pascal's triangle</strong>.<br style="user-select: auto;">
Pascal's triangle is a triangular&nbsp;array of the binomial coefficients&nbsp;formed by summing up the elements of&nbsp;previous row.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example :</strong><br style="user-select: auto;">
1<br style="user-select: auto;">
1 1<br style="user-select: auto;">
1 2 1<br style="user-select: auto;">
1 3 3 1<br style="user-select: auto;">
For N = 3, return 3rd row i.e 1 2 1</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
<strong style="user-select: auto;">Output:</strong> 1 3 3 1
<strong style="user-select: auto;">Explanation:</strong> 4<sup style="user-select: auto;">th</sup>&nbsp;row of pascal's triangle
is 1 3 3 1.
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
<strong style="user-select: auto;">Output:</strong> 1 4 6 4 1
<strong style="user-select: auto;">Explanation:</strong>&nbsp;5<sup style="user-select: auto;">th</sup>&nbsp;row of pascal's triangle
is 1 4 6 4 1.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function <strong style="user-select: auto;">nthRowOfPascalTriangle()</strong>&nbsp;which takes <strong style="user-select: auto;">n</strong>,&nbsp;as input parameters&nbsp;and returns an array&nbsp;representing the answer.&nbsp;The elements can be large so return&nbsp;it modulo 10<sup style="user-select: auto;">9</sup>&nbsp;+ 7. You don't to print answer or take inputs.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N<sup style="user-select: auto;">2</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N<sup style="user-select: auto;">2</sup>)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 1000</span></p>

<p style="user-select: auto;">&nbsp;</p>
</div>