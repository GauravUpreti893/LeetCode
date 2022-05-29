# Minimize the Heights I
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr[]</strong>&nbsp;denoting heights of <strong style="user-select: auto;">N</strong> towers and a positive integer <strong style="user-select: auto;">K</strong>, you have to modify the height&nbsp;of each&nbsp;tower either by increasing or decreasing them by <strong style="user-select: auto;">K</strong> only once.<br style="user-select: auto;">
Find out what could be the possible&nbsp;minimum difference of the height&nbsp;of shortest and longest towers after you have modified each tower.<br style="user-select: auto;">
<strong style="user-select: auto;">Note: </strong>Assume that height of the tower can be negative.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">A slight modification of the problem can be found <a href="https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1" target="_blank" style="user-select: auto;">here</a>.&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>K = 2, N = 4
Arr[] = {1, 5, 8, 10}
<strong style="user-select: auto;">Output:</strong>
5
<strong style="user-select: auto;">Explanation:</strong>
The array can be modified as 
{3, 3, 6, 8}. The difference between 
the largest and the smallest is 8-3 = 5.
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>K = 3, N = 5
Arr[] = {3, 9, 12, 16, 20}
<strong style="user-select: auto;">Output:</strong>
11
<strong style="user-select: auto;">Explanation:</strong>
The array can be modified as
{6,&nbsp;12,&nbsp;9,&nbsp;13,&nbsp;17}. The difference between 
the largest and the smallest is 17-6 = 11.&nbsp;
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">getMinDiff()</strong>&nbsp;which takes the <strong style="user-select: auto;">arr[], n</strong>&nbsp;and&nbsp;<strong style="user-select: auto;">k&nbsp;</strong>as input parameters and returns an integer&nbsp;denoting the minimum difference.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*logN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints</strong><br style="user-select: auto;">
1 ≤ K&nbsp;≤ 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 ≤ N&nbsp;≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ Arr[i] ≤ 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>