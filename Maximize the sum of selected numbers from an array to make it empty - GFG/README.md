# Maximize the sum of selected numbers from an array to make it empty
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a array of<strong style="user-select: auto;"> N</strong> numbers, we need to maximize the sum of selected numbers. At each step, you need to select a number A<sub style="user-select: auto;">i</sub>, delete one occurrence of&nbsp;<strong style="user-select: auto;">A<sub style="user-select: auto;">i</sub>-1 (if exists), and A<sub style="user-select: auto;">i</sub></strong>&nbsp;each from the array. Repeat these steps until the array gets empty. The problem is to maximize the sum of the selected numbers.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[ ] = {1, 2, 2, 2, 3, 4}
<strong style="user-select: auto;">Output :</strong> 10
<strong style="user-select: auto;">Explanation:</strong>
We select 4, so 4 and 3 are deleted leaving us with {1,2,2,2}.
Then we select 2, so 2 &amp; 1 are deleted. We are left with{2,2}.
We select 2 in next two steps, thus the sum is 4+2+2+2=10.
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[ ] = {1, 2, 3} <strong style="user-select: auto;">
Output :</strong>  4
<strong style="user-select: auto;">Explanation:</strong> We select 3, so 3 and 2 are deleted leaving us with {1}. Then we select 1, 0 doesn't exist so we delete 1. thus the sum is 3+1=4.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">maximizeSum()</strong> that takes an array <strong style="user-select: auto;">(arr)</strong>, sizeOfArray <strong style="user-select: auto;">(n),</strong>&nbsp;and return the maximum sum of the selected numbers. The driver code takes care of the printing.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ A[i] ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong> Numbers need to be selected from maximum to minimum.</span></p>
</div>