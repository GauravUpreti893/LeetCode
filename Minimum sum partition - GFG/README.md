# Minimum sum partition
## Hard
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array&nbsp;<strong style="user-select: auto;">arr</strong> of size <strong style="user-select: auto;">n&nbsp;</strong>containing <strong style="user-select: auto;">non-negative </strong>integers, the task is to divide it into two sets <strong style="user-select: auto;">S1</strong> and <strong style="user-select: auto;">S2</strong> such that the absolute difference between their sums is minimum and find the <strong style="user-select: auto;">minimum</strong> difference</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: N = 4, arr[] = {1, 6, 11, 5}</span> <span style="font-size: 18px; user-select: auto;">
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation</strong>: </span>
<span style="font-size: 18px; user-select: auto;">Subset1 = {1, 5, 6}, sum of Subset1 = 12 
Subset2 = {11}, sum of Subset2 = 11  </span> <div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></div>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N = 2, arr[] = {1, 4}
<strong style="user-select: auto;">Output: </strong>3
<strong style="user-select: auto;">Explanation</strong>: 
Subset1 = {1}, sum of Subset1 = 1
Subset2 = {4}, sum of Subset2 = 4</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function <strong style="user-select: auto;"><code style="user-select: auto;">minDifference</code>()&nbsp;</strong>which takes <strong style="user-select: auto;">N</strong> and array <strong style="user-select: auto;">arr </strong>as input parameters and returns the integer value</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N*|sum of array elements|)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N*|sum of array elements|)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤&nbsp;N*|sum of array elements| ≤ 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
0 &lt; arr[i] &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
</div>