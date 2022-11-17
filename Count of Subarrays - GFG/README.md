# Count of Subarrays
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of <strong style="user-select: auto;">N</strong> positive integers&nbsp; <strong style="user-select: auto;">Arr<sub style="user-select: auto;">1</sub>, Arr<sub style="user-select: auto;">2</sub> ............ Arr<sub style="user-select: auto;">n</sub></strong>. The value of each contiguous subarray of given array is the <strong style="user-select: auto;">maximum element present in that subarray</strong>. The task is to return the number of subarrays having value strictly greater than <strong style="user-select: auto;">K</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 3, K = 2
Arr[] = {3, 2, 1}
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The subarrays having value
strictly greater than K are: [3], [3, 2]
and [3, 2, 1]. Thus there are 3 such
subarrays.
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4, K = 1
Arr[] = {1, 2, 3, 4}
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation:</strong>&nbsp;There are 9 subarrays having
value strictly greater than K.
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function <strong style="user-select: auto;">countSubarray()</strong>&nbsp;which takes an array <strong style="user-select: auto;">arr,</strong> two integers <strong style="user-select: auto;">n, k,</strong>&nbsp;as input parameters&nbsp;and returns an integer&nbsp;denoting the answer.&nbsp;You don't to print answer or take inputs.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= Arr[i] &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
</div>