# Maximum Sub-String after at most K changes
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">We have a string <strong style="user-select: auto;">s</strong>&nbsp;of length <strong style="user-select: auto;">n</strong>, which contains&nbsp;only <strong style="user-select: auto;">UPPERCASE</strong> characters and we have a number <strong style="user-select: auto;">k</strong> (always less than <strong style="user-select: auto;">n</strong>). We can make at most <strong style="user-select: auto;">k</strong> changes&nbsp;in our string.&nbsp;In one change, you can replace any <strong style="user-select: auto;">s[i] </strong>(0&lt;= i &lt; n) with any uppercase character (from 'A' to 'Z').&nbsp;After <strong style="user-select: auto;">k</strong> changes, find the maximum possible length of the&nbsp;sub-string&nbsp;which have all same characters.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>s = "ABAB", k = 2
<strong style="user-select: auto;">Output: </strong>4
<strong style="user-select: auto;">Explanation: </strong>Change 2 'B' into 'A'. 
Now s = "AAAA"</span>

<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>s = "ADBD", k = 1
<strong style="user-select: auto;">Output: </strong>3
<strong style="user-select: auto;">Explanation: </strong>Change 'B' into 'D'.
Now s = "ADDD"</span>

<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">characterReplacement()&nbsp;</strong>which takes&nbsp;<strong style="user-select: auto;">s</strong>&nbsp;and&nbsp;<strong style="user-select: auto;">k</strong>&nbsp;as input parameters and returns the maximum length of sub-string after doing k changes.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(26)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 &lt;=&nbsp;k &lt; n</span></p>
</div>