<h2><a href="https://leetcode.com/problems/binary-string-with-substrings-representing-1-to-n/">1016. Binary String With Substrings Representing 1 To N</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a binary string <code style="user-select: auto;">s</code> and a positive integer <code style="user-select: auto;">n</code>, return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if the binary representation of all the integers in the range </em><code style="user-select: auto;">[1, n]</code><em style="user-select: auto;"> are <strong style="user-select: auto;">substrings</strong> of </em><code style="user-select: auto;">s</code><em style="user-select: auto;">, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise</em>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous sequence of characters within a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "0110", n = 3
<strong style="user-select: auto;">Output:</strong> true
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre><p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "0110", n = 4
<strong style="user-select: auto;">Output:</strong> false
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is either <code style="user-select: auto;">'0'</code> or <code style="user-select: auto;">'1'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>