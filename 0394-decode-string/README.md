<h2><a href="https://leetcode.com/problems/decode-string/">394. Decode String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an encoded string, return its decoded string.</p>

<p style="user-select: auto;">The encoding rule is: <code style="user-select: auto;">k[encoded_string]</code>, where the <code style="user-select: auto;">encoded_string</code> inside the square brackets is being repeated exactly <code style="user-select: auto;">k</code> times. Note that <code style="user-select: auto;">k</code> is guaranteed to be a positive integer.</p>

<p style="user-select: auto;">You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, <code style="user-select: auto;">k</code>. For example, there will not be input like <code style="user-select: auto;">3a</code> or <code style="user-select: auto;">2[4]</code>.</p>

<p style="user-select: auto;">The test cases are generated so that the length of the output will never exceed <code style="user-select: auto;">10<sup style="user-select: auto;">5</sup></code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "3[a]2[bc]"
<strong style="user-select: auto;">Output:</strong> "aaabcbc"
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "3[a2[c]]"
<strong style="user-select: auto;">Output:</strong> "accaccacc"
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "2[abc]3[cd]ef"
<strong style="user-select: auto;">Output:</strong> "abcabccdcdcdef"
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters, digits, and square brackets <code style="user-select: auto;">'[]'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> is guaranteed to be <strong style="user-select: auto;">a valid</strong> input.</li>
	<li style="user-select: auto;">All the integers in <code style="user-select: auto;">s</code> are in the range <code style="user-select: auto;">[1, 300]</code>.</li>
</ul>
</div>