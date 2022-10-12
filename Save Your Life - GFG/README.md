# Save Your Life
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string&nbsp;<strong style="user-select: auto;">w</strong>, integer array <strong style="user-select: auto;">b,</strong> &nbsp;character array <strong style="user-select: auto;">x&nbsp;</strong>and an integer <strong style="user-select: auto;">n</strong>. <strong style="user-select: auto;">n</strong>&nbsp;is the size of array <strong style="user-select: auto;">b</strong> and array&nbsp;<strong style="user-select: auto;">x</strong>. Find a substring which has the sum of the ASCII values of its every character, as maximum. ASCII values of some characters&nbsp;are redefined.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong></span><strong style="user-select: auto;">&nbsp;</strong><span style="font-size: 18px; user-select: auto;">Uppercase &amp; lowercase both will be present in the string&nbsp;<strong style="user-select: auto;">w</strong>. Array <strong style="user-select: auto;">b</strong>&nbsp;and Array <strong style="user-select: auto;">x</strong>&nbsp;contain corresponding redefined ASCII values. For each i,&nbsp;0&lt;=ib[i] contain redefined ASCII value of character&nbsp;<strong style="user-select: auto;">x[i]</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
W = abcde
N = 1
X[] = { 'c' }
B[] = { -1000 }
<strong style="user-select: auto;">Output:</strong>
de
<strong style="user-select: auto;">Explanation:
</strong>Substring "de" has the
maximum sum of ascii value,
including c decreases the sum value</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
W = dbfbsdbf 
N = 2
X[] = { 'b','s' }
B[] = { -100, 45  }
<strong style="user-select: auto;">Output:</strong>
dbfbsdbf</span><span style="font-size: 18px; user-select: auto;">
<strong style="user-select: auto;">Explanation:
</strong>Substring "dbfbsdbf</span><span style="font-size: 18px; user-select: auto;">" has the maximum
sum of ascii value.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">maxSum()</strong>&nbsp;which takes&nbsp;string <strong style="user-select: auto;">W</strong>, character array <strong style="user-select: auto;">X</strong>, integer array <strong style="user-select: auto;">B</strong>, integer <strong style="user-select: auto;">N</strong> as length of array <strong style="user-select: auto;">X</strong> and <strong style="user-select: auto;">B</strong>&nbsp;as input parameters and returns the substring with the maximum sum of ascii value.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(|W|)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1&lt;=|W|&lt;=100000<br style="user-select: auto;">
1&lt;=|X|&lt;=52<br style="user-select: auto;">
-1000&lt;=B<sub style="user-select: auto;">i</sub>&lt;=1000</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Each character of W and A will be from a-z, A-Z.</span></p>
</div>