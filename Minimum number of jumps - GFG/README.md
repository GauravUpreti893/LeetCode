# Minimum number of jumps
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of <strong style="user-select: auto;">N</strong> integers <strong style="user-select: auto;">arr[]</strong> where each element represents the max length of the jump that can be made forward from that element. Find&nbsp;the minimum number of jumps to reach the end of the array (starting from the first element).&nbsp;If an element is <strong style="user-select: auto;">0</strong>, then you cannot move through that element.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note: </strong>Return -1 if you can't reach the end of the array.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span><span style="font-size: 18px; user-select: auto;"> </span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;">N = 11 </span>
<span style="font-size: 18px; user-select: auto;">arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} </span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> 3 </span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong> </span>
<span style="font-size: 18px; user-select: auto;">First jump from 1st element to 2nd 
element with value 3. Now, from here 
we jump to 5th element with value 9, 
and from here we will jump to the last. </span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input :</span></strong>
<span style="font-size: 18px; user-select: auto;">N = 6
arr = {1, 4, 3, 2, 6, 7}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> 2 
<strong style="user-select: auto;">Explanation: 
</strong>First we jump from the 1st to 2nd element 
and then jump to the last element.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete function <strong style="user-select: auto;">minJumps()</strong> which takes the array <strong style="user-select: auto;">arr</strong> and it's size <strong style="user-select: auto;">N</strong> as input parameters and returns the minimum number of jumps. If not possible return -1.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">7</sup><br style="user-select: auto;">
0 ≤ arr<sub style="user-select: auto;">i</sub> ≤ 10<sup style="user-select: auto;">7</sup></span></p>
</div>