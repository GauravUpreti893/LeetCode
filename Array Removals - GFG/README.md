# Array Removals
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr[]</strong> of size <strong style="user-select: auto;">N</strong> and an integer <strong style="user-select: auto;">K</strong>. The task is to&nbsp;find the minimum number of elements that should be removed, such that <strong style="user-select: auto;">A<sub style="user-select: auto;">max</sub>-A<sub style="user-select: auto;">min</sub>&lt;=K.</strong> After the removal of elements, A<sub style="user-select: auto;">max</sub>&nbsp;and A<sub style="user-select: auto;">min</sub>&nbsp;is considered among the remaining elements.&nbsp;</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note:&nbsp;</span></strong><span style="font-size: 18px; user-select: auto;">Can you solve the probelm without using any extra space and O(N*log(N)) time complexity?</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N = 9, K = 4<strong style="user-select: auto;"> </strong> 
arr[] = {1,3,4,9,10,11,12,17,20}
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> Remove 1, 3, 4 from beginning
and 17, 20 from the end.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N = 5, K = 2 
arr[] = {1, 5, 6, 2, 8} 
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> There are multiple ways to
remove elements in this case.
One among them is to remove 5, 6, 8.
The other is to remove 1, 2, 5</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">removals()</strong>&nbsp;which takes the&nbsp;array of&nbsp;integers&nbsp;<strong style="user-select: auto;">arr,</strong>&nbsp;<strong style="user-select: auto;">n&nbsp;</strong>and<strong style="user-select: auto;">&nbsp;k&nbsp;</strong>as parameters and returns an integer, denotes minimum number of elements should be remove to satisfy the condition.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N^2)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N^2)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&nbsp;≤ N ≤ 100</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ Arr[i], K ≤ 10</span><sup style="user-select: auto;">6</sup></p>
</div>